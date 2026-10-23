#include <globaldefs.h>

extern "C" int func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);

// USA: func_ov017_021c86f4
extern "C" ARM void func_ov017_021c86f4(int arg0, int* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c86f4_1816=0x508};
#else
 enum {Enum_ov017_021c86f4_1816=0x718};
#endif
    char* var0;
    int* var1;
    int var2;
    unsigned char* var3 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021c86f4_1816);

	if (!func_ov017_021b8468(var3)) {
		return;
	}
	var0 = (char*)func_ov017_021b8470(var3);
	if (var0 == NULL) {
		return;
	}
	var1 = (int*)((char*)arg1 + 4);
	for (var2 = 0; var2 < 4; var2++) {
		int var4 = var1[var2];
		if (var4 >= 0) {
			int var5 = (var2 << 16) >> 14;
			*(int*)(var0 + var5 + 0x8e84) = var4;
		}
	}
}
