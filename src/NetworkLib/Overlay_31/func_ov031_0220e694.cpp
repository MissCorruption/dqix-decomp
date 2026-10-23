#include <globaldefs.h>

extern "C" void func_ov031_0220da1c(int);
extern "C" void func_ov031_0220db6c(void);
extern "C" void func_ov031_0220d984(int, int, int, int);
extern "C" int func_020d559c(int, unsigned int);
extern void* data_ov031_0224e53c;

struct Struct_ov031_0220e694 { short unknown_0_; unsigned short unknown_2_; };
struct Struct_ov031_0220e4bc;
extern "C" void func_ov031_0220e4bc(struct Struct_ov031_0220e4bc *arg0);

// USA: func_ov031_0220e694
extern "C" ARM void func_ov031_0220e694(struct Struct_ov031_0220e694 *arg0) {
	switch (arg0->unknown_2_) {
	case 0: {
		int var0 = *(int*)((char*)data_ov031_0224e53c + 0x2000 + 0x260);
		if (var0 == 0xc) {
			func_ov031_0220da1c(0xa);
			func_ov031_0220db6c();
			return;
		}
		int var1 = func_020d559c((int)func_ov031_0220e4bc, 0);
		if (var1 == 2) return;
		if (var1 == 3) goto case0_r3;
		if (var1 != 8) goto case0_r740;
		func_ov031_0220da1c(0xc);
		func_ov031_0220d984(1, (int)((char*)data_ov031_0224e53c + 0x2140), 0, 0x8b4);
		return;
	case0_r3:
		func_ov031_0220da1c(0xa);
		func_ov031_0220db6c();
		return;
	case0_r740:
		func_ov031_0220da1c(0xb);
		func_ov031_0220d984(7, (int)((char*)data_ov031_0224e53c + 0x2140), 0, 0x8c0);
		return;
	}
	case 1:
	case 3:
		func_ov031_0220da1c(0xa);
		func_ov031_0220db6c();
		return;
	case 2:
	case 4:
	default:
		func_ov031_0220da1c(0xb);
		func_ov031_0220d984(7, (int)((char*)data_ov031_0224e53c + 0x2140), 0, 0x8d3);
		return;
	}
}
