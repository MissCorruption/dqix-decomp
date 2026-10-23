#include <globaldefs.h>

extern "C" void* func_02055624(void* arg0);
extern "C" void* func_0205560c(void* arg0);

struct Struct_02058564 {
    unsigned char unknown_0_[0x1ec];
    struct Struct_02058564* unknown_1ec_;
};

struct Struct_02058564_2 {
    struct Struct_02058564* unknown_0_;
    int unknown_4_;
};

// USA: func_02058564
extern "C" ARM void func_02058564(struct Struct_02058564_2* arg0) {
    struct Struct_02058564* var0;
    if (arg0->unknown_4_ <= 0) return;
    var0 = arg0->unknown_0_;
    while (var0 != NULL) {
        func_02055624(var0);
        func_0205560c(var0);
        var0 = var0->unknown_1ec_;
    }
}
