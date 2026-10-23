#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Timing.h"

extern "C" ARM void func_ov031_0220ef5c(void);
extern "C" ARM void func_ov031_0220d8d4(void);
extern void* data_ov031_0224e53c;

// USA: func_ov031_0220c970
extern "C" ARM int func_ov031_0220c970(unsigned int arg0, unsigned int arg1) {
	int var0 = DisableIRQInterrupts();
	if (data_ov031_0224e53c != 0) {
		SetIRQInterruptState(var0);
		return 1;
	}
	if (arg0 == 0) {
		SetIRQInterruptState(var0);
		return 1;
	}
	if (arg0 & 0x1f) {
		SetIRQInterruptState(var0);
		return 1;
	}
	if (arg1 < 0x2300) {
		SetIRQInterruptState(var0);
		return 6;
	}
	data_ov031_0224e53c = (void*)arg0;
	*(unsigned int*)((char*)arg0 + 0x2000 + 0x260) = 1;
	*(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x80) = 0;
	*(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x68) = 0;
	*(unsigned char*)((char*)data_ov031_0224e53c + 0x2000 + 0x26a) = 0;
	*(unsigned char*)((char*)data_ov031_0224e53c + 0x2000 + 0x26b) = 0;
	*(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x82) = 0;
	*(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0xf8) = 0;
	func_ov031_0220d8d4();
	func_ov031_0220ef5c();
	if (!Is64BitTimerInitialized()) Initialize64BitTimer();
	if (!IsAlarmListInitialized()) InitializeActiveAlarmList();
	ZeroInitializeAlarm((Alarm*)((char*)data_ov031_0224e53c + 0x22cc));
	SetIRQInterruptState(var0);
	return 0;
}
