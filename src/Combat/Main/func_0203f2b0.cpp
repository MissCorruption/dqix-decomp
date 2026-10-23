#include <globaldefs.h>

struct Struct_0203f008_2;
struct Struct_02040468;
extern "C" struct Struct_0203f008_2* func_02040468(struct Struct_02040468* arg0, int arg1);

extern "C" void* func_0203f1c8(unsigned char* arg0, unsigned int arg1);

struct Struct_0203f2b0 {
    char unknown_0_[0x10];
    unsigned int* unknown_10_;
};

struct Struct_0203f2b0_2;
struct Struct_0203f2b0_3 {
    char unknown_0_[8];
    unsigned int unknown_8_;
    void* unknown_c_;
};
struct Struct_0203f2b0_4 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    char unknown_6_[2];
    struct Struct_0203f2b0_3* unknown_8_;
};
extern "C" struct Struct_0203f2b0_4* func_0203f354(struct Struct_0203f2b0_2* arg0, unsigned int arg1);

void CleanInvalidateCacheRange(const void* where, unsigned int len);

struct Struct_0203f2b0_5 {
    struct Struct_02040468* unknown_0_;
    char unknown_4_[0x28 - 4];
    short unknown_28_;
    char unknown_2a_[0x30 - 0x2a];
    int unknown_30_;
    int unknown_34_;
    char unknown_38_[0x44 - 0x38];
    int unknown_44_;
    int unknown_48_;
};

// USA: func_0203f2b0
extern "C" ARM void func_0203f2b0(struct Struct_0203f2b0_5* arg0) {
    int var0 = arg0->unknown_28_;
    if (var0 < 0) return;
    if (arg0->unknown_34_ == arg0->unknown_48_ && arg0->unknown_30_ == arg0->unknown_44_) return;

    struct Struct_0203f008_2* var1 = func_02040468(arg0->unknown_0_, var0);
    if (var1 == 0) return;

    struct Struct_0203f2b0* var2 = (struct Struct_0203f2b0*)func_0203f1c8((unsigned char*)var1 + 0x10, arg0->unknown_30_);
    if (var2 == 0) return;

    unsigned int var3 = var2->unknown_10_[arg0->unknown_34_];
    struct Struct_0203f2b0_4* var4 = func_0203f354((struct Struct_0203f2b0_2*)((char*)var1 + 0x10), var3);
    if (var4 == 0 || var4->unknown_8_ == 0) return;

    struct Struct_0203f2b0_3* var5 = var4->unknown_8_;
    int var6;
    for (var6 = 0; var6 < var4->unknown_4_; var6++, var5++) {
        CleanInvalidateCacheRange(var5->unknown_c_, var5->unknown_8_);
    }
}
