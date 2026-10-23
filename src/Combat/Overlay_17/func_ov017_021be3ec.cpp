#include <globaldefs.h>

extern int data_02108760;
extern "C" void func_0205ebec(void* arg0);

struct Struct_ov017_021a3ef0_17 { unsigned char unknown_0_; unsigned char unknown_1_; };

// USA: func_ov017_021be3ec
extern "C" ARM void func_ov017_021be3ec(Struct_ov017_021a3ef0_17* arg0) {
	func_0205ebec(&data_02108760);
	arg0->unknown_1_ = 1;
}
