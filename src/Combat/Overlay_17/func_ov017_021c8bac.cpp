#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021c8bac_14104 = 0x3508 };
#else
enum { Enum_ov017_021c8bac_14104 = 0x3718 };
#endif

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void func_ov000_02160fa8(void* arg0, int arg1);

struct Struct_ov017_021c8bac {
	unsigned char unknown_0_[8];
	unsigned short unknown_8_;
};

struct Struct_ov017_021c8bac_2 {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
};

// USA: func_ov017_021c8bac
extern "C" ARM void func_ov017_021c8bac(int arg0, Struct_ov017_021c8bac_2* arg1, int arg2, unsigned char* arg3) {
	unsigned char* var0 = *(unsigned char**)(arg3 + Enum_ov017_021c8bac_14104);
	if (var0[2] == 0) return;
	Struct_ov017_021c8bac* var1 = (Struct_ov017_021c8bac*)func_ov017_021b8478(var0);
	if (!var1) return;
	if (var1->unknown_8_ != arg1->unknown_4_) return;
	void* var2 = func_ov017_021b8468(var0);
	if (!var2) return;
	func_ov000_02160fa8(var2, 0x2000000);
}
