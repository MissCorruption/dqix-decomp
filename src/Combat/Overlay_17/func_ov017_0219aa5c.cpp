#include <globaldefs.h>

#if defined(jpn)
#define FIELD_OFFSET 0x448
#else
#define FIELD_OFFSET 0x658
#endif

// USA: func_ov017_0219aa5c
extern "C" ARM void func_ov017_0219aa5c(unsigned char* arg0) {
	arg0 += 0x3000;
	arg0[FIELD_OFFSET] = 0;
}
