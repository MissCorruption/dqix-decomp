#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215be20_2400 = 0x800 };
#else
enum { Enum_ov003_0215be20_2400 = 0x960 };
#endif
#include "std_library_functions.h"

struct Struct_0205d5d0;
#if defined(jpn)
#endif
extern "C" void func_ov003_0215b964(void* arg0, void* arg1, int arg2);

// USA: func_ov003_0215be20
extern "C" ARM void func_ov003_0215be20(void* arg0) {
	memset(*(void**)((char*)arg0 + 0x7c), 0, Enum_ov003_0215be20_2400);
	func_ov003_0215b964(arg0, *(void**)((char*)arg0 + 0x7c), 0);
#if defined(jpn)
	func_0205d5d0((Struct_0205d5d0*)((char*)arg0 + 0xf4), 2, *(int*)((char*)arg0 + 0x7c), 1);
#else
	func_0205d5d0((Struct_0205d5d0*)((char*)arg0 + 0xf4), 2, *(int*)((char*)arg0 + 0x7c), 1, 0);
#endif
}
