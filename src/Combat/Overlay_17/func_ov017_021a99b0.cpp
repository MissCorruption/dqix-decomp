#include <globaldefs.h>

struct Struct_ov017_021a4368 { unsigned char unknown_0_[0x20]; void* unknown_20_; };

extern "C" void func_ov008_0218946c(char*);

// USA: func_ov017_021a99b0
extern "C" ARM void func_ov017_021a99b0(Struct_ov017_021a4368* arg0) {
	void* var0 = arg0->unknown_20_;
	if (var0) func_ov008_0218946c((char*)var0);
}
