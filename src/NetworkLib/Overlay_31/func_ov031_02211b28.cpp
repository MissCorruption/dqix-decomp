#include <globaldefs.h>

struct Struct_ov031_02211b28 {
	int unknown_0_;
	int unknown_4_;
};

// USA: func_ov031_02211b28
extern "C" ARM void* func_ov031_02211b28(Struct_ov031_02211b28* arg0, int arg1) {
	arg0->unknown_0_ = 0x4457434d;
	arg0->unknown_4_ = arg1;
	return (char*)arg0 + 0x20;
}
