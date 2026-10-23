#include <globaldefs.h>

struct Struct_0205dee8;
extern "C" void func_0205dee8(struct Struct_0205dee8* arg0, int arg1);

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);

// USA: func_ov003_0216ff90
extern "C" ARM void func_ov003_0216ff90(char* arg0) {
	if (*(void**)(arg0 + 0x3c) == 0) return;
	func_0205dee8((struct Struct_0205dee8*)*(void**)(arg0 + 0x3c), 0);
	func_0205d6a0((struct Struct_0205d6a0*)*(void**)(arg0 + 0x3c), 0);
}
