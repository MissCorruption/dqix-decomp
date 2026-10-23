#include <globaldefs.h>

// USA: func_ov017_0218d4b8
extern "C" ARM void func_ov017_0218d4b8(unsigned char* arg0, int arg1) {
	arg0 += 0x4000;
#if defined(jpn)
	arg0[0x111] |= (1 << arg1);
#else
	arg0[0x331] |= (1 << arg1);
#endif
}
