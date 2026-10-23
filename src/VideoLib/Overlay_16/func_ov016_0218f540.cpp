#include <globaldefs.h>
#include "NitroSDK/Filesystem/FileAccessor.h"

struct Struct_ov016_0218f540 {
	char unknown_0_[0x8];
	int unknown_8_;
	NitroVM* unknown_c_;
	unsigned char unknown_10_;
};

// USA: func_ov016_0218f540
extern "C" ARM int func_ov016_0218f540(Struct_ov016_0218f540* arg0, int arg1) {
	if (arg0->unknown_10_ == 1) {
		NitroVM_AwaitCommandCompletion(arg0->unknown_c_);
		arg0->unknown_10_ = 0;
	}
	if (!NitroVM_Seek(arg0->unknown_c_, arg1, 0))
		return 0;
	arg0->unknown_8_ = arg1;
	return 1;
}
