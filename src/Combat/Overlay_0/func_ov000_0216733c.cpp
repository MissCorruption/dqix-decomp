#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define REGION_OFFSET_0 0x1a8
#define REGION_OFFSET_1 0x218
#define REGION_OFFSET_2 0xff0
#define REGION_OFFSET_3 0xff4
#define REGION_OFFSET_4 0xff1
#else
#define REGION_OFFSET_0 0x1bc
#define REGION_OFFSET_1 0x29c
#define REGION_OFFSET_2 0xe00
#define REGION_OFFSET_3 0xe04
#define REGION_OFFSET_4 0xe01
#endif


extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
extern "C" int func_020bb7cc(int arg0, int arg1, int arg2);

struct Struct_ov000_0216733c { unsigned int unknown_0_[2]; };
struct Struct_ov000_0216733c_2 {
    char unknown_0_[0x58];
    struct Struct_ov000_0216733c unknown_58_;
    struct Struct_ov000_0216733c unknown_60_;
};

// USA: func_ov000_0216733c
extern "C" ARM void func_ov000_0216733c(char* arg0) {
    (int)GetGameResources();
    struct Struct_ov000_0216733c_2* var0 = (struct Struct_ov000_0216733c_2*)(arg0 + REGION_OFFSET_0);
    var0->unknown_60_ = var0->unknown_58_;
    func_0207df90(arg0 + REGION_OFFSET_0);

    unsigned char var1 = *(unsigned char*)(*(char**)(arg0 + REGION_OFFSET_1) + 0x8000 + 0x1b0);
    int var2 = var1;
    int var3;
    if (var2 > 5) {
        var3 = 0x100;
        *(unsigned char*)(arg0 + 0x5000 + REGION_OFFSET_2) = 8;
    } else {
        *(unsigned char*)(arg0 + 0x5000 + REGION_OFFSET_2) = 5;
        var3 = 0x190;
    }

    int var4;
    for (var4 = 0; var4 < *(unsigned char*)(arg0 + 0x5000 + REGION_OFFSET_2); var4++) {
        *(int*)(arg0 + var4 * 4 + 0x5000 + REGION_OFFSET_3) = func_020bb7cc(var3, 0, 0);
    }

    func_0207dfac(arg0 + REGION_OFFSET_0);
    *(unsigned char*)(arg0 + 0x5000 + REGION_OFFSET_4) = 0;
}
