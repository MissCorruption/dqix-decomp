#include <globaldefs.h>
#include "Graphics/Vector.h"
#include "Resource/GameResources.h"
#include "World/Object3D.h"

struct Struct_ov017_0218dfd8 {
    Object3D unknown_0_;
#if defined(jpn)
    char unknown_ac_[0x180 - sizeof(Object3D)];
#else
    char unknown1_ac_[0x18c - sizeof(Object3D)];
#endif
    unsigned int unknown_18c_;
};

struct Struct_0201777c {
    char unknown_0_[0x2];
    short unknown_2_;
    char unknown_4_[0x20];
    Vector3fix unknown_24_;
    char unknown_30_[0x368 - 0x30];
};

struct Struct_02017098 {
#if defined(jpn)
    char unknown_0_[0x496];
#else
    char unknown1_0_[0x476];
#endif
    unsigned char unknown_476_;
    char unknown_477_[0x1];
    Struct_0201777c* unknown_478_;
};

struct Struct_ov017_0218dfd8_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_;
    unsigned char unknown_4_[4];
    Struct_0201777c* unknown_8_;
    int unknown_c_;
    short unknown_10_;
    unsigned short unknown_12_;
};

struct Struct_ov017_0218dfd8_3 {
    unsigned char unknown_0_[3];
    unsigned char unknown_3_;
};

extern "C" Struct_02017098* func_02012fe4(void);
extern "C" Struct_0201777c* func_0201777c(Struct_02017098* arg0, int arg1);
extern "C" unsigned int func_02039dcc(unsigned char* arg0);
struct Struct_ov009_0218aa28;
extern "C" short func_ov017_021a4754(Vector3fix*, int, Vector3fix*);
extern "C" int func_02046b08(void** arg0);
extern "C" int func_020535c8(signed char* arg0);
extern "C" void func_ov017_0219a674(unsigned char* arg0);
extern "C" void func_ov017_0219b33c(GameResources* arg0, Struct_ov017_0218dfd8_2* arg1);

// USA: func_ov017_0218dfd8
extern "C" ARM int func_ov017_0218dfd8(Struct_ov017_0218dfd8* arg0) {
    GameResources* var0 = GetGameResources();
    if (((Struct_ov017_0218dfd8_3*)var0->unknown_ptr_array_36fc[4])->unknown_3_ != 0) {
        return 0;
    }
    Vector3fix var1 = arg0->unknown_0_.position_;
    int var2 = 0;
    Struct_02017098* var3 = func_02012fe4();
    Struct_0201777c* var4 = func_0201777c(var3, 0);
    if (var4 == NULL) {
        return 0;
    }
    int var5 = arg0->unknown_0_.GetRadius() / 2 + 0x800;
    int var6 = 0x3244;
    int var7 = -1;
    Struct_0201777c* var8 = NULL;
    for (int var9 = 0; var9 < var3->unknown_476_; var4++, var9++) {
        if (var4->unknown_2_ != 0) {
            continue;
        }
        Vector3fix var10 = var1;
        Vector3fix var11 = var4->unknown_24_;
        if (fix32abs(var10.y - var11.y) >= 0x1000) {
            continue;
        }
        var10.y = 0;
        var11.y = 0;
        int var12 = Vector3fix_Distance(&var10, &var11);
        if (var12 < var5) {
            if (!func_02039dcc((unsigned char*)arg0)) {
                Vector3fix var13;
                Vector3fix_Subtract(&var10, &var11, &var13);
                Vector3fix_Normalize(&var13, &var13);
                Vector3fixMultiplyScalar(&var13, var5, &var13);
                Vector3fix_Add(&var11, &var13, &var10);
                var1.x = var10.x;
                var1.z = var10.z;
                arg0->unknown_0_.position_ = var1;
            }
            var2 = 1;
        }
        if (var12 < var5 + 0x400) {
            int var14 = func_ov017_021a4754(&var1, (short)arg0->unknown_0_.rotation_.y, &var11);
            if (var14 < var6) {
                var6 = var14;
                var7 = var9;
                var8 = var4;
            }
        }
    }
    void** var15 = (void**)var0->unknown_ptr_array_36fc[0];
    if (var8 != NULL && func_02046b08(var15) != 0 &&
        func_020535c8((signed char*)arg0) == 0 && !(arg0->unknown_18c_ & 0x40) && var6 < 0xc91) {
        Struct_ov017_0218dfd8_2 var16;
        func_ov017_0219a674((unsigned char*)&var16);
        var16.unknown_0_ = 5;
        var16.unknown_10_ = var6;
        var16.unknown_8_ = var8;
        var16.unknown_2_ = var7;
        func_ov017_0219b33c(var0, &var16);
    }
    return var2;
}
