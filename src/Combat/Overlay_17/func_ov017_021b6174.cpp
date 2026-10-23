#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void* func_02012fe4(void);
extern "C" void* func_0205ec34(void);
extern "C" void func_02017098(void* arg0, int arg1);
struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);
extern "C" struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1);
struct Struct_02028c14;
extern "C" void func_02028c14(struct Struct_02028c14* arg0, int arg1);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

// USA: func_ov017_021b6174
extern "C" ARM void func_ov017_021b6174(int arg0, int arg1, int arg2) {
	void* var0 = func_02012fe4();
	void* var1 = func_0205ec34();
	unsigned short var2 = *(unsigned short*)var0;
	if (arg0 == var2) {
		func_02017098(var0, arg1);
	}
	struct Struct_020fdd44* var3 = func_02028bd0(func_02027ca4(), arg0);
	if (var3 != NULL) {
		func_02028c14((struct Struct_02028c14*)var3, arg1);
	}
	func_0206df6c(var1, (unsigned char*)var1 + 0x8c, arg2 + 0x9e + 0x700, 1);
}
