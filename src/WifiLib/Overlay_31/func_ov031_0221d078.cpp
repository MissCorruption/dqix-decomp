#include <globaldefs.h>

struct Struct_ov031_0224eda8 {
    int unknown_0_;
    unsigned int unknown_4_;
    char unknown_8_[0x28];
    char unknown_30_[4][0x40];
};
struct Struct_ov031_0224f008 {
    int unknown_0_;
    unsigned int unknown_4_;
    char unknown_8_[0x28];
    char unknown_30_[0x40];
};
struct Struct_ov031_0221d078 {
    char unknown_0_[4][6];
    char unknown_18_[0x21];
    char unknown_39_[4][14];
    char unknown_71_[0x21];
    char unknown_92_[0x40];
    char unknown_d2_[0x21];
    char unknown_f3_[0x40];
    char unknown_133_[0x21];
};
struct Struct_ov031_0224e6e0 {
    unsigned char unknown_0_[0x2c];
    unsigned int unknown_2c_;
    unsigned int unknown_30_;
};
struct Struct_ov031_0221d078_2 {
    unsigned short unknown_0_;
    char unknown_2_[0x114];
    unsigned char unknown_116_;
};

extern Struct_ov031_0224e6e0 data_ov031_0224e6e0;
extern Struct_ov031_0224eda8 data_ov031_0224eda8;
extern Struct_ov031_0224eda8 data_ov031_0224eed8;
extern Struct_ov031_0224f008 data_ov031_0224f008;
extern Struct_ov031_0224f008 data_ov031_0224f078;
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);
extern "C" int func_ov031_0221e650(const char*);
extern "C" int func_ov031_0221d270(const char*, int);

// USA: func_ov031_0221d078
extern "C" THUMB int func_ov031_0221d078(Struct_ov031_0221d078_2* arg0) {
    Struct_ov031_0221d078* var0 = (Struct_ov031_0221d078*)((unsigned char*)arg0 + 0x117);
    Struct_ov031_0224eda8* var1 = &data_ov031_0224eda8;
    Struct_ov031_0224eda8* var2 = &data_ov031_0224eed8;
    Struct_ov031_0224f008* var3 = &data_ov031_0224f008;
    Struct_ov031_0224f008* var4 = &data_ov031_0224f078;
    if (var0 == 0) {
        return -1;
    }
    arg0->unknown_0_ = data_ov031_0224e6e0.unknown_2c_ & data_ov031_0224e6e0.unknown_30_;
    func_ov031_0221e52c(var0, 0, sizeof(Struct_ov031_0221d078));
    if (arg0->unknown_0_ & 1) {
        func_ov031_0221e51c(var0->unknown_0_[0], var1->unknown_30_[0], var1->unknown_4_);
        func_ov031_0221e51c(var0->unknown_0_[1], var1->unknown_30_[1], var1->unknown_4_);
        func_ov031_0221e51c(var0->unknown_0_[2], var1->unknown_30_[2], var1->unknown_4_);
        func_ov031_0221e51c(var0->unknown_0_[3], var1->unknown_30_[3], var1->unknown_4_);
        if (func_ov031_0221d270(var1->unknown_8_, func_ov031_0221e650(var1->unknown_8_)) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(var0->unknown_18_, var1->unknown_8_, func_ov031_0221e650(var1->unknown_8_));
    }
    if (arg0->unknown_0_ & 2) {
        func_ov031_0221e51c(var0->unknown_39_[0], var2->unknown_30_[0], var2->unknown_4_);
        func_ov031_0221e51c(var0->unknown_39_[1], var2->unknown_30_[1], var2->unknown_4_);
        func_ov031_0221e51c(var0->unknown_39_[2], var2->unknown_30_[2], var2->unknown_4_);
        func_ov031_0221e51c(var0->unknown_39_[3], var2->unknown_30_[3], var2->unknown_4_);
        if (func_ov031_0221d270(var2->unknown_8_, func_ov031_0221e650(var2->unknown_8_)) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(var0->unknown_71_, var2->unknown_8_, func_ov031_0221e650(var2->unknown_8_));
    }
    if (arg0->unknown_0_ & 4) {
        if (func_ov031_0221d270(var3->unknown_30_, var3->unknown_4_ - 1) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(var0->unknown_92_, var3->unknown_30_, var3->unknown_4_);
        if (func_ov031_0221d270(var3->unknown_8_, func_ov031_0221e650(var3->unknown_8_)) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(var0->unknown_d2_, var3->unknown_8_, func_ov031_0221e650(var3->unknown_8_));
    }
    if (arg0->unknown_0_ & 8) {
        if (func_ov031_0221d270(var4->unknown_30_, var4->unknown_4_ - 1) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(var0->unknown_f3_, var4->unknown_30_, var4->unknown_4_);
        if (func_ov031_0221d270(var4->unknown_8_, func_ov031_0221e650(var4->unknown_8_)) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(var0->unknown_133_, var4->unknown_8_, func_ov031_0221e650(var4->unknown_8_));
    }
    arg0->unknown_116_ = 0;
    return 0;
fail:
    func_ov031_0221e52c(var0, 0, sizeof(Struct_ov031_0221d078));
    return -1;
}
