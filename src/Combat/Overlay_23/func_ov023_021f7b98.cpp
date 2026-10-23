#include <globaldefs.h>

struct Struct_02020cb8 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned short unknown_e_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
    unsigned char unknown_1f_;

    unsigned char inline_ov023_021f7b98() { return unknown_1c_0_; }
    unsigned char inline_ov023_021f7b98_2() { return unknown_1c_4_; }
    void inline_ov023_021f7b98_3(unsigned char arg0) { unknown_1c_0_ = arg0; }
    void inline_ov023_021f7b98_4(unsigned char arg0) { unknown_1c_4_ = arg0; }
};
extern "C" void func_0204af64(struct Struct_02020cb8* arg0);

struct Struct_02020cb8_4;
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);

struct Struct_02020aec;
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

extern "C" void func_0204b2e0(void* arg0, char* arg1);

struct Struct_02020cb8_6;
extern "C" void func_0204b3a0(struct Struct_02020cb8_6* arg0, char* arg1);

struct Struct_ov023_021f7b98 {
#if defined(jpn)
    char unknown1_0_[0x24];
#else
    char unknown_0_[0x28];
#endif
    struct Struct_02020cb8 unknown_28_;
};

// USA: func_ov023_021f7b98
extern "C" ARM void func_ov023_021f7b98(struct Struct_ov023_021f7b98* arg0, void* arg1, int arg2, struct Struct_02020aec* arg3, unsigned int arg4) {
    int var0;
    void* var1;
    struct Struct_02020cb8 var2;

    if (arg3 == 0 || arg4 == 0) {
        return;
    }
    int var3 = func_02046900((struct Struct_02020cb8_4*)arg3);
    for (int var4 = 0; var4 < var3; var4++) {
        char* var5 = (char*)func_020467f0(arg3, var4, &var1, &var0);
        if (var5) {
            func_0204af64(&var2);
            var2.inline_ov023_021f7b98_3(arg0->unknown_28_.inline_ov023_021f7b98());
            var2.inline_ov023_021f7b98_4(arg0->unknown_28_.inline_ov023_021f7b98_2());
            if (arg2) {
                func_0204b2e0(&var2, var5);
            } else {
                func_0204b3a0((struct Struct_02020cb8_6*)&var2, var5);
            }
        }
    }
}
