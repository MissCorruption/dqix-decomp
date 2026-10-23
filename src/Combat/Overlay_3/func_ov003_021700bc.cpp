#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" int func_ov003_0216ffbc(void* arg0);

struct Struct_ov003_0216bcfc { char unknown_0_[0x170]; void* unknown_170_; };

// USA: func_ov003_021700bc
extern "C" ARM void func_ov003_021700bc(Struct_ov003_0216bcfc* arg0) {
#if defined(jpn)
	arg0->unknown_170_ = (char*)func_02012fe4() + 0x860;
#else
	arg0->unknown_170_ = (char*)func_02012fe4() + 0x840;
#endif
	func_ov003_0216ffbc(arg0);
}
