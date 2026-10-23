#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Memory.h"

struct Struct_ov031_0224e204 {
	int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_;
	int unknown_10_; int unknown_14_; int unknown_18_; int unknown_1c_;
};

extern "C" void func_020c7de4(Struct_ov031_0224e204* arg0, int arg1, int arg2);
extern "C" void func_ov031_0220f5b4(void);

extern void* data_ov031_0224e580;

// USA: func_ov031_0220f400
extern "C" ARM void func_ov031_0220f400(void* arg0) {
	data_ov031_0224e580 = arg0;
	VectorizedMemset(arg0, 0, 0x8f4);
	char* var0 = (char*)data_ov031_0224e580;
	func_020c7de4((Struct_ov031_0224e204*)var0, (int)(var0 + 0x20), 1);
	char* var1 = (char*)data_ov031_0224e580;
	*(int*)(var1 + 0x24) = 0;
	char* var2 = (char*)data_ov031_0224e580;
	unsigned int var3 = GetContextPriority(data_02111304.activeContext);
	PopulateContext((ProcessorContext*)(var2 + 0x34), (unsigned int)func_ov031_0220f5b4, 0, (unsigned int)(var2 + 0x8f4), 0x800, var3);
	var0 = (char*)data_ov031_0224e580;
	MarkContextStackTopUnknownSubspace((ProcessorContext*)(var0 + 0x34), 0x80);
}
