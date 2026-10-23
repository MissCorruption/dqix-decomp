#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

extern "C" int func_ov023_021e29d0(char* arg0);
extern "C" void func_ov023_021e2ce8(int arg0, void* arg1);
struct Struct_0204af14;
extern "C" void* func_0204af14(struct Struct_0204af14* arg0, unsigned int arg1);
extern "C" void func_020dc7e8(int arg0, int arg1);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern struct Struct_02108760 data_02108760;
extern "C" void func_ov005_021551d4(void* arg0);
extern "C" void func_ov005_021551fc(char* arg0, int arg1, int arg2);
typedef void (*Type_ov023_021e4c18)(char*, int, int);

struct Struct_ov023_021e4c18 {
    void* unknown_0_;
    char unknown_4_[0xc8 - 0x4];
    void* unknown_c8_;
    char unknown_cc_[0xd4 - 0xcc];
    char unknown_d4_[1];
#if defined(jpn)
    char unknown_d5_[0x130 - 0xd5];
#else
    char unknown1_d5_[0x134 - 0xd5];
#endif

    int unknown_134_;
    char unknown_138_[0x4e5 - 0x138];
    signed char unknown_4e5_;
    char unknown_4e6_[0x4e8 - 0x4e6];
    int unknown_4e8_;
    int unknown_4ec_[4];
    int unknown_4fc_;
#if defined(jpn)
    char unknown1_4fc_[0x56c - 0x4fc];
#else
    char unknown_500_[0x634 - 0x500];
#endif

    unsigned short unknown_634_;
};

// USA: func_ov023_021e4c18
extern "C" ARM void func_ov023_021e4c18(struct Struct_ov023_021e4c18* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e4c18_3716=0xe80, Enum_ov023_021e4c18_15820=0x3d44};
#else
 enum {Enum_ov023_021e4c18_3716=0xe84, Enum_ov023_021e4c18_15820=0x3dcc};
#endif
    unsigned short var0 = arg0->unknown_634_;
    if (var0 & 0x40) return;
    if (!(var0 & 0x80)) return;

    GameState* var1 = GameState::GetInstance();

    int var2 = -1;
    int var3;
    for (var3 = 0; var3 < 4; var3++) {
        if (arg0->unknown_4fc_ == arg0->unknown_4ec_[var3]) {
            var2 = var3;
            break;
        }
    }

    int var4 = 0;
    if (g_touchInput.pressed_ != 0) {
        if (func_ov023_021e29d0((char*)arg0 + 0xd4) == 0x21) var4 = 1;
    }
    if (!var4) {
        if (g_keyManager.TestKeysPressed(0x800) != 0) var4 = 1;
    }
    if (!var4) return;

    GameObject* var5;
    for (;;) {
        var2 = var2 + var4;
        if (var2 < 0) var2 = arg0->unknown_4e8_ - 1;
        if (var2 > arg0->unknown_4e8_ - 1) var2 = 0;
        var5 = var1->GetGameObjectByIndex(arg0->unknown_4ec_[var2]);
        if (var5 != 0) break;
    }

    if (arg0->unknown_4fc_ == arg0->unknown_4ec_[var2]) return;

    arg0->unknown_634_ |= 0x400;

    if (arg0->unknown_0_ != 0) {
        int var6 = arg0->unknown_4ec_[var2];
        signed char var7 = (signed char)var6;
        struct Struct_0204af14* var8 = (struct Struct_0204af14*)((char*)arg0->unknown_0_ + Enum_ov023_021e4c18_3716);
        if (var8 != 0) {
            if (func_0204af14(var8, 1) != 0) {
                func_020dc7e8(5, var7);
            }
        }
    }

#if defined(jpn)

#else
    func_ov023_021e2ce8(arg0->unknown_4ec_[var2], arg0->unknown_c8_);
#endif

    var5 = var1->GetGameObjectByIndex(arg0->unknown_4ec_[var2]);
    unsigned short var9 = var5->obj3D_.unknown_0_;
    if ((var9 & 0x1000) || (var9 & 0x800) || (var9 & 0x200)) {
        if (arg0->unknown_134_ > 0) return;

        arg0->unknown_4fc_ = arg0->unknown_4ec_[var2];
        arg0->unknown_634_ = arg0->unknown_634_ | 0x54;

        func_0205eaa0(&data_02108760, 1, 0);

        if (arg0->unknown_4e5_ != 3) return;
        if (arg0->unknown_0_ == 0) return;

        func_ov005_021551d4(arg0->unknown_0_);
        *(int*)((char*)arg0->unknown_0_ + Enum_ov023_021e4c18_15820) |= 0x200;
        ((Type_ov023_021e4c18)(void*)&func_ov005_021551fc)((char*)arg0->unknown_0_, arg0->unknown_4fc_, 1);
    }
}
