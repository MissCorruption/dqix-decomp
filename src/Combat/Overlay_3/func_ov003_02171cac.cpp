#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
enum { Enum_ov003_02171cac_1840 = 0x62c };
enum { Enum_ov003_02171cac_2888 = 0x928 };
#else
enum { Enum_ov003_02171cac_1840 = 0x730 };
enum { Enum_ov003_02171cac_2888 = 0xb48 };
#endif

extern "C" void* func_ov017_0219bf74(void);
extern "C" void func_ov017_021b1d44(void* arg0, int arg1, int arg2);

// USA: func_ov003_02171cac
extern "C" ARM void func_ov003_02171cac(unsigned char* arg0) {
	unsigned char var0;
	if (!(arg0[Enum_ov003_02171cac_1840] & 2)) {
		var0 = 0;
	} else {
		unsigned char* var1 = (unsigned char*)GetGameResources() + 0x3000;
		void* var2 = *(void**)(var1 + Enum_ov003_02171cac_2888);
		void* var3 = func_ov017_0219bf74();
		func_ov017_021b1d44(var2, 0x20, 1);
		*(void**)((unsigned char*)var2 + 8) = var3;
		var0 = 9;
	}
	arg0[0] = var0;
}
