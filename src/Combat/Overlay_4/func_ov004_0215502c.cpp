#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov004_0215502c_20 = 19 };
#define data_ov004_0216fa8c data_ov004_0217021c
#else
enum { Enum_ov004_0215502c_20 = 20 };
#endif

struct Struct_ov004_0216fa8c {
	unsigned int unknown_0_[Enum_ov004_0215502c_20];
};

extern Struct_ov004_0216fa8c data_ov004_0216fa8c;

extern "C" int func_ov011_02184a24(int, void*, int);

// USA: func_ov004_0215502c
extern "C" ARM int func_ov004_0215502c(SafeAllocator* arg0, int arg1) {
	Struct_ov004_0216fa8c var0 = data_ov004_0216fa8c;
	void* var1 = arg0->Allocate(sizeof(Struct_ov004_0216fa8c));
	memcpy(var1, &var0, sizeof(Struct_ov004_0216fa8c));
	return func_ov011_02184a24(arg1, var1, Enum_ov004_0215502c_20);
}
