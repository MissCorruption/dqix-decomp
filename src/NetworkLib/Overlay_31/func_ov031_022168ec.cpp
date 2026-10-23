#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_01ffd34c {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
};

struct Mutex;
void ZeroInitializeMutex(Mutex*);
bool IsContextInactive(ProcessorContext* context);
extern "C" void func_ov031_02216ca0(void);

struct Struct_ov031_0224e5e8_2 { char unknown_0_[8]; char* unknown_8_; };
extern Struct_ov031_0224e5e8_2 data_ov031_0224e5e8;
extern int data_ov031_0224e5f0;

// USA: func_ov031_022168ec
extern "C" ARM void func_ov031_022168ec(void) {
	ZeroInitializeMutex((Mutex*)(data_ov031_0224e5e8.unknown_8_ + 0x13d8));

	*(int*)(data_ov031_0224e5e8.unknown_8_ + 0x13f0) = 0;

	if (*(int*)(data_ov031_0224e5e8.unknown_8_ + 0x1384) != 0) {
		if (!IsContextInactive((ProcessorContext*)(data_ov031_0224e5e8.unknown_8_ + 0x1318))) {
			return;
		}
	}

	PopulateContext((ProcessorContext*)(data_ov031_0224e5e8.unknown_8_ + 0x1318), (unsigned int)func_ov031_02216ca0,
		(unsigned int)&data_ov031_0224e5f0, (unsigned int)(data_ov031_0224e5e8.unknown_8_ + 0x1000), 0x1000, 0x10);
	MarkContextReadyAndSwitch((ProcessorContext*)(data_ov031_0224e5e8.unknown_8_ + 0x1318));
}
