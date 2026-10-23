#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x371c
#define REGION_OFFSET_1 0x47e
#else
#define REGION_OFFSET_0 0x3760
#define REGION_OFFSET_1 0x43e
#endif

extern "C" void* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_02162b70
extern "C" ARM void func_ov000_02162b70(void* arg0, int arg1, unsigned char arg2) {
	void* var0 = func_ov000_02161318((char*)arg0 + REGION_OFFSET_0, arg1);
	if (var0 != 0) {
		*((unsigned char*)var0 + REGION_OFFSET_1) = arg2;
	}
}
