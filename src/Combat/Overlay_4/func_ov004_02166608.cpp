#include <globaldefs.h>

extern "C" void func_ov023_021f645c(void* arg0, int arg1, unsigned short arg2, int arg3);
extern "C" int func_ov023_021f6680(void* arg0, int arg1);

struct Struct_ov004_02166608 {
	char unknown_0_[0x50];
	unsigned char unknown_50_0_ : 6;
	unsigned char unknown_50_6_ : 1;
	unsigned char unknown_50_7_ : 1;
};
extern struct Struct_ov004_02166608* data_ov004_0217101c;

#if defined(jpn)
enum { Enum_ov004_02166608_0 = 1 };
#else
enum { Enum_ov004_02166608_0 = 0 };
#endif

// USA: func_ov004_02166608
extern "C" ARM void func_ov004_02166608(void* arg0) {
	struct Struct_ov004_02166608* var0 = (&data_ov004_0217101c)[Enum_ov004_02166608_0];
	func_ov023_021f645c(arg0, 0xaa, var0->unknown_50_6_ + 1, 0xf);
	func_ov023_021f6680(arg0, 0x15);
	func_ov023_021f645c(arg0, 0xa0, var0->unknown_50_7_ + 3, 0xf);
	func_ov023_021f6680(arg0, 0x16);
}
