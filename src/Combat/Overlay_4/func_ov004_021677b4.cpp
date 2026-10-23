#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" void func_ov011_02184a24(void* arg0, void* arg1, int arg2);

#if defined(jpn)
enum { Enum_ov004_021677b4_19 = 18 };
#define data_ov004_0216ffac data_ov004_02170708
#else
enum { Enum_ov004_021677b4_19 = 19 };
#endif

struct Struct_ov004_0216ffac { unsigned int unknown_0_[Enum_ov004_021677b4_19]; };
extern struct Struct_ov004_0216ffac data_ov004_0216ffac;

// USA: func_ov004_021677b4
extern "C" ARM void func_ov004_021677b4(SafeAllocator* arg0, void* arg1) {
	struct Struct_ov004_0216ffac var0 = data_ov004_0216ffac;
	void* var1 = arg0->Allocate(sizeof(Struct_ov004_0216ffac));
	memcpy(var1, &var0, sizeof(Struct_ov004_0216ffac));
	func_ov011_02184a24(arg1, var1, Enum_ov004_021677b4_19);
}
