#include <globaldefs.h>

extern "C" int func_ov017_02191b58(void*, int);
typedef int (*Type_ov017_021922ac)(void*);

// USA: func_ov017_021922ac
extern "C" ARM int func_ov017_021922ac(void* arg0, unsigned int arg1) {
#if defined(jpn)
 enum {Enum_ov017_021922ac_17545=0x41d9, Enum_ov017_021922ac_17544=0x41d8};
#else
 enum {Enum_ov017_021922ac_17545=0x4489, Enum_ov017_021922ac_17544=0x4488};
#endif
	int var0 = 0;
	unsigned char var1 = *((unsigned char*)arg0 + Enum_ov017_021922ac_17545);
	if (var1 != 0) {
		int var2 = arg1 <= 3;
		if (var2) {
			int var3 = ((Type_ov017_021922ac)&func_ov017_02191b58)(arg0);
			if (var3 & 2) var0 = 1;
		}
		goto checkB;
	}
	var0 = 1;
checkB:
	if (*((unsigned char*)arg0 + Enum_ov017_021922ac_17544) == 0) {
		var0 = 0;
	}
	return var0;
}
