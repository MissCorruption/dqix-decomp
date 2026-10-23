#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_ov015_0218b9ac { int unknown_0_; int unknown_4_; };
struct Struct_ov015_0218b6bc { void* unknown_0_; Struct_ov015_0218b9ac* unknown_4_; void* unknown_8_; int unknown_c_; };

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;

// USA: func_ov015_0218b9ac
extern "C" ARM void func_ov015_0218b9ac(struct Struct_ov015_0218b6bc* arg0, int arg1) {
	arg0->unknown_4_ = (Struct_ov015_0218b9ac*)func_02012d88(&data_02114e20, arg1 * 8);
	arg0->unknown_c_ = 0;
}
