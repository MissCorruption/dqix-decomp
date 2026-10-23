#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020675fc_2456 = 0x868, Enum_020675fc_288 = 0x7e, Enum_020675fc_90 = 0x5c };
#else
enum { Enum_020675fc_2456 = 0x998, Enum_020675fc_288 = 0x120, Enum_020675fc_90 = 0x5a };
#endif

#include <GameState/GameState.h>
#include <Combat/EntryGetterTypes.h>
#include "Resource/GameResources.h"

struct Struct_0203dce4_2;
struct Struct_0203de84_2;
struct Struct_02015ef4_2;
struct Struct_0203de84 { unsigned int unknown_0_[3]; };
struct Struct_02015ef4 { unsigned int unknown_0_[3]; };
union Struct_020675fc {
    Struct_0203de84 unknown_0_;
    Struct_02015ef4 unknown1_0_;
};
struct Struct_020675fc_2 {
    unsigned char unknown_0_[Enum_020675fc_2456];
    int unknown_998_;
    unsigned char unknown_99c_[0xe9c];
    int unknown_1838_;
    unsigned char unknown_183c_[Enum_020675fc_288];
    unsigned char unknown_195c_;
    unsigned char unknown_195d_[Enum_020675fc_90];
    unsigned char unknown_19b7_;
};
extern "C" Struct_0203dce4_2* func_0203cf4c();
extern "C" Struct_0203dce4* func_0203dce4(Struct_0203dce4_2*, int);
extern "C" void* func_020100bc(GameState*);
extern "C" void func_020406f8(Struct_0203de84*, Struct_0203de84_2*);
extern "C" int func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" void func_020473c8(Struct_02015ef4_2*, int);
extern unsigned char data_020e7e08[];

// USA: func_020675fc
extern "C" ARM void func_020675fc(Struct_020675fc_2* arg0) {
    if (!arg0->unknown_998_) return;
    Struct_0203dce4* var0 = func_0203dce4(func_0203cf4c(), arg0->unknown_1838_);
    if (var0 && arg0->unknown_19b7_) {
        GameResources* var1 = GetGameResources();
        void* var2 = func_020100bc(GameState::GetInstance());
        int var3;
        int var4;
        Struct_02015ef4 var5;
        Struct_020675fc var6;
        func_020406f8(&var6.unknown_0_, (Struct_0203de84_2*)var0);
        var5 = var6.unknown1_0_;
        func_0202ec84(var2, &var5, &var3, &var4);
        var3 -= 12;
        var4 -= 62;
        int var7 = var3 << 12;
        Struct_02012fa4* var8 = &var1->substruct_array_2b90[data_020e7e08[arg0->unknown_195c_]];
        int var9 = var4 << 12;
        var8->unknown_1c_[0] = var7;
        var8->unknown_1c_[1] = var9;
        var8->unknown_1c_[2] = 0;
        func_020473c8((Struct_02015ef4_2*)var8, 1);
    }
}
