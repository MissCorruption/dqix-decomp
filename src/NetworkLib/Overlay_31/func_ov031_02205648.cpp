#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_022054fc {
	unsigned short unknown_0_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
};

struct Struct_ov031_0224e204 {
	int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_;
	int unknown_10_; int unknown_14_; int unknown_18_; int unknown_1c_;
};

struct Struct_01ffd34c;

extern "C" int func_ov031_022054fc(Struct_ov031_022054fc* arg0);
extern "C" void func_020c7de4(Struct_ov031_0224e204* arg0, int arg1, int arg2);
struct Mutex;
void ZeroInitializeMutex(Mutex*);
void PopulateContext(ProcessorContext*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void MarkContextReadyAndSwitch(ProcessorContext* context);
extern "C" void func_ov031_022052b4(void);

// USA: func_ov031_02205648
extern "C" ARM int func_ov031_02205648(int arg0, void* arg1, Struct_ov031_022054fc* arg2) {
	int var0 = func_ov031_022054fc(arg2);
	func_020c7de4((Struct_ov031_0224e204*)arg1, arg0, arg2->unknown_3_);
	ZeroInitializeMutex((Mutex*)((char*)arg1 + 0xe0));
	PopulateContext((ProcessorContext*)((char*)arg1 + 0x20), (unsigned int)func_ov031_022052b4, (unsigned int)arg1, arg0 + var0, arg2->unknown_0_, arg2->unknown_2_);
	MarkContextReadyAndSwitch((ProcessorContext*)((char*)arg1 + 0x20));
	return arg0 + var0;
}
