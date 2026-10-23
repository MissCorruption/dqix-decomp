#include <globaldefs.h>

#if defined(jpn)
#define POINTER_OFFSET 0x16c
#else
#define POINTER_OFFSET 0x41c
#endif
struct Struct_ov017_02195760 { char unknown_0_[POINTER_OFFSET]; unsigned char* unknown_41c_; };

// USA: func_ov017_02195760
extern "C" ARM int func_ov017_02195760(unsigned char* arg0) {
	Struct_ov017_02195760* var0 = (Struct_ov017_02195760*)(arg0 + 0x4000);
	return var0->unknown_41c_[0] == 0;
}
