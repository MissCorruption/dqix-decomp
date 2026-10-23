#include <globaldefs.h>

// USA: func_ov024_021f69b4
extern "C" ARM void* func_ov024_021f69b4(char* arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov024_021f69b4_1096=0x488};
#else
 enum {Enum_ov024_021f69b4_1096=0x448};
#endif
	int var0 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
	if (!var0) goto notfound;
	for (int var1 = 0; var1 < 4; var1++) {
		int var2 = *(int*)(arg0 + var1 * Enum_ov024_021f69b4_1096 + 0x9a4);
		if (arg1 == var2) {
			return arg0 + 0x958 + var1 * Enum_ov024_021f69b4_1096;
		}
	}
notfound:
	return (void*)0;
}
