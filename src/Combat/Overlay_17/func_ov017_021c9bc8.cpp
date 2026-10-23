#include <globaldefs.h>

struct Struct_0207d7f4;
struct Struct_0207da94;
struct Struct_ov000_0216377c;

extern "C" void* func_0207d78c(void);
extern "C" int func_0202c508(void* arg0);
extern "C" void func_0207da94(struct Struct_0207da94* arg0, int arg1);
extern "C" int func_0207db58(struct Struct_0207d7f4* arg0, unsigned short arg1, char arg2);
extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" int func_ov017_021b8468(void* arg0);
extern "C" void func_ov000_0216377c(struct Struct_ov000_0216377c* arg0, unsigned char arg1);

struct Struct_ov017_021c9bc8 { char unknown_0_[4]; unsigned short unknown_4_; unsigned short unknown_6_; };

// USA: func_ov017_021c9bc8
extern "C" ARM void func_ov017_021c9bc8(char arg0, struct Struct_ov017_021c9bc8* arg1, int arg2, char* arg3, void* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021c9bc8_14104=0x3508};
#else
 enum {Enum_ov017_021c9bc8_14104=0x3718};
#endif
	void* var0 = func_0207d78c();
	unsigned int var1 = arg1->unknown_4_;
	unsigned short var2 = arg1->unknown_6_;
	if (func_0202c508(arg4)) {
		func_0207da94((struct Struct_0207da94*)var0, var2 & 0xff);
		func_0207db58((struct Struct_0207d7f4*)var0, (unsigned short)var1, arg0);
		return;
	}
	if (arg0 != 0) return;
	struct Struct_ov000_0216377c* var3 = *(struct Struct_ov000_0216377c**)(arg3 + Enum_ov017_021c9bc8_14104);
	void* var4 = func_ov017_021b8478(var3);
	int var5 = func_ov017_021b8468(var3);
	if (var4 == 0 || var5 == 0) return;
	if (*(unsigned short*)((char*)var4 + 8) != var1) return;
	typedef void (*Type_ov017_021c9bc8)(struct Struct_ov000_0216377c*, unsigned short);
	((Type_ov017_021c9bc8)func_ov000_0216377c)((struct Struct_ov000_0216377c*)var5, var2);
}
