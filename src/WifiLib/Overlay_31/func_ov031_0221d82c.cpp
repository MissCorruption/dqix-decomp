#include <globaldefs.h>

struct Struct_ov031_0221d82c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[1];
};
struct Struct_ov031_0224e720 {
    unsigned char unknown_0_[0x80];
    unsigned char unknown_80_[0x80];
    unsigned char unknown_100_[4];
};
struct Struct_ov031_0224e6e0_6 {
    unsigned char unknown_0_[0x34];
    unsigned int unknown_34_;
    unsigned int unknown_38_;
};
extern Struct_ov031_0224e6e0_6 data_ov031_0224e6e0;
extern "C" unsigned short func_ov031_0221e638(unsigned short);
extern "C" unsigned int func_ov031_0221e610(unsigned int);
extern "C" unsigned int func_ov031_0221d8e8(unsigned char*, int);
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);

// USA: func_ov031_0221d82c
extern "C" THUMB int func_ov031_0221d82c(unsigned char* arg0, Struct_ov031_0224e720* arg1) {
    func_ov031_0221e52c(arg1, 0, sizeof(Struct_ov031_0224e720));
    Struct_ov031_0221d82c* var0 = (Struct_ov031_0221d82c*)arg0;
    for (;;) {
        int var1 = func_ov031_0221e638(var0->unknown_2_);
        if (var1 <= 0) return -1;
        switch (var0->unknown_0_) {
        case 0:
            func_ov031_0221e51c(arg1->unknown_0_, var0->unknown_6_, var1);
            break;
        case 1:
            func_ov031_0221e51c(arg1->unknown_80_, var0->unknown_6_, var1);
            break;
        case 2:
            func_ov031_0221e51c(arg1->unknown_100_, var0->unknown_6_, var1);
            break;
        case 3:
        case 4:
            var1 = func_ov031_0221e638(var0->unknown_6_[0]);
            if (var1 <= 0) return -2;
            break;
        case 5:
            data_ov031_0224e6e0.unknown_34_ = func_ov031_0221e610(func_ov031_0221d8e8(var0->unknown_6_, var1));
            break;
        case 6:
            data_ov031_0224e6e0.unknown_38_ = func_ov031_0221e610(func_ov031_0221d8e8(var0->unknown_6_, var1));
            break;
        default:
            return -1;
        }
        if (var0->unknown_4_ == 0) break;
        var0 = (Struct_ov031_0221d82c*)(arg0 + func_ov031_0221e638(var0->unknown_4_));
    }
    return 0;
}
