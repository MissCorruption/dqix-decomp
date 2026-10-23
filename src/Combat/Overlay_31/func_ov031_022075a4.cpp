#include <globaldefs.h>

struct Struct_ov031_022075a4 { char unknown_0_[0x72]; signed char unknown_72_; };

// USA: func_ov031_022075a4
extern "C" ARM int func_ov031_022075a4(Struct_ov031_022075a4* arg0, int arg1, int arg2) {
	if (arg0 == NULL) {
		return -1;
	}
	if (arg1 == 3) goto case3;
	if (arg1 == 4) goto case4;
	goto def;
case3:
	return (arg0->unknown_72_ == 1) ? 0 : 4;
case4:
	if (arg2 & 4) {
		arg0->unknown_72_ = 0;
	} else {
		arg0->unknown_72_ = 1;
	}
def:
	return 0;
}
