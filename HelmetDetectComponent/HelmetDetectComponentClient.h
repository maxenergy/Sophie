//
//		Copyright :						@2020, ***, All Rights Reserved
//
//		Author :						王科威
//		E-mail :						wangkw531@icloud.com
//		Date :							2020-06-15
//		Description :					安全帽算法组件客户端类
//
//		History:						Author									Date										Description
//										王科威									2020-05-13									创建
//

#include "boost/shared_ptr.hpp"
#include "Packet/DataPacket.h"
using DataPacket = base::packet::DataPacket;
using DataPacketPtr = boost::shared_ptr<DataPacket>;
#include "Device/Hikvision/HikvisionDevice.h"
using AbstractDevice = base::device::AbstractDevice;
using SurveillanceDevice = base::device::SurveillanceDevice;
using HikvisionDevice = base::device::HikvisionDevice;
using AbstractDevicePtr = boost::shared_ptr<base::device::AbstractDevice>;
#include "DataStruct/UnorderedMap.h"
using AbstractDeviceGroup = UnorderedMap<const std::string, AbstractDevicePtr>;
#include "Network/AbstractClient.h"
using AbstractClient = base::network::AbstractClient;

class HelmetDetectComponentClient : public AbstractClient
{
public:
	HelmetDetectComponentClient(void);
	virtual ~HelmetDetectComponentClient(void);

protected:
	void afterClientPolledMessageProcess(
		const std::string flagID,
		const std::string fromID,
		const std::string toID,
		const std::string msg) override;
	const std::string buildAutoRegisterToBrokerMessage(void) override;

private:
	const std::string getAlgorithmClientInfoByName(const std::string name) const;
	void setAlgorithmClientInfoWithName(
		const std::string name, 
		const std::string value);
	void processComponentMessage(DataPacketPtr pkt);
	void processAlgorithmMessage(
		const std::string fromID,
		DataPacketPtr pkt);
	void processStatusMessage(
		const std::string fromID,
		DataPacketPtr pkt);
	int replyMessageWithResult(
		const std::string fromID,
		const int command = 0,
		const int result = 0,
		const long long sequence = 0);

private:
	int sailStatus;
};//class HelmetDetectComponentClient

