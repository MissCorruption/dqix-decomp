#include <globaldefs.h>

void CleanInvalidateCacheRange(const void* addr, unsigned int size);

typedef int (*Type_020bbc38)(int, int, int);
extern Type_020bbc38 data_020e92a8[];

struct Struct_020bbc38 {
    int unknown_0_;    // +0x0
    int unknown_4_;   // +0x4
    int unknown_8_;    // +0x8
    int unknown_c_;   // +0xc
};

// USA: func_020bbc38
extern "C" ARM int func_020bbc38(Struct_020bbc38* arg0) {
    Type_020bbc38 var0 = data_020e92a8[arg0->unknown_0_];
    CleanInvalidateCacheRange((const void*)(arg0->unknown_4_), arg0->unknown_c_);
    return var0(arg0->unknown_4_, arg0->unknown_8_, arg0->unknown_c_);
}
