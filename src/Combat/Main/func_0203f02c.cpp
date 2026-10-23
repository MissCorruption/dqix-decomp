#include <globaldefs.h>
#include "Graphics/itcm/VRAMStaging.h"

extern "C" int func_0204027c(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_020bb588(int arg0, int arg1, int arg2);

extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);

struct Struct_02040468;
struct Struct_0203f02c {
    char unknown_0_[0x1c];
    int unknown_1c_;
    void* unknown_20_;
    int unknown_24_;
    char unknown_28_[0xc];
    int unknown_34_;
};
extern "C" struct Struct_0203f02c* func_02040468(struct Struct_02040468* arg0, int arg1);

int CancelVRAMStagingOperation(int value);
int StageMemoryToVRAM(VRAMSubregion subregion, const void* data, unsigned int offset,
    unsigned int length, bool highPriority, bool allocateStagingSpace);

struct Struct_0203d028_14 {
    struct Struct_02040468* unknown_0_;
    char unknown_4_[0x24];
    short unknown_28_;
    char unknown_2a_[0x22];
    int unknown_4c_;
    char unknown_50_[0xa];
    short unknown_5a_;
};

// USA: func_0203f02c
extern "C" ARM void func_0203f02c(struct Struct_0203d028_14* arg0, int arg1, int arg2, char* arg3, int arg4, int arg5) {
    func_0207df90(arg3);

    int var0;
    if (arg4) {
        var0 = func_0204027c(arg0->unknown_0_, arg1, arg2, arg4, arg5);
    } else {
        var0 = func_0204027c(arg0->unknown_0_, arg1, arg2, 0, 0);
    }
    arg0->unknown_28_ = var0;

    struct Struct_0203f02c* var1 = func_02040468(arg0->unknown_0_, arg0->unknown_28_);
    if (var1 != NULL) {
        int var2 = func_020bb588(var1->unknown_34_, 0, 0);
        arg0->unknown_4c_ = ((unsigned int)var2 << 16) >> 13;
        CancelVRAMStagingOperation(arg0->unknown_5a_);
        arg0->unknown_5a_ = StageMemoryToVRAM(VRAMSubregion_TexturePalette, var1->unknown_20_, var1->unknown_24_, var1->unknown_1c_ << 1, false, false);
    }

    func_0207dfac(arg3);
}
