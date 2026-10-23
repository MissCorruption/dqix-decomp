#include <globaldefs.h>

extern "C" int func_ov031_02237eb0(void);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222d9a4(void);

struct Struct_ov031_0222e3a4 { unsigned char unknown_0_[4]; int *unknown_4_; };
extern Struct_ov031_0222e3a4 *data_ov031_02290c98;

// USA: func_ov031_0222e3a4
extern "C" ARM void func_ov031_0222e3a4(void) {
	if (func_ov031_02237eb0() != 0) return;
	int *var0 = data_ov031_02290c98->unknown_4_;
	*var0 = *var0 & 0xc1fffcff;
	func_ov031_022274c0((int)func_ov031_0222d9a4);
}
