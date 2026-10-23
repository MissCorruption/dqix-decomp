#include <globaldefs.h>

void CleanInvalidateCacheRange(const void* addr, unsigned int size);
void CleanCacheRange(const void* addr, unsigned int size);
extern "C" int func_020e12c0(void* arg0);

typedef void (*Type_020e13dc)(int, int, int);
extern Type_020e13dc data_020f2bb0[];

struct Struct_020e13dc {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    int unknown_c_;
    int unknown_10_;
    unsigned char unknown_14_;
};

// USA: func_020e13dc
extern "C" ARM void func_020e13dc(Struct_020e13dc* arg0) {
    int var0 = func_020e12c0(&arg0->unknown_c_);
    if (var0) {
        Type_020e13dc var1 = data_020f2bb0[arg0->unknown_8_];
        int var2 = arg0->unknown_c_;
        if (var1) {
            CleanInvalidateCacheRange((const void*)(var0 + var2), arg0->unknown_4_);
            var1(var0 + var2, arg0->unknown_0_, arg0->unknown_10_);
            CleanCacheRange((const void*)(var0 + var2), arg0->unknown_4_);
        }
    }
}
