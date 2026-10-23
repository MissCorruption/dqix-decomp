#include <globaldefs.h>

extern "C" void func_020d21f8(void);
extern "C" void func_020d220c(void);
void CleanCacheRange(const void* addr, unsigned int size);

struct Struct_020d2c98 {
    int unknown_0_;
    struct Struct_020d2c98* unknown_4_;
};
struct Struct_020d2c98_2 {
    char unknown_0_[0x18];
    struct Struct_020d2c98* unknown_18_;
};

// USA: func_020d2c98
extern "C" ARM void func_020d2c98(int arg0) {
    struct Struct_020d2c98_2* var0 = (struct Struct_020d2c98_2*)arg0;
    struct Struct_020d2c98* var1;
    func_020d21f8();
    var1 = var0->unknown_18_;
    if (var1 != NULL) {
        do {
            struct Struct_020d2c98* var2 = var1->unknown_4_;
            var1->unknown_0_ = 0;
            var1->unknown_4_ = 0;
            CleanCacheRange((const void*)((int)var1), 8);
            var1 = var2;
        } while (var1 != NULL);
    }
    func_020d220c();
}
