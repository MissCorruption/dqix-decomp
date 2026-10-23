#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif


struct Struct_02083508 {
    void* unknown_0_;       // 0x0
    void* unknown_4_;  // 0x4
    char unknown_8_[0x18];
};

struct Struct_02082828_6 {
    char unknown_0_[0x20];
};

struct Struct_02082828_2 {
    char unknown_0_[0x194];
    struct Struct_02083508 unknown_194_[11];  // 0x194
    char unknown_2f4_[IS_JPN ? 0x364 : 0x3fc];
    struct Struct_02082828_6 unknown_6f0_[11];  // 0x6f0
};

struct Struct_02083508_2;
extern "C" void func_020de1d4(struct Struct_02083508_2*);
extern "C" unsigned char* func_0208349c(unsigned char* arg0, int arg1);

// USA: func_02083508
extern "C" ARM void func_02083508(struct Struct_02082828_2* arg0) {
    int var0;
    for (var0 = 0; var0 < 11; var0++) {
        func_020de1d4((struct Struct_02083508_2*)&arg0->unknown_194_[var0]);
#if defined(jpn)
        arg0->unknown_194_[var0].unknown_4_ = (unsigned char*)arg0 + 0x56f + var0 * 0x15;
#else
        arg0->unknown_194_[var0].unknown_4_ = func_0208349c((unsigned char*)arg0, var0);
#endif
        arg0->unknown_194_[var0].unknown_0_ = &arg0->unknown_6f0_[var0];
    }
}
