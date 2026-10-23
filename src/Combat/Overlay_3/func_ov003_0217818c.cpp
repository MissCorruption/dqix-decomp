#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217818c_2204 = 0x818 };
#else
enum { Enum_ov003_0217818c_2204 = 0x89c };
#endif

extern "C" int func_02080b40(void* arg0, int arg1);
extern "C" int func_02080b2c(void* arg0, int arg1);
extern "C" void func_0208103c(void* arg0, int arg1, int arg2);
extern "C" void func_02080798(void* arg0, int arg1, int arg2);

struct Struct_ov003_021767ec {
	char unknown_0_[8];
	unsigned int unknown_8_0_ : 12;
	unsigned int unknown_9_4_ : 2;
	unsigned int unknown_9_6_ : 18;
};

// USA: func_ov003_0217818c
extern "C" ARM void func_ov003_0217818c(char* arg0, struct Struct_ov003_021767ec* arg1, int arg2, int arg3) {
	void* var0 = *(void**)(arg0 + Enum_ov003_0217818c_2204);
	unsigned char var1 = 1;
	if (arg1 != 0) {
		if (arg1->unknown_9_4_ == 0) {
			var1 = 0;
		}
		var1 &= 0xff;
	}
	if (var1) {
		func_02080b40(var0, arg2);
		func_0208103c(var0, arg3, 0x48);
#if !defined(jpn)
#if !defined(jpn)
		func_02080798(var0, arg3, 1);
#endif
#endif
	} else {
		func_02080b2c(var0, arg2);
		func_0208103c(var0, arg3, 0x46);
#if !defined(jpn)
#if !defined(jpn)
		func_02080798(var0, arg3, 1);
#endif
#endif
	}
}
