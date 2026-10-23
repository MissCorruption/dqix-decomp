#include <globaldefs.h>
#include "Graphics/itcm/VRAMStaging.h"

struct Struct_02040468;
struct Struct_0203f430_5 {
    char unknown_0_[0x1c];
    int unknown_1c_;
    void* unknown_20_;
    int unknown_24_;
};
extern "C" struct Struct_0203f430_5* func_02040468(struct Struct_02040468* arg0, int arg1);

struct Struct_0203f430_2 {
    char unknown_0_[0x10];
    unsigned int* unknown_10_;
};
extern "C" void* func_0203f1c8(unsigned char* arg0, unsigned int arg1);

struct Struct_0203f430_3 {
    char unknown_0_[8];
    unsigned int unknown_8_;
    void* unknown_c_;
};

struct Struct_0203f2b0_2;
struct Struct_0203f430_4 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    char unknown_6_[2];
    struct Struct_0203f430_3* unknown_8_;
    int unknown_c_;
    const void* unknown_10_;
};
extern "C" struct Struct_0203f430_4* func_0203f354(struct Struct_0203f2b0_2* arg0, unsigned int arg1);

void CleanInvalidateCacheRange(const void* where, unsigned int len);
int CancelVRAMStagingOperation(int value);
int StageMemoryToVRAM(VRAMSubregion subregion, const void* data, unsigned int offset,
    unsigned int length, bool highPriority, bool allocateStagingSpace);

struct Struct_0203f430 {
    struct Struct_02040468* unknown_0_;
    char unknown_4_[0x28 - 4];
    short unknown_28_;
    char unknown_2a_[0x30 - 0x2a];
    int unknown_30_;
    int unknown_34_;
    char unknown_38_[0x44 - 0x38];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
    char unknown_50_[0x58 - 0x50];
    short unknown_58_;
    short unknown_5a_;
};

// USA: func_0203f430
extern "C" ARM void func_0203f430(struct Struct_0203f430* arg0) {
    struct Struct_0203f430_5* var0 = func_02040468(arg0->unknown_0_, arg0->unknown_28_);
    if (var0 == 0) return;

    struct Struct_0203f430_2* var1 = (struct Struct_0203f430_2*)func_0203f1c8((unsigned char*)var0 + 0x10, arg0->unknown_30_);
    if (var1 == 0) return;

    unsigned int var2 = var1->unknown_10_[arg0->unknown_34_];
    struct Struct_0203f430_4* var3 = func_0203f354((struct Struct_0203f2b0_2*)((char*)var0 + 0x10), var2);
    if (var3 == 0 || var3->unknown_8_ == 0) return;

    struct Struct_0203f430_3* var4 = var3->unknown_8_;
    int var5;
    for (var5 = 0; var5 < var3->unknown_4_; var5++, var4++) {
        CleanInvalidateCacheRange(var4->unknown_c_, var4->unknown_8_);
    }

    CleanInvalidateCacheRange(var0->unknown_20_, var0->unknown_1c_ << 1);

    if (var3->unknown_4_ != 0) {
        CancelVRAMStagingOperation(arg0->unknown_58_);
        arg0->unknown_58_ = StageMemoryToVRAM(VRAMSubregion_TextureImage, var3->unknown_10_, arg0->unknown_4c_, var3->unknown_c_, false, false);
    }
    CancelVRAMStagingOperation(arg0->unknown_5a_);
    arg0->unknown_5a_ = StageMemoryToVRAM(VRAMSubregion_TexturePalette, var0->unknown_20_, var0->unknown_24_, var0->unknown_1c_ << 1, false, false);
    arg0->unknown_44_ = arg0->unknown_30_;
    arg0->unknown_48_ = arg0->unknown_34_;
}
