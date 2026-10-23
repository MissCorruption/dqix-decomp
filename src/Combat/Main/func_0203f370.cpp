#include <globaldefs.h>
#include "Graphics/itcm/VRAMStaging.h"

struct Struct_02040468;
struct Struct_0203f370_4 {
    char unknown_0_[0x10];
};
extern "C" struct Struct_0203f370_4* func_02040468(struct Struct_02040468* arg0, int arg1);

struct Struct_0203f370 {
    char unknown_0_[0x10];
    unsigned int* unknown_10_;
};
extern "C" void* func_0203f1c8(unsigned char* arg0, unsigned int arg1);

struct Struct_0203f2b0_2;
struct Struct_0203f370_2 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    char unknown_6_[2];
    void* unknown_8_;
    int unknown_c_;
    const void* unknown_10_;
};
extern "C" struct Struct_0203f370_2* func_0203f354(struct Struct_0203f2b0_2* arg0, unsigned int arg1);

int CancelVRAMStagingOperation(int value);
int StageMemoryToVRAM(VRAMSubregion subregion, const void* data, unsigned int offset,
    unsigned int length, bool highPriority, bool allocateStagingSpace);

struct Struct_0203f370_3 {
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
};

// USA: func_0203f370
extern "C" ARM void func_0203f370(struct Struct_0203f370_3* arg0) {
    if (arg0->unknown_34_ == arg0->unknown_48_ && arg0->unknown_30_ == arg0->unknown_44_) return;

    struct Struct_0203f370_4* var0 = func_02040468(arg0->unknown_0_, arg0->unknown_28_);
    if (var0 == 0) return;

    struct Struct_0203f370* var1 = (struct Struct_0203f370*)func_0203f1c8((unsigned char*)var0 + 0x10, arg0->unknown_30_);
    if (var1 == 0) return;

    unsigned int var2 = var1->unknown_10_[arg0->unknown_34_];
    struct Struct_0203f370_2* var3 = func_0203f354((struct Struct_0203f2b0_2*)((char*)var0 + 0x10), var2);
    if (var3 == 0 || var3->unknown_8_ == 0 || var3->unknown_4_ == 0) return;

    CancelVRAMStagingOperation(arg0->unknown_58_);
    arg0->unknown_58_ = StageMemoryToVRAM(VRAMSubregion_TextureImage, var3->unknown_10_, arg0->unknown_4c_, var3->unknown_c_, false, false);
    arg0->unknown_44_ = arg0->unknown_30_;
    arg0->unknown_48_ = arg0->unknown_34_;
}
