#include <globaldefs.h>

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);
extern "C" void func_0205a42c(struct Struct_0205a254* arg0, int arg1, int arg2);

struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);

extern "C" void func_0205ae8c(void* arg0);

// USA: func_ov003_0215c464
extern "C" ARM void func_ov003_0215c464(char* arg0) {
	struct Struct_0205a254_2* var0;

	if (*(unsigned char*)(arg0 + 0x59f) & 2) {
		struct Struct_0205a254* var1 = *(struct Struct_0205a254**)(arg0 + 0xd4);
		if (var1 != NULL) {
			func_0205a370(var1, 1);
			var0 = func_0205a3d0(var1, 1);
			if (var0 != NULL) {
				*(unsigned char*)((char*)var0 + 0x15) |= 8;
			}
			func_0205a330((struct Struct_0205a330*)var1, *(int*)(arg0 + 0x574));
			func_020e27ec(var1, 1, 0xd7, 0x96);
			func_0205a42c(var1, 1, 6);
		}
		func_0205ae8c(arg0 + 0x98);
		return;
	}

	{
		struct Struct_0205a254* var2 = *(struct Struct_0205a254**)(arg0 + 0xd4);
		if (var2 == NULL) return;
		var0 = func_0205a3d0(var2, 1);
		if (var0 != NULL) {
			*(unsigned char*)((char*)var0 + 0x15) &= ~8;
		}
	}
}
