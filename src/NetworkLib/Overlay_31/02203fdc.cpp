#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02203fdc_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};
struct Struct_ov031_02203fdc {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    Struct_ov031_02203fdc_2 unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    Struct_ov031_02203fdc_2 unknown_c_;
    Struct_ov031_02203fdc_2 unknown_10_;
    Struct_ov031_02203fdc_2 unknown_14_;
    Struct_ov031_02203fdc_2 unknown_18_;
    unsigned char unknown_1c_[16];
    char unknown_2c_[64];
    char unknown_6c_[128];
};
struct Struct_ov031_0224c980_2 {
    unsigned char unknown_0_[0x50];
    unsigned int unknown_50_;
    unsigned char unknown_54_[0x14];
    unsigned long long unknown_68_;
    unsigned long long unknown_70_;
    unsigned long long unknown_78_;
};
extern Struct_ov031_0224c980_2 data_ov031_0224c980;
extern unsigned char data_ov031_0224ce68[];
extern const char data_ov031_02249698[];

enum Enum_ov031_02203fdc {
    Enum_ov031_02203fdc_12 = 12,
    Enum_ov031_02203fdc_53 = 53,
    Enum_ov031_02203fdc_55 = 55,
    Enum_ov031_02203fdc_61 = 61
};

// USA: func_ov031_02203fdc
extern "C" ARM unsigned char* func_ov031_02203fdc(void* arg0, int arg1, int* arg2) {
    unsigned char* var0 = (unsigned char*)arg0;
    Struct_ov031_02203fdc* var1 = (Struct_ov031_02203fdc*)arg0;
    VectorizedMemset(arg0, 0, sizeof(Struct_ov031_02203fdc));
    var1->unknown_0_ = 0x101;
    var1->unknown_2_ = 6;
    data_ov031_0224c980.unknown_68_ = data_ov031_0224c980.unknown_70_ * data_ov031_0224c980.unknown_68_ + data_ov031_0224c980.unknown_78_;
    unsigned int var2 = data_ov031_0224c980.unknown_68_ / 0x100000000ULL;
    if (arg2) *arg2 = var2;
    int var3 = (unsigned short)(var2 / 0x10000U);
    var1->unknown_4_.unknown_0_ = (var3 >> 8) | (var3 << 8);
    int var4 = (unsigned short)var2;
    var1->unknown_4_.unknown_2_ = (var4 >> 8) | (var4 << 8);
    int var5 = (unsigned short)(data_ov031_0224c980.unknown_50_ / 0x10000U);
    var1->unknown_c_.unknown_0_ = (var5 >> 8) | (var5 << 8);
    int var6 = (unsigned short)data_ov031_0224c980.unknown_50_;
    var1->unknown_c_.unknown_2_ = (var6 >> 8) | (var6 << 8);
    VectorizedInvertedMemcpy(data_ov031_0224ce68, var1->unknown_1c_, 6);
    ((unsigned short*)(var0 + sizeof(Struct_ov031_02203fdc)))[0] = 0x8263;
    ((unsigned short*)(var0 + sizeof(Struct_ov031_02203fdc)))[1] = 0x6353;
    ((unsigned short*)(var0 + sizeof(Struct_ov031_02203fdc)))[2] = Enum_ov031_02203fdc_53 | (1 << 8);
    var0[0xf2] = arg1;
    var0[0xf3] = Enum_ov031_02203fdc_61;
    var0[0xf4] = 7;
    var0[0xf5] = 1;
    VectorizedInvertedMemcpy(data_ov031_0224ce68, var0 + 0xf6, 6);
    var0[0xfc] = Enum_ov031_02203fdc_12;
    var0[0xfd] = 10;
    VectorizedInvertedMemcpy(data_ov031_02249698, var0 + 0xfe, 10);
    var0[0x108] = Enum_ov031_02203fdc_55;
    var0[0x109] = 3;
    var0[0x10a] = 1;
    var0[0x10b] = 3;
    var0[0x10c] = 6;
    return var0 + 0x10d;
}
