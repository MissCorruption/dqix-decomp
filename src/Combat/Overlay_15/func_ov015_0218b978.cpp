#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Owner_0218b978 { void* ptr; int pad4; int field8; };

extern "C" void func_ov015_0218b828(struct Owner_0218b978* o, int count);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern AllocatorUnion data_02114e20;

// USA: func_ov015_0218b978
extern "C" ARM void func_ov015_0218b978(struct Owner_0218b978* o, int count) {
    func_ov015_0218b828(o, count);
    o->ptr = func_02012d88(&data_02114e20, count * 0xc);
    o->field8 = 0;
}
