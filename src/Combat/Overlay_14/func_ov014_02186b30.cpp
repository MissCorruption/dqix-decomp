#if defined(jpn)
#define R(j,u) (j)
#define func_ov008_021889f8 func_ov008_0218973c
#define data_ov005_0215cd20 data_ov005_0215e100
#define data_ov014_021894b8 data_ov014_0218a2f8
#define data_ov015_02193cfc data_ov015_0219482c
#define data_ov015_02194078 data_ov015_02194bb8
#define data_ov015_02194129 data_ov015_02194c69
#define func_ov008_02188730 func_ov008_02189444
#define func_ov014_02185c90 func_ov014_02186d00
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

extern "C" void func_020972c8(int* arg0);
extern "C" void func_ov014_021845ec(void* arg0);

struct Struct_ov014_02186b30 {
    char unknown_0_[0xa4];
    int unknown_a4_;
    char unknown_a8_[0xb4 - 0xa8];
    SafeAllocator* unknown_b4_;
    char unknown_b8_[0x168 - 0xb8];
    int unknown_168_;
};

static inline void inline_020dbf70(int& arg0) {
    BackgroundLoader::GetInstance()->RemoveTask(arg0);
    arg0 = -1;
}

// USA: func_ov014_02186b30
extern "C" ARM void func_ov014_02186b30(struct Struct_ov014_02186b30* arg0) {
    if (arg0->unknown_168_ >= 0) {
        inline_020dbf70(arg0->unknown_168_);
    }
    Struct_0208cb08* var0 = func_02094a00();
    func_02094b40(var0);
    func_02094ab0(var0);
    func_020972c8(&arg0->unknown_a4_);
    func_ov014_021845ec(arg0);
    if (arg0->unknown_b4_ == 0) {
        return;
    }
    int var1;
    for (var1 = 0; var1 < 5; var1++) {
        if (arg0->unknown_b4_[var1].GetSignedAllocator()) {
            arg0->unknown_b4_[var1].Destroy();
        }
    }
}
