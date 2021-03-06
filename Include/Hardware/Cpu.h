//
//		Copyright :						@2020, ***, All Rights Reserved
//
//		Author :						王科威
//		E-mail :						wangkw531@icloud.com
//		Date :							2020-04-26
//		Description :					硬件设备之CPU类
//
//		History:						Author									Date										Description
//										王科威									2020-04-26									创建
//

#ifndef BASE_HARDWARE_CPU_H
#define BASE_HARDWARE_CPU_H

namespace base
{
	namespace hardware
	{
		class Cpu
		{
		public:
			Cpu(void);
			virtual ~Cpu(void);

			//获取计算机CPU核心数
			const int getCPUCoreNumber(void) const;

			//该方法应当放在线程类下
			int setThreadAffinityMask(
#ifdef WINDOWS
				void* tid = nullptr,
#else
				unsigned long long tid = 0,
#endif//WINDOWS
				const int mask = 0);
		};//class Cpu
	}//namespace hardware
}//namespace base

#endif//BASE_HARDWARE_CPU_H
