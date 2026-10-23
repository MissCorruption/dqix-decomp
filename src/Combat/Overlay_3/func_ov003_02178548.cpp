#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02178548_2204 = 0x818 };
enum { Enum_ov003_02178548_4102 = 0xf82 };
enum { Enum_ov003_02178548_4116 = 0xf90 };
enum { Enum_ov003_02178548_2101 = 0x7b1 };
enum { Enum_ov003_02178548_2048 = 0x700 };
enum { Enum_ov003_02178548_72 = 0xc4 };
enum { Enum_ov003_02178548_4096 = 0xf00 };
enum { Enum_ov003_02178548_58 = 0xb6 };
#else
enum { Enum_ov003_02178548_2204 = 0x89c };
enum { Enum_ov003_02178548_4102 = 0x1006 };
enum { Enum_ov003_02178548_4116 = 0x1014 };
enum { Enum_ov003_02178548_2101 = 0x835 };
enum { Enum_ov003_02178548_2048 = 0x800 };
enum { Enum_ov003_02178548_72 = 0x48 };
enum { Enum_ov003_02178548_4096 = 0x1000 };
enum { Enum_ov003_02178548_58 = 0x3a };
#endif


extern "C" short func_02080468(void* arg0, int arg1);

// USA: func_ov003_02178548
extern "C" ARM void func_ov003_02178548(unsigned char* arg0) {
	void* var0 = *(void**)(arg0 + Enum_ov003_02178548_2204);
	short var1 = func_02080468(var0, 3);
	short var2 = *(short*)(arg0 + Enum_ov003_02178548_4102);
	int var3 = var2 - var1;
	short var4 = *(short*)(arg0 + Enum_ov003_02178548_4116);
	short var5 = (short)(var4 * 6 + var3);

	unsigned char var6 = *(unsigned char*)(arg0 + Enum_ov003_02178548_2101);
	if ((int)var6 <= (int)var5) {
		var5 = (short)(var6 - 1);
	}

	short var7 = *(short*)(arg0 + Enum_ov003_02178548_2048 + var5 * 2 + Enum_ov003_02178548_72);
	*(short*)(arg0 + Enum_ov003_02178548_4096 + Enum_ov003_02178548_58) = var7;

	short var8 = func_02080468(var0, 3);
	int var9 = var5 % 6;
#if defined(jpn)
	*(short*)(arg0 + 0xf00 + 0x82) = (short)(var9 + var8);
#else
	*(short*)(arg0 + 0x1000 + 6) = (short)(var9 + var8);
#endif
}
