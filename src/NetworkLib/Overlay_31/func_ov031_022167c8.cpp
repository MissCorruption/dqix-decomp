#include <globaldefs.h>
#include "NitroSDK/Memory.h"

typedef void* (*Type_ov031_022167c8)(const char*, unsigned int);
union Struct_ov031_022167c8 {
    struct {
        char unknown_0_[0x40];
        Type_ov031_022167c8 unknown_40_;
        int unknown_44_;
    } unknown_0_;
    unsigned int unknown1_0_[18];
};
struct Struct_ov031_022167c8_2 {
    char unknown_0_[0x1004];
    int unknown_1004_;
    struct {
        unsigned int unknown_0_;
        char unknown_4_[0x1c0];
    } unknown_1008_;
    union {
        Struct_ov031_022167c8 unknown_0_;
        struct {
            char unknown_0_[0x32];
            unsigned short unknown_32_;
            char unknown_34_[0xb];
            unsigned char unknown_3f_;
        } unknown1_0_;
    } unknown_11cc_;
    char unknown_1214_[0x100];
    void* unknown_1314_;
};
struct Struct_ov031_0224e5e8 {
    int unknown_0_;
    int unknown_4_;
    Struct_ov031_022167c8_2* unknown_8_;
};
extern Struct_ov031_0224e5e8 data_ov031_0224e5e8;
extern const char data_ov031_02249b98[];
extern "C" int func_ov031_02216b90(int);
extern "C" void func_ov031_022168ec();

// USA: func_ov031_022167c8
extern "C" ARM int func_ov031_022167c8(Struct_ov031_022167c8* arg0, void* arg1) {
    Type_ov031_022167c8 var0 = arg0->unknown_0_.unknown_40_;
    if (data_ov031_0224e5e8.unknown_8_) return 2;
    data_ov031_0224e5e8.unknown_8_ = (Struct_ov031_022167c8_2*)var0(data_ov031_02249b98, 0x13f4);
    if (!data_ov031_0224e5e8.unknown_8_) return 2;
    VectorizedMemset(data_ov031_0224e5e8.unknown_8_, 0, 0x13f4);
    data_ov031_0224e5e8.unknown_8_->unknown_1314_ = arg1;
    data_ov031_0224e5e8.unknown_0_ = 0;
    VectorizedMemset(&data_ov031_0224e5e8.unknown_8_->unknown_1008_, 0, 0x1c4);
    data_ov031_0224e5e8.unknown_8_->unknown_1008_.unknown_0_ = 0x4e84;
    data_ov031_0224e5e8.unknown_8_->unknown_11cc_.unknown_0_ = *arg0;
    data_ov031_0224e5e8.unknown_8_->unknown_11cc_.unknown1_0_.unknown_32_ = 0;
    data_ov031_0224e5e8.unknown_8_->unknown_11cc_.unknown1_0_.unknown_3f_ = 0;
    data_ov031_0224e5e8.unknown_8_->unknown_1004_ = func_ov031_02216b90(1);
    if (data_ov031_0224e5e8.unknown_8_->unknown_1004_) return data_ov031_0224e5e8.unknown_8_->unknown_1004_;
    data_ov031_0224e5e8.unknown_4_ = 0;
    func_ov031_022168ec();
    return 0;
}
