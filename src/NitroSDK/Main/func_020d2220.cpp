#include <globaldefs.h>

extern "C" void func_020d2820(void);
extern "C" void func_020d2a48(void*);
struct Struct_020d217c_2;
extern "C" void func_020d248c(Struct_020d217c_2*);
extern "C" int func_020d2404(int);
extern "C" void func_020d24c4(int);

struct Struct_02112a60 {
    struct Struct_02112a60* unknown_0_;
    unsigned char unknown_4_[20];
};
extern struct Struct_02112a60 data_02112a60[256] __attribute__((aligned(32)));

extern int data_02114248;

struct Struct_02112780 {
    struct Struct_02112a60* unknown_0_;
    int unknown_4_;
    struct Struct_02112a60* unknown_8_;
    struct Struct_02112a60* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
};
extern struct Struct_02112780 data_02112780;

struct Struct_02113780 {
    unsigned char unknown_0_[0xac8];
    int unknown_ac8_;
};
extern struct Struct_02113780 data_02113780;

struct Struct_021127e0 {
    unsigned char unknown_0_[0x280];
};
extern struct Struct_021127e0 data_021127e0;
extern struct Struct_021127e0* data_021142c0;

struct Struct_020d2220 {
    void* unknown_0_;
    int unknown_4_;
    void* unknown_8_;
};

// USA: func_020d2220
extern "C" ARM void func_020d2220(void) {
    int var0;
    struct Struct_020d2220* var1;
    func_020d2820();
    data_02112780.unknown_0_ = data_02112a60;
    for (var0 = 0; var0 < 255; var0++) {
        data_02112a60[var0].unknown_0_ = &data_02112a60[var0 + 1];
    }
    data_02113780.unknown_ac8_ = 0;
    data_02112780.unknown_10_ = &data_02114248;
    data_02112780.unknown_8_ = 0;
    data_02112780.unknown_c_ = 0;
    data_02112780.unknown_1c_ = 0;
    data_02112780.unknown_14_ = 0;
    data_02112780.unknown_18_ = 0;
    data_02112780.unknown_20_ = 1;
    data_02112780.unknown_4_ = 0;
    data_021142c0 = &data_021127e0;
    func_020d2a48(&data_021127e0);
    var1 = (struct Struct_020d2220*)func_020d2404(1);
    if (var1 == 0) return;
    var1->unknown_4_ = 0x1d;
    var1->unknown_8_ = data_021142c0;
    func_020d248c((Struct_020d217c_2*)var1);
    func_020d24c4(1);
}
