#if defined(jpn)
#define INIT_PAIR_OFFSET 0x54cc
#else
#define INIT_PAIR_OFFSET 0x572c
#endif
#if defined(jpn)
#define INIT_DATA_OFFSET 0x54d4
#else
#define INIT_DATA_OFFSET 0x5734
#endif
#include <globaldefs.h>
#if defined(jpn)
#define func_0209a3dc func_0209c130
#endif
#include "std_library_functions.h"

struct Struct_0200f3a4_8;
extern "C" void func_0209a338(Struct_0200f3a4_8* arg0);
extern "C" void func_0209a3dc(void* arg0, void* arg1);

// USA: func_0201133c
extern "C" ARM void func_0201133c(char* arg0) {
    memset(arg0 + INIT_DATA_OFFSET, 0, 0x570);
    func_0209a338((Struct_0200f3a4_8*)(arg0 + INIT_PAIR_OFFSET));
    func_0209a3dc(arg0 + INIT_PAIR_OFFSET, arg0 + INIT_DATA_OFFSET);
}
