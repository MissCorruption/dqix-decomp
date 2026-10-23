#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"

struct Struct_020bd88c {
	char unknown_0_[0x7c];
	NitroFileAccessor unknown_7c_;
};

extern struct Struct_020bd88c* data_02110370;

// USA: func_020bd88c
extern "C" ARM NitroFileAccessor func_020bd88c(void) {
	Struct_020bd88c* var0 = data_02110370;

	return var0->unknown_7c_;
}
