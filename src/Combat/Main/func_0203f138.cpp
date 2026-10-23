#include <globaldefs.h>

struct Struct_02040468;

struct Struct_0203f138_3 {
    char unknown_0_[0x28];
    int unknown_28_;
};

struct Struct_0203f138 {
    char unknown_0_[0xc];
    unsigned int* unknown_c_;
};

extern "C" struct Struct_0203f138_3* func_02040468(struct Struct_02040468* arg0, int arg1);
extern "C" void* func_0203f1c8(unsigned char* arg0, unsigned int arg1);
extern int data_02114e50;

struct Struct_0203f138_2 {
    struct Struct_02040468* unknown_0_;
    char unknown_4_[0x28 - 4];
    short unknown_28_;
    char unknown_2a_[0x30 - 0x2a];
    int unknown_30_;
    int unknown_34_;
    int unknown_38_;
    unsigned int unknown_3c_;
};

// USA: func_0203f138
extern "C" ARM void func_0203f138(struct Struct_0203f138_2* arg0, int arg1) {
    struct Struct_0203f138_3* var0;
    struct Struct_0203f138* var1;

    if (arg0->unknown_28_ < 0) {
        return;
    }
    var0 = func_02040468(arg0->unknown_0_, arg0->unknown_28_);
    if (var0 == 0 || var0->unknown_28_ == 0) {
        return;
    }
    if (arg1 < 0) {
        return;
    }
    if ((unsigned int)var0->unknown_28_ <= (unsigned int)arg1) {
        return;
    }
    if (arg0->unknown_30_ == arg1) {
        return;
    }
    var1 = (struct Struct_0203f138*)func_0203f1c8((unsigned char*)var0 + 0x10, arg1);
    if (var1 == 0) {
        return;
    }
    arg0->unknown_34_ = 0;
    arg0->unknown_30_ = arg1;
    arg0->unknown_38_ = data_02114e50;
    arg0->unknown_3c_ = var1->unknown_c_[arg0->unknown_34_];
}
