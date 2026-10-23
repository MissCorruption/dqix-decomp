#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/CopyRecord0200fbb4.h"
#include "Resource/GameResources.h"

struct Struct_02048260_2;
struct Struct_02010604_3;
struct Struct_02010604;
struct Struct_0201bdac_2;
struct Struct_0201bdac;

struct Struct_ov017_0219ff58 {
    short unknown_0_;
    char unknown_2_;
    char unknown_3_[4];
    char unknown_7_;
    char unknown_8_[8];
    int unknown_10_[3];
    short unknown_1c_;
    char unknown_1e_[0x70 - 0x1e];
};

struct Struct_ov017_0219ff58_2 {
    unsigned int unknown_0_;
};

struct Struct_ov017_0219ff58_3 {
    unsigned char unknown_0_[0x130];
    Struct_ov017_0219ff58_2* unknown_130_;
#if defined(jpn)
    unsigned char unknown_134_[0x180 - 0x134];
#else
    unsigned char unknown1_134_[0x18c - 0x134];
#endif
    unsigned int unknown_18c_;
};

extern "C" int func_02011b50(void* arg0, int arg1);
extern "C" void func_02011b3c(void* arg0, unsigned char arg1);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_02048150(void* arg0, int arg1, int arg2);
extern "C" int func_02048260(struct Struct_02048260_2* arg0);
extern "C" int func_020482bc(struct Struct_02010604_3* arg0);
extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);
extern "C" void func_02039858(unsigned char*, int);
extern "C" void func_0203986c(unsigned char* arg0, int arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_ov017_021cedf4(int arg0, int arg1, int arg2);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_020546a8(void* arg0);
extern "C" void func_02070378(char* arg0);
extern "C" void func_ov017_0219e310(unsigned char* arg0, int arg1);
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

// USA: func_ov017_0219ff58
extern "C" ARM int func_ov017_0219ff58(unsigned char* arg0, int arg1, int arg2, int arg3) {
#if defined(jpn)
 enum { Enum_ov017_0219ff58_1804=0x4fc, Enum_ov017_0219ff58_1788=0x4ec };
#else
 enum { Enum_ov017_0219ff58_1804=0x70c, Enum_ov017_0219ff58_1788=0x6fc };
#endif
    GameState* var0 = GameState::GetInstance();
    if (func_02011b50(var0, 1) != 0) {
        if (arg3 != 0) {
            GetGameResources();
            signed char var1 = func_020100a8(var0);
            Struct_ov017_0219ff58_3* var2 = (Struct_ov017_0219ff58_3*)var0->GetPartyMemberByIndex(var1);
            if (var2 != NULL) {
                func_02048150(var2, 0, 1);
                func_02048260((struct Struct_02048260_2*)var2);
                func_020482bc((struct Struct_02010604_3*)var2);
                var2->unknown_18c_ &= ~1;
                func_02033b88((struct Struct_02010604*)var2, 0);
                if (var2->unknown_130_->unknown_0_ & 1) {
                    func_02039858((unsigned char*)var2, -1);
                    func_0203986c((unsigned char*)var2, 0);
                    func_020397c0(var2);
                }
                func_ov017_021cedf4(var1, 1, 0);
                func_ov017_021c9e00(var1, 0, 0, 1);
            }
            for (signed char var3 = 0; var3 < 4; var3++) {
                Struct_ov017_0219ff58_3* var4 = (Struct_ov017_0219ff58_3*)func_0200ff58(var0, var3);
                if (var4 != NULL && var1 == func_020546a8(var4)) {
                    func_02048150(var4, 0, 1);
                    func_02048260((struct Struct_02048260_2*)var4);
                    func_020482bc((struct Struct_02010604_3*)var4);
                    var4->unknown_18c_ &= ~1;
                    func_02033b88((struct Struct_02010604*)var4, 0);
                    func_ov017_021cedf4(var3, 1, 0);
                    func_ov017_021c9e00(var3, 0, 0, 1);
                }
            }
        }

        if (arg1 != 0) func_02011b3c(var0, 2);
        if (arg2 != 0) func_02011b3c(var0, 4);
        if (arg3 != 0) func_02011b3c(var0, 8);

        Struct_ov017_0219ff58 var5;
        func_02070378((char*)&var5);
        var5.unknown_0_ = 0x10d0;
        var5.unknown_2_ = arg3 == 0;
        var5.unknown_7_ = 1;
        var5.unknown_10_[0] = -0xf5;
        var5.unknown_10_[1] = 0x1199;
        var5.unknown_10_[2] = -0x30a3;
        var5.unknown_1c_ = 0x323d;
        func_0200fba4(var0, &var5);

        if (arg2 != 0) {
            func_ov017_0219e310(*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_0219ff58_1804), 0);
            func_020469b4(*(struct Struct_0201bdac_2**)(arg0 + 0x3000 + Enum_ov017_0219ff58_1788),
                             *(struct Struct_0201bdac**)(arg0 + 0x3000 + Enum_ov017_0219ff58_1804));
        }
        return 1;
    }
    return 0;
}
