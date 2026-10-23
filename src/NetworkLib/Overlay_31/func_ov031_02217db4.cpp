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
extern "C" void func_ov031_02218098(void);

extern int data_ov031_0224e608;

// USA: func_ov031_02217db4
extern "C" ARM void func_ov031_02217db4(void* arg0, unsigned int arg1) {
	*(int*)((char*)arg0 + 0x1c10) = 0;
	ZeroInitializeMutex((Mutex*)((char*)arg0 + 0x1bf8));
	ZeroInitializeMutex((Mutex*)((char*)arg0 + 0x1a18));
	if (*(int*)((char*)arg0 + 0x1018) == 1) {
		data_ov031_0224e608 = 1;
	} else {
		data_ov031_0224e608 = 0;
	}
	if (*(int*)((char*)arg0 + 0x1ba4) != 0) {
		if (!IsContextInactive((ProcessorContext*)((char*)arg0 + 0x1b38))) {
			return;
		}
	}
	PopulateContext((ProcessorContext*)((char*)arg0 + 0x1b38), (unsigned int)func_ov031_02218098, (unsigned int)arg0, (unsigned int)((char*)arg0 + 0x1000), 0x1000, arg1);
	MarkContextReadyAndSwitch((ProcessorContext*)((char*)((int)arg0 + 0x338) + 0x1800));
}
