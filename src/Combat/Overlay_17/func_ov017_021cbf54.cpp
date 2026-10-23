#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" unsigned short func_ov017_021b8480(void* arg0);
extern "C" void func_ov017_021cbf18(unsigned char arg0, unsigned short arg1);

struct Struct_ov017_021cbf54 {
	unsigned char unknown_0_[8];
	unsigned short unknown_8_;
};

struct Struct_ov017_021cbf54_2 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned short unknown_6_;
};

// USA: func_ov017_021cbf54
extern "C" ARM void func_ov017_021cbf54(int arg0, Struct_ov017_021cbf54_2* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cbf54_1816=0x508};
#else
 enum {Enum_ov017_021cbf54_1816=0x718};
#endif
	unsigned char* var0 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021cbf54_1816);
	Struct_ov017_021cbf54* var1 = (Struct_ov017_021cbf54*)func_ov017_021b8478(var0);
	if (var1->unknown_8_ != arg1->unknown_6_) return;
	if (arg1->unknown_4_ == 0) {
		if (func_ov017_021b8480(var0) == 2) return;
		func_ov017_021cbf18(1, arg1->unknown_6_);
	} else {
		if (arg1->unknown_4_ == 1) {
			*(unsigned char*)(var0 + 0x6c7) = 2;
		}
	}
}
