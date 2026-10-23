#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Resource/GameResources.h"
#include "NitroSDK/Graphics.h"
#include "World/ZoneLootableRecord.h"
#include "Resource/Brightness.h"

struct Struct_02015438;
struct Struct_0201730c;
struct Struct_02015ef4_2;
struct Struct_0203402c;
struct Struct_0203a46c;
struct Struct_02017098_3;
struct Struct_0202c1a4;
struct Struct_02015ef4;

struct Struct_ov017_0219ad84 { unsigned short unknown_0_; };
struct Struct_ov017_0219ad84_2 {
#if defined(jpn)
    char unknown_0_[0x868];
#else
    char unknown1_0_[0x998];
#endif
    unsigned int unknown_998_;
};
struct Struct_ov017_0219ad84_3 { char unknown_0_[2]; unsigned char unknown_2_; };
struct Struct_ov017_0219ad84_4 {
    Object3D unknown_0_;
#if defined(jpn)
    char unknown_ac_[0x1a6 - 0xac];
#else
    char unknown1_ac_[0x1b2 - 0xac];
#endif
    unsigned short unknown_1b2_;
};

extern "C" Struct_ov017_0219ad84* func_02012fe4();
extern "C" Struct_ov017_0219ad84_2* func_020421a0();
extern "C" int func_02046b24(Struct_02015438**);
extern "C" void func_0204724c(Struct_0201730c*);
extern "C" void func_020473c8(Struct_02015ef4_2*, int);
extern "C" unsigned char func_02039d7c(char*);
extern "C" int func_0203402c(Struct_0203402c*);
extern "C" void func_0203a46c(Struct_0203a46c*, int, int, int);
extern "C" void func_020478bc(Struct_02017098_3*, int);
extern "C" void func_02047554(Struct_02012fa4*, int, int);
extern "C" int func_020535c8(signed char*);
extern "C" int func_02046b08(void**);
extern "C" Struct_0202c1a4* func_0202ae18();
extern "C" int func_0202b7d8(int*);
extern "C" int func_0202c1a4(Struct_0202c1a4*);
extern "C" void* func_0200fd0c(GameState*);
extern "C" void func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" int func_ov017_0218d4ec(void*, int);

static inline Struct_02012fa4* inline_ov017_0219ad84(GameResources* arg0) {
    return *(Struct_02012fa4**)&arg0->unknown_35a8[0x88];
}
static inline unsigned char inline_ov017_0219ad84_2(void* arg0) {
    return ((Struct_ov017_0219ad84_3*)arg0)->unknown_2_;
}

