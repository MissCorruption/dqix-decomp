#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_ov015_0218b5a0 { void* unknown_0_; int unknown_4_; int unknown_8_; };

extern "C" void func_ov015_0218b828(struct Struct_ov015_0218b5a0* arg0, int arg1);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;

// USA: func_ov015_0218b978
extern "C" ARM void func_ov015_0218b978(struct Struct_ov015_0218b5a0* arg0, int arg1) {
    func_ov015_0218b828(arg0, arg1);
    arg0->unknown_0_ = func_02012d88(&data_02114e20, arg1 * 0xc);
    arg0->unknown_8_ = 0;
}
