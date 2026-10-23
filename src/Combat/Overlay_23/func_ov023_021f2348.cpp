#include <globaldefs.h>

struct Struct_ov023_021f2348 {
	char unknown_0_[0x438];
	unsigned short unknown_438_;
};

// USA: func_ov023_021f2348
extern "C" ARM void func_ov023_021f2348(void* arg0, int arg1) {
	Struct_ov023_021f2348* var0 = (Struct_ov023_021f2348*)arg0;
	if (arg1 != 0) var0->unknown_438_ |= 0x400;
	else var0->unknown_438_ &= ~0x400;
}
