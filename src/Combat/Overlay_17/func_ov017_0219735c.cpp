#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_0219735c_17592 = 0x4208 };
#else
enum { Enum_ov017_0219735c_17592 = 0x44b8 };
#endif

struct Struct_ov017_021972f8 {
    unsigned short unknown_0_[4];
    unsigned char unknown_8_;
};

// USA: func_ov017_0219735c
extern "C" ARM int func_ov017_0219735c(unsigned char* arg0, unsigned short arg1) {
	Struct_ov017_021972f8* var0 = (Struct_ov017_021972f8*)(arg0 + Enum_ov017_0219735c_17592);
	unsigned short* var1 = var0->unknown_0_;
	for (int var2 = 0; var2 < 4; var2++, var1++) {
		if (*var1 == arg1) {
			return 1;
		}
	}
	return 0;
}
