#include <globaldefs.h>

struct Struct_ov023_021e27f8 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	short* unknown_4_;
};

struct Struct_ov023_021e257c_3 {
	int unknown_0_[2];
	struct Struct_ov023_021e27f8* unknown_8_;
	int unknown_c_[2];
	unsigned short unknown_14_;
};

// USA: func_ov023_021e27f8
extern "C" ARM void* func_ov023_021e27f8(struct Struct_ov023_021e257c_3* arg0, int arg1) {
	struct Struct_ov023_021e27f8* var0 = arg0->unknown_8_;
	unsigned short var1 = arg0->unknown_14_;
	unsigned short var2;
	for (var2 = 0; var2 < var1; var2++) {
		struct Struct_ov023_021e27f8* var3 = (struct Struct_ov023_021e27f8*)((char*)var0 + var2 * 0x18);
		unsigned short var4 = var3->unknown_2_;
		unsigned short var5;
		for (var5 = 0; var5 < var4; var5++) {
			if (var3->unknown_4_[var5] == arg1) return var3;
		}
	}
	return NULL;
}
