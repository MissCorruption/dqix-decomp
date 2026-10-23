#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x5ff0
#define REGION_OFFSET_1 0x5ff4
#define REGION_OFFSET_2 0x5ff1
#else
#define REGION_OFFSET_0 0x5e00
#define REGION_OFFSET_1 0x5e04
#define REGION_OFFSET_2 0x5e01
#endif


// USA: func_ov000_02167434
extern "C" ARM void func_ov000_02167434(unsigned char* arg0, int arg1) {
	int var0;
	for (var0 = 0; var0 < arg0[REGION_OFFSET_0]; var0++) {
		if (*(int*)(arg0 + REGION_OFFSET_1 + var0 * 4) == arg1) {
			arg0[REGION_OFFSET_2] &= ~(1 << var0);
			return;
		}
	}
}
