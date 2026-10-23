#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_0219aa6c_742 = 0xc6 };
#else
enum { Enum_ov017_0219aa6c_742 = 0x2e6 };
#endif

// USA: func_ov017_0219aa6c
extern "C" ARM void func_ov017_0219aa6c(unsigned char* arg0) {
	arg0 += 0x4000;
	arg0[Enum_ov017_0219aa6c_742] = 1;
}
