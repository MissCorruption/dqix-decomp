#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
enum { Enum_ov003_02173508_237 = 0xe9 };
enum { Enum_ov003_02173508_235 = 0xeb };
enum { Enum_ov003_02173508_240 = 0xec };
enum { Enum_ov003_02173508_268 = 0x11a };
enum { Enum_ov003_02173508_269 = 0x11b };
enum { Enum_ov003_02173508_292 = 0x130 };
#else
enum { Enum_ov003_02173508_237 = 0xed };
enum { Enum_ov003_02173508_239 = 0xef };
enum { Enum_ov003_02173508_240 = 0xf0 };
enum { Enum_ov003_02173508_268 = 0x10c };
enum { Enum_ov003_02173508_269 = 0x10d };
enum { Enum_ov003_02173508_292 = 0x124 };
#endif

extern "C" void func_020dc2bc(void);
struct Struct_02074b64;
extern "C" void func_02074b64(struct Struct_02074b64* arg0);

struct Struct_ov003_02173508 {
    char unknown_0_[Enum_ov003_02173508_237];
    unsigned char unknown_ed_;
    unsigned char unknown_ee_;
    unsigned char unknown_ef_;
    char unknown_f0_[Enum_ov003_02173508_268 - Enum_ov003_02173508_240];
    char unknown_10c_[1];
    char unknown_10d_[Enum_ov003_02173508_292 - Enum_ov003_02173508_269];
    int unknown_124_;
};

// USA: func_ov003_02173508
extern "C" ARM void func_ov003_02173508(Struct_ov003_02173508* arg0) {
    (int)GetGameResources();
    if (arg0->unknown_ef_ != 0) return;

    func_020dc2bc();
    func_02074b64((struct Struct_02074b64*)((char*)arg0 + Enum_ov003_02173508_268));

    volatile unsigned int* var0 = (volatile unsigned int*)0x4001000;
    arg0->unknown_124_ = (*var0 & 0x1f00) >> 8;
    *var0 = (*var0 & ~0x1f00) | 0x1300;

    volatile unsigned short* var1 = (volatile unsigned short*)((char*)var0 + 0x8);
    var1[0] = var1[0] & ~3;
    var1[1] = (var1[1] & ~3) | 1;
    var1[2] = (var1[2] & ~3) | 2;
    var1[3] = (var1[3] & ~3) | 3;

    var1[0] = (var1[0] & 0x43) | 0xe00;
    var1[1] = (var1[1] & 0x43) | 0xf00;

    arg0->unknown_ed_ = 1;
    arg0->unknown_ef_ = 0;
}
