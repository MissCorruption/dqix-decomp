#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021d0808_14096 = 0x3500 };
#else
enum { Enum_ov017_021d0808_14096 = 0x3710 };
#endif

extern "C" void func_ov017_021b996c(int arg0, int arg1, unsigned char arg2, unsigned char arg3, unsigned short arg4);
extern "C" void func_ov017_021b9a98(int arg0, int arg1, unsigned char arg2, unsigned char arg3, unsigned short arg4);

struct Struct_ov017_021d0808 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_;
	unsigned char unknown_7_;
	unsigned short unknown_8_;
};

// USA: func_ov017_021d0808
extern "C" ARM void func_ov017_021d0808(int arg0, Struct_ov017_021d0808* arg1, int arg2, unsigned char* arg3) {
	int var0 = *(int*)(arg3 + Enum_ov017_021d0808_14096);
	if (arg1->unknown_6_ == 0) {
		func_ov017_021b996c(var0, arg0, arg1->unknown_4_, arg1->unknown_5_, arg1->unknown_8_);
	} else if (arg1->unknown_6_ == 1) {
		func_ov017_021b9a98(var0, arg0, arg1->unknown_4_, arg1->unknown_5_, arg1->unknown_8_);
	}
}
