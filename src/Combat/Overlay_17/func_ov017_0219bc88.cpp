#include <globaldefs.h>

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

struct Struct_0201bdac { unsigned char unknown_0_[2]; unsigned char unknown_2_; unsigned char unknown_3_; void* unknown_4_; };
struct Struct_0201bdac_2 { void* unknown_0_; void* unknown_4_; };
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);

// USA: func_ov017_0219bc88
extern "C" ARM void func_ov017_0219bc88(unsigned char* arg0, void* arg1) {
	arg0 += 0x3000;
	Struct_0201bdac* var0 = *(Struct_0201bdac**)(arg0 + RG(0xbb4, 0x994));
	if (var0->unknown_2_ == 0) {
		Struct_0201bdac_2* var1 = *(Struct_0201bdac_2**)(arg0 + RG(0x6fc, 0x4ec));
		func_020469b4(var1, var0);
	}
}
