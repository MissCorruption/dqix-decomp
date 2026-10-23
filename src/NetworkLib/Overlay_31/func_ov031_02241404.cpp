#include <globaldefs.h>

struct Struct_ov031_02207230;
extern "C" int func_ov031_02207230(void* arg0, Struct_ov031_02207230* arg1);

struct Struct_ov031_02241404 {
	char unknown_0_[2];
	unsigned short unknown_2_;
	unsigned int unknown_4_;
};

struct Struct_ov031_02241404_2 { char unknown_0_[4]; int unknown_4_; };

// USA: func_ov031_02241404
extern "C" ARM int func_ov031_02241404(Struct_ov031_02241404_2* arg0, void* arg1, unsigned int arg2, unsigned int arg3) {
	Struct_ov031_02241404 var0;
	var0.unknown_0_[0] = 8;
	var0.unknown_0_[1] = 2;
	unsigned short var1 = (unsigned short)arg3;
	var0.unknown_2_ = (unsigned short)(((var1 >> 8) & 0xff) | ((var1 << 8) & 0xff00));
	var0.unknown_4_ = arg2;
	int var2 = func_ov031_02207230(arg1, (Struct_ov031_02207230*)&var0);
	if (var2 < 0) {
		if (arg0->unknown_4_ != 0) return (int)0xfffffc16;
		return ~0x3e8;
	}
	return 0;
}
