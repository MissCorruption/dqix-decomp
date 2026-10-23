#include <globaldefs.h>
#include "NitroSDK/Memory.h"

typedef void* (*Type_ov031_02217c00)(const char*, unsigned int);
union Struct_ov031_02217c00 {
    struct {
        const char* unknown_0_;
        int unknown_4_;
        int unknown_8_;
        Type_ov031_02217c00 unknown_c_;
        int unknown_10_;
        int unknown_14_;
        int unknown_18_;
    } unknown_0_;
    unsigned int unknown1_0_[7];
};
struct Struct_ov031_02217c00_2 {
    char unknown_0_[0x1000];
    struct Header {
        unsigned char unknown_0_;
        char unknown_1_[3];
        Struct_ov031_02217c00 unknown_4_;
        int unknown_20_;
    } unknown_1000_;
    char unknown_1024_[0x9a8];
    void* unknown_19cc_;
    void* unknown_19d0_;
    char unknown_19d4_[0x34];
    struct {
        char unknown_0_[0x28];
        int unknown_28_;
        int unknown_2c_;
        char unknown_30_[0x1dc];
    } unknown_1a08_;
};
extern "C" int func_ov031_022187a4(char*, void*, int);
extern "C" int func_ov031_022188e4(Struct_ov031_02217c00_2*, const char*);
extern "C" int func_ov031_02218468(Struct_ov031_02217c00_2*);
extern const char data_ov031_02249db4[];
extern const char data_ov031_02249dcc[];

static inline Struct_ov031_02217c00_2::Header* inline_ov031_02217c00(Struct_ov031_02217c00_2* arg0) {
    return &arg0->unknown_1000_;
}

// USA: func_ov031_02217c00
extern "C" ARM int func_ov031_02217c00(Struct_ov031_02217c00_2* arg0, Struct_ov031_02217c00* arg1) {
    Type_ov031_02217c00 var0 = arg1->unknown_0_.unknown_c_;
    VectorizedMemset(arg0, 0, 0x1c14);
    arg0->unknown_1a08_.unknown_28_ = -1;
    arg0->unknown_1a08_.unknown_2c_ = -1;
    arg0->unknown_1000_.unknown_4_ = *arg1;
    arg0->unknown_19cc_ = var0(data_ov031_02249db4, 0xb68);
    if (!arg0->unknown_19cc_) {
        arg0->unknown_1000_.unknown_20_ = 1;
        return 1;
    }
    arg0->unknown_19d0_ = var0(data_ov031_02249dcc, 0x5ea);
    if (!arg0->unknown_19d0_) {
        arg0->unknown_1000_.unknown_20_ = 1;
        return 1;
    }
    switch (func_ov031_022187a4((char*)arg0, &arg0->unknown_1a08_, arg0->unknown_1000_.unknown_4_.unknown_0_.unknown_8_)) {
    case 0: {
        Struct_ov031_02217c00_2::Header* var1 = inline_ov031_02217c00(arg0);
        int var2 = 1;
        var1->unknown_20_ = var2;
        return var2;
    }
    default:
        break;
    }
    switch (func_ov031_022188e4(arg0, arg1->unknown_0_.unknown_0_)) {
    case 0: {
        Struct_ov031_02217c00_2::Header* var3 = inline_ov031_02217c00(arg0);
        int var4 = 1;
        var3->unknown_20_ = var4;
        return var4;
    }
    default:
        break;
    }
    arg0->unknown_1000_.unknown_20_ = func_ov031_02218468(arg0);
    if (arg0->unknown_1000_.unknown_20_ == 0) arg0->unknown_1000_.unknown_0_ = 0xff;
    return arg0->unknown_1000_.unknown_20_;
}
