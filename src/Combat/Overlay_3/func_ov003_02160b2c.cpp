#include <globaldefs.h>

extern "C" int func_020421a0();

#if defined(jpn)
struct S02160b2c { char pad[0x28c]; unsigned int flags464; };
#else
struct S02160b2c { char pad[0x464]; unsigned int flags464; };
#endif

// USA: func_ov003_02160b2c
extern "C" ARM void func_ov003_02160b2c(S02160b2c* obj) {
	if (!(obj->flags464 & 0x20000)) {
#if defined(jpn)
		*(unsigned char*)(func_020421a0() + 0x1000 + 0x7de) = 0;
#else
		*(unsigned char*)(func_020421a0() + 0x1000 + 0x9ae) = 0;
#endif
	}
}
