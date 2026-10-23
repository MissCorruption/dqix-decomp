#include <globaldefs.h>

struct Struct_ov015_0218bb14 { int unknown_0_; int unknown_4_; };
struct Struct_ov015_0218bb14_2 { void* unknown_0_; Struct_ov015_0218bb14* unknown_4_; void* unknown_8_; int unknown_c_; };

// USA: func_ov015_0218bb14
extern "C" ARM struct Struct_ov015_0218bb14* func_ov015_0218bb14(struct Struct_ov015_0218bb14_2* arg0, int arg1) {
	if (arg1 < 0) goto fail;
	if (arg0->unknown_c_ > arg1) goto success;
fail:
	return NULL;
success:
	return &arg0->unknown_4_[arg1];
}
