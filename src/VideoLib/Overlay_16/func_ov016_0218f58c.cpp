#include <globaldefs.h>
#include "NitroSDK/Filesystem/FileAccessor.h"

struct Struct_ov016_0218f58c {
	char unknown_0_[0x8];
	int unknown_8_;
	NitroVM* unknown_c_;
	unsigned char unknown_10_;
};

// USA: func_ov016_0218f58c
extern "C" ARM int func_ov016_0218f58c(Struct_ov016_0218f58c* arg0, void* arg1, int arg2) {
	if (arg0->unknown_10_ == 1) {
		NitroVM_AwaitCommandCompletion(arg0->unknown_c_);
		NitroVM_Seek(arg0->unknown_c_, arg0->unknown_8_, 0);
		arg0->unknown_10_ = 0;
	}
	if (NitroVM_ReadSync(arg0->unknown_c_, arg1, arg2) == -1)
		return 0;
	arg0->unknown_8_ += arg2;
	return 1;
}
