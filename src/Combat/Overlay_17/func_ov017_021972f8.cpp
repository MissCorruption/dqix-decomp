#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021972f8_17592 = 0x4208 };
#else
enum { Enum_ov017_021972f8_17592 = 0x44b8 };
#endif

struct Struct_ov017_021972f8 {
    unsigned short unknown_0_[4];
    unsigned char unknown_8_;
};

struct Struct_ov017_021972f8_2 {
    unsigned char unknown_0_[Enum_ov017_021972f8_17592];
    Struct_ov017_021972f8 unknown_44b8_;
};

// USA: func_ov017_021972f8
extern "C" ARM void func_ov017_021972f8(void *arg0, unsigned short arg1) {
	Struct_ov017_021972f8_2* var0 = (Struct_ov017_021972f8_2*)arg0;
	unsigned char var1 = var0->unknown_44b8_.unknown_8_++;
	var0->unknown_44b8_.unknown_0_[var1] = arg1;
	var0->unknown_44b8_.unknown_8_ &= 3;
}
