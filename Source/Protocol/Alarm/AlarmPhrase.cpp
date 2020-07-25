#include "boost/checked_delete.hpp"
#include "boost/polymorphic_cast.hpp"
#include "Packet/Message/MessagePacket.h"
using AbstractPacket = base::packet::AbstractPacket;
using MessagePacket = base::packet::MessagePacket;
#include "Alarm/FaceAlarm/FaceAlarm.h"
using FaceAlarm = base::alarm::FaceAlarm;
using AbstractAlarm = base::alarm::AbstractAlarm;
#include "Protocol/Message.pb.h"
#include "Protocol/Alarm/Alarm.pb.h"
#include "Protocol/Alarm/AlarmPhrase.h"

namespace base
{
	namespace protocol
	{
		AlarmParser::AlarmParser(){}
		AlarmParser::~AlarmParser(){}

		void* AlarmParser::parseAlarmMessage(void* msg /* = nullptr */)
		{
			msg::MSG* mm{ reinterpret_cast<msg::MSG*>(msg) };
			AbstractPacket* ap{ nullptr };
			msg::Alarm* ma{ mm->release_alarm() };

			if (ap)
			{
				//������Ϣû��������������,ʹ��-1��ʶ

				ap = new(std::nothrow) MessagePacket(
					base::packet::PacketType::PACKET_TYPE_STATUS, -1);

				if (ap)
				{
					AbstractAlarm* aa{ nullptr };
					const msg::AlarmInfo& info{ ma->alarminfo() };
					const msg::AlarmInfo_Type type{ info.type() };

					if (msg::AlarmInfo_Type::AlarmInfo_Type_ATTENDANCE_IN == type ||
						msg::AlarmInfo_Type::AlarmInfo_Type_ATTENDANCE_OUT == type)
					{
						aa = new(std::nothrow) FaceAlarm(
							info.uid(), ma->cid(), static_cast<base::alarm::AlarmType>(type));
					} 
					else
					{
						aa = new(std::nothrow) AbstractAlarm(
							ma->cid(), static_cast<base::alarm::AlarmType>(type));
					}

					if (aa)
					{
						aa->setAlarmPicture(ma->picture());
						aa->setAlarmTime(ma->time());
						for (int i = 0; i != ma->alarminfo().alarmposition().size(); ++i)
						{
							const msg::AlarmPosition pos{ ma->alarminfo().alarmposition()[i] };
							base::alarm::AlarmArea area{ pos.x(), pos.y(), pos.w(), pos.h() };
							aa->addAlarmArea(area);
						}
						ap->setPacketData(aa);
					} 
					else
					{
						boost::checked_delete(boost::polymorphic_downcast<MessagePacket*>(ap));
						ap = nullptr;
					}
				}
			}

			return ap;
		}
	}//namespace protocol
}//namespace base