#include <globaldefs.h>

extern "C" int func_ov031_02207180(void* arg0);
extern "C" int func_ov031_02207970(void* arg0, void* arg1);

struct Struct_ov031_022078f0 {
	char unknown_0_[0x70];
	short unknown_70_;
	char unknown_72_;
	signed char unknown_73_;
};

// USA: func_ov031_022078f0
extern "C" ARM int func_ov031_022078f0(Struct_ov031_022078f0* arg0, void* arg1) {
	if (func_ov031_02207180(arg0)) {
		return ~0x1b;
	}
	signed char var0 = arg0->unknown_73_;
	int var1 = 1;
	if (var0 != 0) {
		if (var0 != 4) {
			var1 = 0;
		}
	}
	if (!var1) {
		return ~0x1b;
	}
	int var2 = 0;
	if (arg0 == NULL) goto checkOk;
	if (!(arg0->unknown_70_ & 1)) goto checkOk;
	var2 = 1;
checkOk:
	if (!var2) {
		return ~0x26;
	}
	if (*(volatile short*)&arg0->unknown_70_ & 2) {
		return ~0x1b;
	}
	return func_ov031_02207970(arg0, arg1);
}
