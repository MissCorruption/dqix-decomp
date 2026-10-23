#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Timing.h"

extern int data_ov031_0224e53c;
extern "C" int func_ov031_0220db28(void);

struct Struct_ov031_0220da1c {
	char unknown_0_[0x260];
	int unknown_260_;
};

struct Struct_ov031_0220da1c_2 {
	char unknown_0_[0x2000];
	Struct_ov031_0220da1c unknown_2000_;
};

// USA: func_ov031_0220da1c
extern "C" ARM void func_ov031_0220da1c(int arg0) {
	int var0 = DisableIRQInterrupts();
	if (*(int*)((char*)data_ov031_0224e53c + 0x2260) == 9 && arg0 != 9) {
		CancelAlarm((Alarm*)((char*)data_ov031_0224e53c + 0x22cc));
	}
	Struct_ov031_0220da1c_2* var1 = (Struct_ov031_0220da1c_2*)data_ov031_0224e53c;
	if (var1->unknown_2000_.unknown_260_ != 0xb) {
		var1->unknown_2000_.unknown_260_ = arg0;
	}
	if (arg0 == 9) {
		SetTimeout((Alarm*)((char*)data_ov031_0224e53c + 0x22cc), 0x22f5341, (Alarm::PFNCompletion)&func_ov031_0220db28, NULL);
	}
	SetIRQInterruptState(var0);
}
