#include <globaldefs.h>

extern "C" void* func_02012fe4();
extern "C" void VectorizedInvertedMemcpy(void* dst, const void* src, unsigned int size);

struct Struct_020a9b2c {
    unsigned char unknown_0_[0xd98];
    unsigned int unknown_d98_;
    unsigned int unknown_d9c_;
    unsigned int unknown_da0_;
    unsigned short unknown_da4_;
    unsigned char unknown_da6_;
};

struct Struct_020a9b2c_2 {
    unsigned char unknown_0_[0xc00];
    Struct_020a9b2c unknown_c00_;
};

struct Struct_020a9b2c_3 {
    unsigned char unknown_0_[0x198];
    Struct_020a9b2c_2 unknown_198_;
};

struct Struct_020a9b2c_4 {
    unsigned char unknown_0_[0xb34];
    unsigned int unknown_b34_;
    unsigned int unknown_b38_;
    unsigned int unknown_b3c_;
    unsigned char unknown_b40_[0x4];
    unsigned int unknown_b44_;
    unsigned char unknown_b48_[0x19];
    unsigned char unknown_b61_;
};

struct Struct_020a9b2c_5 {
    unsigned char unknown_0_[0x1000];
    Struct_020a9b2c_4 unknown_1000_;
};

struct Struct_020a9b2c_6 {
#if defined(jpn)
    unsigned char unknown_0_[0x860];
#else
    unsigned char unknown1_0_[0x840];
#endif
    Struct_020a9b2c_5 unknown_840_;
};

// USA: func_020a9b2c
// JPN: func_020a9b2c
extern "C" ARM int func_020a9b2c(Struct_020a9b2c_3* arg0) {
    Struct_020a9b2c_2* var0 = &arg0->unknown_198_;
    Struct_020a9b2c* var1 = &var0->unknown_c00_;
    Struct_020a9b2c_6* var2 = static_cast<Struct_020a9b2c_6*>(func_02012fe4());
    Struct_020a9b2c_5* var3 = &var2->unknown_840_;
    var3->unknown_1000_.unknown_b38_ = var1->unknown_d98_;
    var3->unknown_1000_.unknown_b34_ = var1->unknown_d9c_;
    var3->unknown_1000_.unknown_b44_ = var1->unknown_da0_;
    var3->unknown_1000_.unknown_b3c_ = var1->unknown_da4_ & 0xff;
    var3->unknown_1000_.unknown_b61_ = var1->unknown_da6_ != 0;
    VectorizedInvertedMemcpy(arg0, var3, 0x1b30);
    return 1;
}
