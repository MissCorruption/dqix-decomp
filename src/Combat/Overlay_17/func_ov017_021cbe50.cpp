#include <globaldefs.h>

extern "C" void* func_ov017_021b8470(void* arg0);

struct Struct_ov017_021cbe50 {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned char unknown_6_[8];
};

// USA: func_ov017_021cbe50
extern "C" ARM void func_ov017_021cbe50(int arg0, Struct_ov017_021cbe50* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cbe50_1816=0x508};
#else
 enum {Enum_ov017_021cbe50_1816=0x718};
#endif
	void* var0 = *(void**)(arg3 + 0x3000 + Enum_ov017_021cbe50_1816);
	void* var1 = func_ov017_021b8470(var0);
	if (!var1) return;

	void* var2 = *(void**)((char*)var1 + 0x8000 + 0xe18);
	unsigned short var3 = *(unsigned short*)((char*)var2 + 0x8);
	if (arg1->unknown_4_ != var3) return;

	unsigned char* var4 = arg1->unknown_6_;
	int var5;
	for (var5 = 0; var5 < 8; var4++) {
		unsigned int* var6 = (unsigned int*)((char*)var1 + 0x8000 + 0xde0 + var5 * 4);
		*var6 = *var4;
		var5++;
	}
}
