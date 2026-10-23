#include <globaldefs.h>

// USA: func_ov023_021e33a0
extern "C" ARM void func_ov023_021e33a0(char* arg0, signed char arg1) {
#if defined(jpn)
	*(signed char*)(arg0 + 0x4e3) = *(signed char*)(arg0 + 0x400 + 0xe2);
	*(signed char*)(arg0 + 0x4e2) = arg1;
#else
	*(signed char*)(arg0 + 0x4e7) = *(signed char*)(arg0 + 0x400 + 0xe6);
	*(signed char*)(arg0 + 0x4e6) = arg1;
#endif
}
