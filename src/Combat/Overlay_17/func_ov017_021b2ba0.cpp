#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);

struct Struct_0206f81c_2 {
	unsigned char unknown_0_[0x24];
	char unknown_24_[1];
};

// USA: func_ov017_021b2ba0
extern "C" ARM void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1) {
	if (strlen(arg1) >= 0xc) func_020c9be0();
	strcpy(arg0->unknown_24_, arg1);
}
