#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" void func_020ca3b8(int a, void* p, int size);

struct Struct_ov027_021d8c94 {
	unsigned char unknown_0_[0x358];
	unsigned char unknown_358_;
	unsigned char unknown_359_;
	unsigned short unknown_35a_;
	unsigned short unknown_35c_;
	unsigned char unknown_35e_[0x156];
	unsigned char unknown_4b4_;
};

// USA: func_ov027_021dad14
extern "C" ARM void func_ov027_021dad14(Struct_ov027_021d8c94* arg0, int arg1, unsigned int arg2, int arg3) {
	unsigned char var0 = 1;
	func_020ca3b8(arg1, &arg0->unknown_35e_, 0x14a);
	int var1 = 0;
	do {
		if (arg2 & (2 << var1)) var0 = (var0 + 1) & 0xff;
		var1++;
	} while (var1 < 15);
	arg0->unknown_358_ = var0;
	arg0->unknown_35a_ = arg2 | 1;
	arg0->unknown_35c_ = arg3;
	arg0->unknown_4b4_ = arg0->unknown_4b4_ + 1;
}
