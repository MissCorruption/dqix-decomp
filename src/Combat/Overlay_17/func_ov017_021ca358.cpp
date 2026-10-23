#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void func_020891cc(void* arg0);

struct Struct_ov017_021ca358 {
	unsigned char unknown_0_[8];
	unsigned short unknown_8_;
	unsigned char unknown_a_[0x30 - 0xa];
	int unknown_30_;
};

struct Struct_ov017_021ca358_2 {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned char unknown_6_;
};

// USA: func_ov017_021ca358
extern "C" ARM void func_ov017_021ca358(int arg0, Struct_ov017_021ca358_2* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021ca358_1816=0x508};
#else
 enum {Enum_ov017_021ca358_1816=0x718};
#endif
	void* var0 = *(void**)(arg3 + 0x3000 + Enum_ov017_021ca358_1816);
	Struct_ov017_021ca358* var1 = (Struct_ov017_021ca358*)func_ov017_021b8478(var0);
	if (!var1) return;
	if (var1->unknown_8_ != arg1->unknown_4_) return;
	if (arg1->unknown_6_ != 0) {
		if (var1->unknown_30_ == 0) return;
	}
	for (int var2 = 0; var2 < 8; var2++) {
		func_020891cc((unsigned char*)var1 + 0x158 + var2 * 0xa4);
	}
}
