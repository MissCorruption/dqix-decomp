#include <globaldefs.h>

void CleanInvalidateCacheRange(const void* addr, unsigned int size);
void CleanCacheRange(const void* addr, unsigned int size);
extern "C" int func_020e12c0(void*);

typedef void (*Type_020e1384)(int, int, int);
extern Type_020e1384 data_020f2bb0[];

struct Struct_020e1384 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[4];
    int unknown_c_;
    char unknown_10_[4];
    unsigned char unknown_14_;
};

// USA: func_020e1384
extern "C" ARM void func_020e1384(struct Struct_020e1384* arg0) {
    int var0 = func_020e12c0(arg0);
    if (var0 == 0) {
        return;
    }
    unsigned char var1 = arg0->unknown_14_;
    int var2 = arg0->unknown_0_;
    Type_020e1384 var3 = data_020f2bb0[var1];
    if (var3 == NULL) {
        return;
    }
    int var4 = var0 + var2;
    CleanInvalidateCacheRange((const void*)(var4), arg0->unknown_4_);
    var3(var4, arg0->unknown_c_, arg0->unknown_4_);
    CleanCacheRange((const void*)(var4), arg0->unknown_4_);
}
