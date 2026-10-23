#include <globaldefs.h>
#include "NitroSDK/Filesystem/FileAccessor.h"

struct Struct_ov016_0218f5fc {
	char unknown_0_[0x8];
	int unknown_8_;
	NitroVM* unknown_c_;
	unsigned char unknown_10_;
};

// USA: func_ov016_0218f5fc
extern "C" ARM int func_ov016_0218f5fc(Struct_ov016_0218f5fc* arg0, void* arg1, int arg2) {
	int var0 = arg0->unknown_8_ & ~0x1FF;
	int var1 = arg0->unknown_8_ - var0;
	int var2 = arg2 + var1;
	if (var2 & 0x1FF)
		var2 = (var2 & ~0x1FF) + 0x200;
	NitroVM_Seek(arg0->unknown_c_, var0, 0);
	if (NitroVM_ReadAsync(arg0->unknown_c_, arg1, var2) == -1)
		return 0;
	arg0->unknown_8_ += arg2;
	arg0->unknown_10_ = 1;
	return var1;
}
