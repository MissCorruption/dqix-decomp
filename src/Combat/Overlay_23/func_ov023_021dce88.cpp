#include <globaldefs.h>

// USA: func_ov023_021dce88
extern "C" ARM void func_ov023_021dce88(void* arg0) {
	for (int var0 = 0; var0 < 3; var0++) {
		*(int*)((char*)arg0 + var0 * 4
#if defined(jpn)
            + 0x700
#else
            + 0x784
#endif
) = 0;
	}
}
