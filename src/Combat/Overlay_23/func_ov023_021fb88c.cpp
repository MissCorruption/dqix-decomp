#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov023_021fb88c {
    unsigned int unknown_0_[3];
};

// USA: func_ov023_021fb88c
extern "C" ARM void func_ov023_021fb88c(void* arg0, void* arg1) {
    struct Struct_ov023_021fb88c var0;
    __clear(&var0, 0xc);
    var0.unknown_0_[0] = *(unsigned int*)((char*)arg1 + 0xa8);
    var0.unknown_0_[2] = *(unsigned int*)((char*)arg1 + 0xac);
    *(struct Struct_ov023_021fb88c*)arg0 = var0;
}
