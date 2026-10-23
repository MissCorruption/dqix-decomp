#include <globaldefs.h>

extern "C" int func_ov023_021f6558(void* arg0, int arg1);
extern "C" void func_ov004_021660f4(void);
extern "C" void func_ov004_02165f2c(void);
extern "C" void func_ov004_02165ef4(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

struct Struct_ov004_02166b40 {
    char unknown_0_[0x48];
    short unknown_48_;
    short unknown_4a_;
    char unknown_4c_[4];
    unsigned char unknown_50_0_ : 6;
    unsigned char unknown_50_6_ : 1;
    unsigned char unknown_50_7_ : 1;
};
#if defined(jpn)
struct Struct_ov004_0217101c { unsigned int unknown_0_; struct Struct_ov004_02166b40* unknown_4_; };
extern Struct_ov004_0217101c data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c.unknown_4_
#else
extern struct Struct_ov004_02166b40* data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c
#endif

// USA: func_ov004_02166b40
#pragma optimize_for_size off
extern "C" ARM int func_ov004_02166b40(void* arg0) {
    struct Struct_ov004_02166b40* var0 = CONTEXT_VALUE;
    int var1 = func_ov023_021f6558(arg0, 0x5a);
    short var2;
    if (var1 != 0xb4 && var1 == 0xb5) {
        var0->unknown_50_6_ = 1;
        var0->unknown_50_7_ = 1;
        var2 = var0->unknown_4a_;
    } else {
        var0->unknown_50_6_ = 0;
        var0->unknown_50_7_ = 1;
        var2 = var0->unknown_48_;
    }

    if (var2 != 0) {
        func_ov004_021660f4();
        func_ov004_02165f2c();
        func_ov004_02165ef4(arg0);
        func_ov011_021848a0(arg0, 0x12d);
    } else {
        func_ov011_021848a0(arg0, 0x66);
    }
    return 0;
}
