#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov017_021cfe84_14132 = 0x3524 };
#else
enum { Enum_ov017_021cfe84_14132 = 0x3734 };
#endif

extern "C" void* func_02012fe4(void);
struct Struct_02019508_3;
extern "C" void func_0201ba1c(struct Struct_02019508_3* arg0, int arg1, int arg2);

struct Struct_ov017_021cfe84 {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
};

// USA: func_ov017_021cfe84
extern "C" ARM void func_ov017_021cfe84(int arg0, Struct_ov017_021cfe84* arg1) {
	void* var0 = func_02012fe4();
	if (arg1->unknown_4_ != *(unsigned short*)var0) {
		return;
	}
	unsigned char* var1 = (unsigned char*)GetGameResources();
	unsigned char* var2 = *(unsigned char**)(var1 + Enum_ov017_021cfe84_14132);
	if (var2[3] != 0) {
		return;
	}
	func_0201ba1c((struct Struct_02019508_3*)var0, arg1->unknown_8_, arg1->unknown_6_);
}
