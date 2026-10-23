#include <globaldefs.h>

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);
struct Struct_02020cb8_5;
extern "C" int func_0204b5e8(struct Struct_02020cb8_5*, int, int);
extern "C" void func_0204b088(void*, int);
#if defined(jpn)
#define func_ov023_021ed44c func_ov023_021ed394
#endif
extern "C" void func_ov023_021ed44c(void*);

// USA: func_ov023_021eb4f4
extern "C" ARM void func_ov023_021eb4f4(char* arg0) {
	if (*(unsigned char*)(arg0 + 0x431) == 0) return;
	func_0205d2bc((struct Struct_0205d2bc*)(arg0 + 0xc4));
	unsigned short var0 = *(unsigned short*)(arg0 + 0x400 + 0x38);
	if ((var0 & 0x40) || (var0 & 0x200)) {
		short var1 = *(short*)(arg0 + 0x400 + 0x3a);
		func_0204b5e8((struct Struct_02020cb8_5*)(arg0 + 0x64), 0, var1);
		func_0204b088(arg0 + 0x64, 0);
		unsigned short var2 = *(unsigned short*)(arg0 + 0x400 + 0x38);
		var2 &= ~0x200;
		*(unsigned short*)(arg0 + 0x400 + 0x38) = var2;
	}
	func_ov023_021ed44c(arg0);
}
