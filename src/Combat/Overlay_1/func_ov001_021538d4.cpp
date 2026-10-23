#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov001_021538d4;
extern "C" void func_ov017_021d4a24(Struct_ov001_021538d4* arg0);
extern "C" void func_ov017_021d4c04(void* arg0, int arg1, void* arg2, int arg3, void* arg4, int arg5);
extern "C" void func_ov001_02164114(void* arg0);
extern int data_ov001_02165828;

// USA: func_ov001_021538d4
extern "C" ARM void func_ov001_021538d4(int arg0, void* arg1, SafeAllocator* arg2) {
	if (arg0 == 0 || arg2 == 0) {
		func_ov017_021d4a24((Struct_ov001_021538d4*)&data_ov001_02165828);
	} else {
		void* var0 = arg2->Allocate(0x400);
		void* var1 = arg2->Allocate(0x1800);
		func_ov017_021d4c04(&data_ov001_02165828, arg0, var0, 0x80, var1, 0x200);
		func_ov001_02164114(&data_ov001_02165828);
	}
}
