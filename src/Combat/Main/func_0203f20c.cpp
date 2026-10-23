#include <globaldefs.h>

struct Struct_02040468;
struct Struct_0203f008_2;
extern "C" struct Struct_0203f008_2* func_02040468(struct Struct_02040468*, int);
extern "C" void* func_0203f1c8(unsigned char*, unsigned int);

extern int data_02114e50;

struct Struct_0203f20c {
    char unknown_0_[0x8];
    int* unknown_8_;
    unsigned int* unknown_c_;
};

struct Struct_0203c818_3 {
    struct Struct_02040468* unknown_0_;
    char unknown_4_[0x28 - 4];
    short unknown_28_;
    char unknown_2a_[0x30 - 0x2a];
    int unknown_30_;
    int unknown_34_;
    int unknown_38_;
    unsigned int unknown_3c_;
    float unknown_40_;
    int unknown_44_;
    int unknown_48_;
};

// USA: func_0203f20c
extern "C" ARM void func_0203f20c(struct Struct_0203c818_3* arg0) {
    int var0;
    struct Struct_0203f008_2* var1;
    struct Struct_0203f20c* var2;

    var0 = arg0->unknown_28_;
    if (var0 < 0) {
        return;
    }
    var1 = func_02040468(arg0->unknown_0_, var0);
    if (var1 == 0) {
        return;
    }
    var2 = (struct Struct_0203f20c*)func_0203f1c8((unsigned char*)var1 + 0x10, arg0->unknown_30_);
    if (var2 == 0) {
        return;
    }
    if ((unsigned int)(data_02114e50 - arg0->unknown_38_) <= (unsigned int)arg0->unknown_3c_) {
        return;
    }
    arg0->unknown_44_ = arg0->unknown_30_;
    arg0->unknown_48_ = arg0->unknown_34_;
    arg0->unknown_34_ = var2->unknown_8_[arg0->unknown_34_];
    arg0->unknown_38_ = data_02114e50;
    arg0->unknown_3c_ = (unsigned int)((float)var2->unknown_c_[arg0->unknown_34_] / arg0->unknown_40_);
}
