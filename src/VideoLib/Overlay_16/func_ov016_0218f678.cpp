#include <globaldefs.h>
#include "NitroSDK/Filesystem/FileAccessor.h"

struct Struct_ov016_0218f678 {
	char unknown_0_[0xc];
	NitroVM* unknown_c_;
	unsigned char unknown_10_;
};

// USA: func_ov016_0218f678
extern "C" ARM void func_ov016_0218f678(Struct_ov016_0218f678* arg0) {
	if (arg0->unknown_10_ == 1) {
		NitroVM_AwaitCommandCompletion(arg0->unknown_c_);
	}
	arg0->unknown_10_ = 0;
}
