#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cbdcc {
	unsigned short unknown_0_;
	unsigned char unknown_2_[8];
};

struct Struct_ov017_021cbdcc_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	Struct_ov017_021cbdcc unknown_4_;
	unsigned char unknown_e_[6];
};

// USA: func_ov017_021cbdcc
extern "C" ARM void func_ov017_021cbdcc(void) {
#if defined(jpn)
 enum {Enum_ov017_021cbdcc_1816=0x508};
#else
 enum {Enum_ov017_021cbdcc_1816=0x718};
#endif
	void* var0 = func_0202ae24();
	unsigned char* var1 = (unsigned char*)GetGameResources() + 0x3000;
	void* var2 = *(void**)(var1 + Enum_ov017_021cbdcc_1816);
	void* var3 = func_ov017_021b8470(var2);
	if (!var3) return;

	Struct_ov017_021cbdcc_2 var4;
	var4.unknown_0_ = 0x7e;
	void* var5 = *(void**)((char*)var3 + 0x8000 + 0xe18);
	unsigned short var6 = *(unsigned short*)((char*)var5 + 8);

	Struct_ov017_021cbdcc* var7 = &var4.unknown_4_;
	unsigned char* var8 = var7->unknown_2_;
	int var9 = 0;
	var7->unknown_0_ = var6;
	for (; var9 < 8; var8++) {
		*var8 = *(unsigned int*)((char*)var3 + 0x8000 + 0xde0 + var9 * 4);
		var9++;
	}
	func_0205e330(var0, &var4, 0);
}
