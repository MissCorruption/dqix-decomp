#include <globaldefs.h>

// USA: func_ov017_0219219c
extern "C" ARM void* func_ov017_0219219c(char* arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov017_0219219c_732=0xcc, Enum_ov017_0219219c_225=0xd1, Enum_ov017_0219219c_13824=0x3400};
#else
 enum {Enum_ov017_0219219c_732=0x2dc, Enum_ov017_0219219c_225=0xe1, Enum_ov017_0219219c_13824=0x3600};
#endif
	int var0 = (arg1 >= 0 && arg1 <= 3);
	if (var0) {
		return arg0 + Enum_ov017_0219219c_732 + 0x3400 + arg1;
	}
	int var1 = (arg1 >= 0xc0 && arg1 <= 0xc7);
	if (var1) {
		return arg0 + Enum_ov017_0219219c_225 + Enum_ov017_0219219c_13824 + (arg1 - 0xc0);
	}
	return NULL;
}
