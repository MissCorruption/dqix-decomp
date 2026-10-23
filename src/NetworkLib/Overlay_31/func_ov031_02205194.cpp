#include <globaldefs.h>

struct Struct_ov031_02205194 {
	unsigned char unknown_0_[0x64];
	int unknown_64_;
	int unknown_68_;
};

// USA: func_ov031_02205194
extern "C" ARM int func_ov031_02205194(struct Struct_ov031_02205194* arg0) {
	int var0 = arg0->unknown_64_;
	if (var0 == 0) var0 = arg0->unknown_68_;
	return var0;
}
