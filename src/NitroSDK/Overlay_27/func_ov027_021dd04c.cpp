#include <globaldefs.h>

struct Struct_ov027_021e33e0_18 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
	unsigned char* unknown_8_;
};

extern Struct_ov027_021e33e0_18 data_ov027_021e33e0;

// USA: func_ov027_021dd04c
extern "C" ARM int func_ov027_021dd04c() {
	unsigned char* var0 = data_ov027_021e33e0.unknown_8_;
	int var1 = (*(unsigned short*)(var0 + 0x12) != 0) ? 2 : 0;
	int var2 = (*(unsigned short*)(var0 + 0xe) != 0) ? 1 : 0;
	int var3 = (*(unsigned short*)(var0 + 0x14) != 0) ? 4 : 0;
	int var4 = (*(unsigned short*)(var0 + 0x16) != 0) ? 8 : 0;
	return (unsigned char)(var2 | var1 | var3 | var4);
}