// USA: func_ov017_0219ad84
// JPN: func_ov017_0219b924
extern "C" ARM void func_ov017_0219ad84(GameResources* arg0) {
    if (TestFlags04(arg0, 0x40)) return;
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_0219ad84* var1 = func_02012fe4();
    void* var2 = func_020100bc(var0);
    Struct_ov017_0219ad84_2* var3 = func_020421a0();
    Struct_ov017_0219ad84_3* var4 = (Struct_ov017_0219ad84_3*)func_0200fd0c(var0);
    GameObject* var5 = var0->GetUnknownGameObject();
    if (!var5) return;

    if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) == 4) {
        if (inline_ov017_0219ad84(arg0) == NULL || !inline_ov017_0219ad84(arg0)->unknown_84_0_) return;
        GXFIFO_MATRIX_PUSH = 0;
        if (inline_ov017_0219ad84(arg0) != &arg0->substruct_array_2b90[12] &&
            inline_ov017_0219ad84(arg0) != &arg0->substruct_array_2b90[13] &&
            inline_ov017_0219ad84(arg0) != &arg0->substruct_array_2b90[14]) {
            func_0204724c((Struct_0201730c*)inline_ov017_0219ad84(arg0));
            func_020473c8((Struct_02015ef4_2*)inline_ov017_0219ad84(arg0), 1);
        } else {
            func_020473c8((Struct_02015ef4_2*)inline_ov017_0219ad84(arg0), 1);
        }
        GXFIFO_MATRIX_POP = 1;
        return;
    }

    int var6 = 1;
    unsigned int var7 = 0;
    if (var3) var7 |= var3->unknown_998_;
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_36fc[5]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[10]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_371c[1]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[20]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[1]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[16]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[7]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[11]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[27]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[4]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[47]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[9]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[6]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[42]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[29]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[30]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[21]);
    var7 |= inline_ov017_0219ad84_2(arg0->unknown_ptr_array_3afc[43]);
    var7 |= func_02039d7c((char*)var5);
    int var8 = func_0203402c((Struct_0203402c*)var5);
    if (var7 | var8 | inline_ov017_0219ad84_2(var4)) var6 = 0;
    if (var6) {
        func_0203a46c((Struct_0203a46c*)&arg0->substruct_array_2b90[0], arg0->unknown_3634_[0] << 12, arg0->unknown_3646_[0] << 12, -0x1000);
        func_020478bc((Struct_02017098_3*)&arg0->substruct_array_2b90[0], 1);
        GXFIFO_MATRIX_PUSH = 0;
        func_02047554(&arg0->substruct_array_2b90[0], 0, 1);
        GXFIFO_MATRIX_POP = 1;
    }

    if (arg0->unknown_36b4_[1] != 0x12 && !func_020535c8((signed char*)var5) &&
        func_02046b08((void**)arg0->unknown_ptr_array_36fc[0])) {
        int var9 = 1;
        if (TestFlags04(arg0, 8) && arg0->unknown_36b4_[0] == 0) var9 = 0;
        if (arg0->unknown_36b4_[1] == 0x11) var9 = 0;
        if (var9) {
            int var10 = arg0->unknown_36b4_[1];
            Struct_02012fa4* var11 = arg0->substruct_array_2b90;
            GXFIFO_MATRIX_PUSH = 0;
            func_0204724c((Struct_0201730c*)&var11[var10]);
            func_020473c8((Struct_02015ef4_2*)&var11[var10], 1);
            GXFIFO_MATRIX_POP = 1;
        }
    }

    Struct_0202c1a4* var12 = func_0202ae18();
    if (!func_0202b7d8((int*)var12) || !var2) return;
    if (func_020535c8((signed char*)var5)) return;
    int var13 = func_0202c1a4(var12);
    int var14 = 0;
    for (int var15 = 0; var15 < 4; var15++) {
        if (var15 == var13) continue;
        Struct_ov017_0219ad84_4* var16 = (Struct_ov017_0219ad84_4*)func_0200ff1c(var0, var15);
        if (!var16) continue;
        if (!var16->unknown_0_.IsVisible()) continue;
        if (!var16->unknown_0_.GetInheritedAlpha()) continue;
        int var17 = 0;
        if (var16->unknown_0_.GetFlag(0x800000) && var16->unknown_0_.GetFlag(0x400)) var17 = 1;
        unsigned short var18 = var1->unknown_0_;
        unsigned short var19 = var16->unknown_0_.GetField06();
        if (var19 != var18 && !var17) continue;
        Vector3fix var20 = var16->unknown_0_.position_;
        var20.y += var16->unknown_0_.GetHeight();
        int var21, var22;
        func_0202ec84(var2, (Struct_02015ef4*)&var20, &var21, &var22);
        var21 -= 12;
        var22 -= 24;
        if (var16->unknown_0_.GetFlag(0x400)) {
            Struct_02012fa4* var23 = &arg0->unknown_3520;
            func_0203a46c((Struct_0203a46c*)var23, var21 << 12, var22 << 12, -0xa000);
            func_020478bc((Struct_02017098_3*)var23, 1);
            func_0204724c((Struct_0201730c*)var23);
            GXFIFO_MATRIX_PUSH = 0;
            func_020473c8((Struct_02015ef4_2*)var23, 1);
            var14++;
            GXFIFO_MATRIX_POP = 1;
            if (var14 >= 3) break;
        } else if (var16->unknown_1b2_) {
            Struct_02012fa4* var24 = (Struct_02012fa4*)arg0->unknown_35a8;
            func_0203a46c((Struct_0203a46c*)var24, var21 << 12, var22 << 12, -0xa000);
            GXFIFO_MATRIX_PUSH = 0;
            func_0204724c((Struct_0201730c*)var24);
            func_020473c8((Struct_02015ef4_2*)var24, 1);
            var14++;
            GXFIFO_MATRIX_POP = 1;
            if (var14 >= 3) break;
        } else if (func_ov017_0218d4ec(arg0, var16->unknown_0_.unknown_4_)) {
            Struct_02012fa4* var25 = &arg0->substruct_array_2b90[17];
            func_0203a46c((Struct_0203a46c*)var25, var21 << 12, var22 << 12, -0xa000);
            GXFIFO_MATRIX_PUSH = 0;
            func_0204724c((Struct_0201730c*)var25);
            func_020473c8((Struct_02015ef4_2*)var25, 1);
            GXFIFO_MATRIX_POP = 1;
        }
    }
}
