#include <globaldefs.h>

// USA: func_ov017_0219a644
extern "C" ARM void func_ov017_0219a644(void* arg0, int) {
	unsigned char var0;
	for (var0 = 0; var0 < 4; var0++) {
		*(short*)((char*)arg0 + var0 * 0xe0 +
#if defined(jpn)
        0x3b96
#else
        0x3db6
#endif
        ) = 0;
	}
}
