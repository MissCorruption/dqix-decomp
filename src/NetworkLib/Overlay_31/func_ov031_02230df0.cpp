#include <globaldefs.h>

extern "C" char* func_ov031_02235c70(void);
extern "C" int func_ov031_0221b258(unsigned char* arg0);
extern "C" int func_ov031_0221b1f4(unsigned char* arg0, unsigned char* arg1);

// USA: func_ov031_02230df0
extern "C" ARM int func_ov031_02230df0(void) {
	unsigned char* var0 = (unsigned char*)func_ov031_02235c70();
	if (var0[0x40] == 0) {
		return 0;
	}
	if (var0[0xf6] == 0) {
		if (!func_ov031_0221b258(var0 + 0xc8)) {
			if (!func_ov031_0221b258(var0 + 0xcc)) {
				return 0;
			}
		}
	}
	if (var0[0xf5] == 0) {
		if (!func_ov031_0221b258(var0 + 0xc0)) {
			return 0;
		}
		if (!func_ov031_0221b258(var0 + 0xc4)) {
			return 0;
		}
		if (!func_ov031_0221b1f4(var0 + 0xc0, var0 + 0xf0)) {
			return 0;
		}
	}
	return 1;
}
