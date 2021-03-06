#include <iostream>
#include "boost/format.hpp"
#include "boost/make_shared.hpp"
#ifdef _WINDOWS
#include "glog/log_severity.h"
#include "glog/logging.h"
#else
#include "glog/log_severity.h"
#include "glog/logging.h"
#endif//_WINDOWS
#include "Define.h"
#include "Error.h"
#include "CommandLine/CommandLine.h"
using CommandLine = base::commandline::CommandLine;
#include "MDCServer.h"
using AbstractServerPtr = boost::shared_ptr<base::network::AbstractServer>;

static std::string gServiceName;
static std::string gUpstreamIP;
static unsigned short gUpstreamPort{ 0 };
static unsigned short gListenPort{ 0 };
static AbstractServerPtr gMDCServerPtr;

static void parseCommandLine(int argc, char** argv)
{
	CommandLine cl;
	cl.setCommandOptions("listen,l", "61001");
	cl.setCommandOptions("upstream,u", "127.0.0.1");
	cl.setCommandOptions("port,p", "61101");
	cl.setCommandOptions("name,n", "WEB");

	if (eSuccess == cl.parseCommandLine(argc, argv))
	{
		const char* upstreamIP{ cl.getParameterByOption("upstream") };
		if (upstreamIP)
		{
			gUpstreamIP.append(upstreamIP);
		}

		const char* upstreamPort{ cl.getParameterByOption("port") };
		if (upstreamPort)
		{
			gUpstreamPort = atoi(upstreamPort);
		}
		
		const char* listenPort{ cl.getParameterByOption("listen") };
		if (listenPort)
		{
			gListenPort = atoi(listenPort);
		}

		const char* serviceName{ cl.getParameterByOption("name") };
		if (serviceName)
		{
			gServiceName.append(serviceName);
		}
	}
}

static int createNewAsynchronousServer(void)
{
	int e{ gMDCServerPtr ? eObjectExisted : eSuccess };

	AbstractServerPtr server{ 
		boost::make_shared<MDCServer>(
			ServerModuleType::SERVER_MODULE_TYPE_MAJORDOMO_BROKER,
			ClientModuleType::CLIENT_MODULE_TYPE_MAJORDOMO_WORKER,
			gUpstreamIP.empty() ? "" : (boost::format("tcp://%s:%d") % gUpstreamIP % gUpstreamPort).str(),
			gServiceName) };
	if (server)
	{
		e = server->startServer(gListenPort);

		if (eSuccess == e)
		{
			gMDCServerPtr.swap(server);
		}
		else
		{
			e = eBadOperate;
		}
	}
	else
	{
		e = eBadNewObject;
	}

	return e;
}

static int destroyAsynchronousServer(void)
{
	int e{ gMDCServerPtr ? eSuccess : eBadOperate };

	if (eSuccess == e)
	{
		e = gMDCServerPtr->stopServer();

		if (eSuccess == e)
		{
			gMDCServerPtr.reset();
		}
		else
		{
			e = eBadOperate;
		}
	}

	return e;
}

int main(int argc, char* argv[])
{
	FLAGS_stderrthreshold = INFO;
	FLAGS_colorlogtostderr = 1;
	google::InitGoogleLogging(argv[0]);
	google::SetLogDestination(INFO,
#ifdef _WINDOWS
		".\\"
#else
		"./"
#endif
	);

	parseCommandLine(argc, argv);
	LOG(INFO) << "Server local listen port is " << gListenPort <<
		", upstream address is " << gUpstreamIP << ", upstream port is " << gUpstreamPort;

	int e{ createNewAsynchronousServer() };
	if (eSuccess == e)
	{
		LOG(INFO) << "Create new asynchronous server result = " << e << ".";
	} 
	else
	{
		LOG(WARNING) << "Create new asynchronous server result = " << e << ".";
	}

	getchar();

	e = destroyAsynchronousServer();
	if (eSuccess == e)
	{
		LOG(INFO) << "Destroy asynchronous server result = " << e << ".";
	}
	else
	{
		LOG(WARNING) << "Destroy asynchronous server result = " << e << ".";
	}

	google::ShutdownGoogleLogging();

    return 0;
}