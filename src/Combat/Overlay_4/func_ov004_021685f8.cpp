#if defined(jpn)
#define R(j,u) (j)
#define data_ov004_02170700 data_ov004_02170fa8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_0203d028_21 {
    char unknown_0_[0xcc];
    const char* unknown_cc_;
    int unknown_d0_;
};

struct Struct_0203e2c4_2 {
    char unknown_0_[0x18];
    struct Struct_0203d028_21* unknown_18_;
};

extern "C" void* func_0203cf4c(void);
extern "C" void* func_0203df78(void* arg0, int arg1);
extern "C" void func_02040b2c(struct Struct_0203e2c4_2* arg0, int arg1);
extern "C" int func_020415b0(Struct_0203d028_21*, int, int);

extern char data_ov004_02170700[];

// USA: func_ov004_021685f8
extern "C" ARM int func_ov004_021685f8(void) {
    struct Struct_0203e2c4_2* var0 = (struct Struct_0203e2c4_2*)func_0203df78(func_0203cf4c(), 0x67);
    if (var0) {
        func_02040b2c(var0, 0);
        var0->unknown_18_->unknown_d0_ = 1;
        func_020415b0(var0->unknown_18_, (int)data_ov004_02170700, 1);
    }
    return 0;
}
