#if defined(jpn)
enum { Enum_ov017_0218d0ec_1788 = 0x4ec, Enum_ov017_0218d0ec_1816 = 0x508 };
#else
enum { Enum_ov017_0218d0ec_1788 = 0x6fc, Enum_ov017_0218d0ec_1816 = 0x718 };
#endif

#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void* func_02012fe4(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);
extern "C" unsigned char func_0200fb9c(char* arg0);
extern "C" int func_0201201c(void* arg0);

struct Struct_ov017_0218d0ec_3;

extern "C" void func_ov017_021cdaa0(void);
extern "C" int func_ov017_021b8b54(void* arg0);

struct Struct_ov017_0218d0ec_4 { unsigned char unknown_0_[0x94]; float unknown_94_; int unknown_98_; };

struct Struct_ov017_0218d0ec { unsigned char unknown_0_[8]; unsigned char* unknown_8_; };
struct Struct_ov017_0218d0ec_2 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };

// USA: func_ov017_0218d0ec
extern "C" ARM void func_ov017_0218d0ec(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_0218d0ec* var1 = (Struct_ov017_0218d0ec*)func_02012fe4();
    void* var2 = func_0202ae18();

    if (func_02046b24(*(struct Struct_02015438***)(arg0 + 0x3000 + Enum_ov017_0218d0ec_1788)) == 3) return;
    if (func_0200fb9c((char*)var0) == 6) return;
    if (func_0201201c(var0) == 5) return;

    Struct_ov017_0218d0ec_2* var3 = (Struct_ov017_0218d0ec_2*)(var1->unknown_8_ + 0xc);
    unsigned int var4 = var3->unknown_0_0_;
    int var5 = 1;
    if (var4 != 0 && var4 != 7) var5 = 0;

    int var6 = var0->GetTimeOfDay();
    if (var5 != 0) {
        ((GameState*)((struct Struct_ov017_0218d0ec_3*)var0))->AdvanceDayTimer();
    }

    int var7 = var0->GetTimeOfDay();
    if (func_0202c508(var2) != 0 && var6 != var7) {
        func_ov017_021cdaa0();
    }

    if (func_02046b24(*(struct Struct_02015438***)(arg0 + 0x3000 + Enum_ov017_0218d0ec_1788)) == 0xa) {
        if (func_ov017_021b8b54(*(void**)(arg0 + 0x3000 + Enum_ov017_0218d0ec_1816)) != 0) return;
    }
    if (func_02046b24(*(struct Struct_02015438***)(arg0 + 0x3000 + Enum_ov017_0218d0ec_1788)) == 4) return;
    if (func_02046b24(*(struct Struct_02015438***)(arg0 + 0x3000 + Enum_ov017_0218d0ec_1788)) == 0x16) return;

    Struct_ov017_0218d0ec_4* var8 = (Struct_ov017_0218d0ec_4*)LightingManager::GetInstance();
    int var9 = var8->unknown_98_;
    if (var9 != var0->GetTimeOfDay()) {
        if (var0->GetTimeOfDay() == 1 || var0->GetTimeOfDay() == 0) {
            void* var10 = func_0205ec34();
            func_0206df6c(var10, (unsigned char*)var10 + 0x8c, 0x1140, 1);
        }
    }

    var8->unknown_94_ = var0->GetDayTimer();
    var8->unknown_98_ = var0->GetTimeOfDay();
}
