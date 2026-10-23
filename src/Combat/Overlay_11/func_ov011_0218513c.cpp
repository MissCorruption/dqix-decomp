#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

extern "C" void func_02047230(struct Struct_02012fa4* arg0);
extern "C" void func_02048080(struct Struct_0204719c* arg0);

// USA: func_ov011_0218513c
extern "C" ARM void* func_ov011_0218513c(void* arg0) {
    func_02047230((struct Struct_02012fa4*)((char*)arg0 + 0x20));
    func_02048080((struct Struct_0204719c*)((char*)arg0 + 0x34));
    return arg0;
}
