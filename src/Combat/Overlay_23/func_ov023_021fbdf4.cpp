#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x716
#else
#define REGION_FIELD_0 0x79a
#endif


extern "C" void func_ov023_021ddf5c(void *arg0, int arg1);

struct Struct_ov004_02158bd4 {
	char unknown_0_[REGION_FIELD_0];
	unsigned char unknown_79a_;
};

// USA: func_ov023_021fbdf4
extern "C" ARM void func_ov023_021fbdf4(struct Struct_ov004_02158bd4 *arg0, int arg1) {
	arg0->unknown_79a_ = arg1;
	func_ov023_021ddf5c((char*)arg0 + 0x20, arg1);
}
