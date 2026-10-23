#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Cache.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" extern int LoadToMainObjStandardPalette(int arg0, int arg1, unsigned int arg2);
extern "C" extern int LoadToSubObjStandardPalette(int arg0, int arg1, unsigned int arg2);

struct Struct_020e1674 {
    char unknown_0_[0x3e];
    unsigned char unknown_3e_;
};
struct Struct_020e1674_2 {
    char unknown_0_[4];
    struct Struct_020e1674* unknown_4_;
};
extern "C" void func_020e1674(struct Struct_020e1674_2* arg0, int arg1, int arg2);

// USA: func_020e16f4
extern "C" ARM void func_020e16f4(struct Struct_020e1674_2* arg0) {
    int var0;

    if (arg0->unknown_4_ == NULL) return;
    var0 = *(int*)(func_0200fb8c((int*)GameState::GetInstance()) + 0x2c);
    if (var0 == 0) return;
    CleanInvalidateCacheRange((void*)(var0 + 0xc), 0x20);
    if (arg0->unknown_4_->unknown_3e_ == 0) {
        LoadToMainObjStandardPalette(var0 + 0xc, 0x1c0, 0x20);
    } else {
        LoadToSubObjStandardPalette(var0 + 0xc, 0x1c0, 0x20);
    }
    CleanCacheRange((void*)(var0 + 0xc), 0x20);
    func_020e1674(arg0, 9, 0);
    func_020e1674(arg0, 0xb, 0);
}
