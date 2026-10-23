#include <globaldefs.h>

extern "C" void func_ov017_02195214(void* arg0, void* arg1);

// USA: func_ov017_02195398
extern "C" ARM void func_ov017_02195398(void* arg0, unsigned char arg1) {
#if defined(jpn)
 enum {Enum_ov017_02195398_17136=0x40d0, Enum_ov017_02195398_17137=0x40d1, Enum_ov017_02195398_752=0xd0, Enum_ov017_02195398_753=0xd1};
#else
 enum {Enum_ov017_02195398_17136=0x42f0, Enum_ov017_02195398_17137=0x42f1, Enum_ov017_02195398_752=0x2f0, Enum_ov017_02195398_753=0x2f1};
#endif
	unsigned char* var0 = (unsigned char*)arg0;
	int var1 = 0;
	while (var1 < var0[Enum_ov017_02195398_17136]) {
		unsigned char* var2 = var0 + 0x4000 + var1 * 15;
		if (arg1 == var2[Enum_ov017_02195398_753]) {
			unsigned char* var3 = var0 + 0x4000;
			var3[Enum_ov017_02195398_752] = var3[Enum_ov017_02195398_752] - 1;
			while (var1 < var3[Enum_ov017_02195398_752]) {
				func_ov017_02195214(var0 + Enum_ov017_02195398_17137 + var1 * 15, var0 + Enum_ov017_02195398_17137 + (var1 + 1) * 15);
				var1++;
			}
			return;
		}
		var1++;
	}
}
