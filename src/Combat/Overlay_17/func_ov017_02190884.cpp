#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Resource/GameResources.h"

struct Struct_02012de8;
struct Struct_02018300_3;
struct Struct_02033834;
struct Struct_0202c1a4;

struct Struct_ov017_02190884 {
    unsigned int unknown_0_;
};

struct Struct_ov017_02190884_2 {
    Object3D unknown_0_;
    char unknown_ac_[4];
    short unknown_b0_;
    char unknown_b2_[2];
    short unknown_b4_;
    short unknown_b6_;
    char unknown_b8_[0xc1 - 0xb8];
    unsigned char unknown_c1_0_ : 2;
    char unknown_c2_[0x130 - 0xc2];
    Struct_ov017_02190884* unknown_130_;
#if defined(jpn)
    char unknown_134_[0x2c6 - 0x134];
#else
    char unknown1_134_[0x2d2 - 0x134];
#endif
    unsigned char unknown_2d2_;
};

struct Struct_ov017_02190884_3 {
    char unknown_0_[3];
    unsigned char unknown_3_;
};

struct Struct_ov017_021d61dc {
    int unknown_0_[8];
};

extern "C" Struct_02012de8* func_020d6c00();
extern "C" int func_02046708(Struct_02012de8* arg0, unsigned int arg1);
extern "C" void func_020dc548(signed char arg0, signed char* arg1, signed char* arg2);
extern "C" int func_02039d7c(char* arg0);
extern "C" Struct_0202c1a4* func_0202ae18();
extern "C" GameObject* func_0200fee0(GameState* arg0, int arg1);
extern "C" char* func_02012fe4();
extern "C" int func_020981e4(int arg0, int arg1);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_020546a8(void* arg0);
extern "C" int func_ov017_02190818(int arg0);
extern "C" int func_02039888(void* arg0);
extern "C" int func_02039820(void* arg0);
extern "C" int func_02039828(void* arg0);
extern "C" int func_02010038(GameState* arg0, unsigned char* arg1);
extern "C" int func_020535c8(signed char* arg0);
extern "C" void func_020531f0(void* arg0);
extern "C" int func_02039874(void* arg0);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void func_020340f4(unsigned char* arg0);
extern "C" void func_02039858(unsigned char*, int);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" void func_02039d58(unsigned char* arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" void func_020340e4(unsigned char* arg0);
extern "C" void func_02039d24(unsigned char* arg0);
extern "C" void func_0203986c(unsigned char*, int);
extern "C" void func_02039880(unsigned char*, int);
extern "C" void func_020398a4(unsigned char* arg0);
extern "C" void func_02033874(Struct_02033834* arg0, int arg1);
extern "C" void func_0202006c(unsigned char* arg0, int arg1);

#if defined(jpn)
#define data_ov017_021d61dc data_ov017_021d662c
#endif
extern Struct_ov017_021d61dc data_ov017_021d61dc;

// USA: func_ov017_02190884
extern "C" ARM void func_ov017_02190884(int arg0, int* arg1, int* arg2, int arg3, int arg4, int arg5) {
    GameState* var0 = GameState::GetInstance();

    if (func_02046708(func_020d6c00(), 0x2000) != 0) {
        unsigned char* var1 = (unsigned char*)func_02010828(var0);
        int var2;
        for (var2 = 0; var2 < var1[0xf7c]; var2++) {
            arg1[var2] = (var1 + var2)[0xf78];
        }
        *arg2 = var1[0xf7c];
        return;
    }

    signed char var3;
    signed char var4[6];
    unsigned char var5[5];
    var3 = 0;
    func_020dc548((signed char)arg0, var4, &var3);
    for (int var6 = 0; var6 < var3; var6++) {
        GameObject* var7 = var0->GetPartyMemberByIndex(var4[var6]);
        if (var7 != NULL && func_02039d7c((char*)var7) != 0) {
            return;
        }
    }

    Struct_0202c1a4* var8 = func_0202ae18();
    GameResources* var9 = GetGameResources();
    if (var9 == NULL) {
        return;
    }
    Struct_ov017_02190884_2* var10 = (Struct_ov017_02190884_2*)func_0200fee0(var0, arg0);
    if (var10 == NULL) {
        return;
    }

    char* var11 = func_02012fe4();
    int var12 = 0;
    int var13;
    GameObject* var14;
    if (func_020981e4((int)((Zone3D*)var11)->unk_840, *(unsigned short*)var11)) {
        var12 = 1;
    }

    int var15[4];
    int var16[4];
    int var17 = 0;
    int var18 = 0;
    Struct_ov017_02190884_3* var19 = (Struct_ov017_02190884_3*)var9->unknown_ptr_3718;
    Struct_ov017_02190884_3* var20 = (Struct_ov017_02190884_3*)var9->unknown_ptr_array_371c[6];
    Struct_ov017_02190884_3* var21 = (Struct_ov017_02190884_3*)var9->unknown_ptr_array_3afc[13];
    if (!(var10->unknown_130_->unknown_0_ & 1)) {
        var15[var17++] = arg0;
    } else {
        var16[var18++] = arg0;
    }

    for (int var22 = 3; var22 >= 0; var22--) {
        Struct_ov017_02190884_2* var23 = (Struct_ov017_02190884_2*)func_0200ff58(var0, var22);
        if (var23 != NULL && arg0 == func_020546a8(var23)) {
            if (!(var23->unknown_130_->unknown_0_ & 1)) {
                var15[var17++] = var22;
            } else {
                var16[var18++] = var22;
            }
        }
    }

    Struct_ov017_021d61dc var24 = data_ov017_021d61dc;
    int* var25 = var15;
    for (int var26 = 0; var26 < var17; var26++, var25++) {
        Struct_ov017_02190884_2* var27 = (Struct_ov017_02190884_2*)func_0200ff58(var0, *var25);
        if (var27 != NULL) {
            var24.unknown_0_[var27->unknown_2d2_] = *var25;
        } else {
            var24.unknown_0_[0] = *var25;
        }
    }
    var25 = var16;
    for (int var28 = 0; var28 < var18; var28++, var25++) {
        Struct_ov017_02190884_2* var29 = (Struct_ov017_02190884_2*)func_0200ff58(var0, *var25);
        if (var29 != NULL) {
            var24.unknown_0_[var29->unknown_2d2_ + 4] = *var25;
        } else {
            var24.unknown_0_[4] = *var25;
        }
    }

    *arg2 = 0;
    var25 = var24.unknown_0_;
    for (int var30 = 0; var30 < 8; var30++, var25++) {
        if (*var25 >= 0) {
            arg1[(*arg2)++] = *var25;
        }
    }

    if (var12 != 0 && func_ov017_02190818(arg1[0])) {
        for (int var31 = 1; var31 < *arg2; var31++) {
            if (!func_ov017_02190818(arg1[var31])) {
                int var32 = arg1[var31];
                arg1[var31] = arg1[0];
                arg1[0] = var32;
                break;
            }
        }
    }

    func_02010828(var0);
    var0->GetProtagonist();
    int var33 = 1;
    GameObject* var34 = var0->GetPartyMemberByIndex(func_02039888(var10));
    if (var34 != NULL) {
        if (func_02039820(var34) == 0) {
            var33 = 0;
        } else {
            var33 = 1;
        }
        if (func_02039828(var34) != 0) {
            var33 = 1;
        }
    }

    if (var34 != NULL && arg1[0] != var34->obj3D_.unknown_4_) {
        GameObject* var35 = func_0200ff58(var0, arg0);
        int var36;
        if (arg0 == 0 || var35 != NULL) {
            var36 = func_02010038(var0, var5);
        } else {
            var5[0] = arg0;
            var36 = 1;
        }
        for (int var37 = 0; var37 < var36; var37++) {
            GameObject* var38 = var0->GetPartyMemberByIndex(var5[var37]);
            if (var38 != NULL && func_020535c8((signed char*)var38)) {
                func_020531f0(var38);
            }
        }
    }

    Vector3i var39[4];
    int var40[4];
    for (int var41 = 0; var41 < *arg2; var41++) {
        GameObject* var42 = var0->GetPartyMemberByIndex(arg1[var41]);
        if (var42 != NULL) {
            var39[func_02039874(var42)] = var42->obj3D_.position_;
            var40[func_02039874(var42)] = var42->obj3D_.rotation_.y;
        }
    }

    var13 = 0;
    if (arg1[0] != func_020100b0(var0)) {
        var13 = 1;
    }

    int var43;
    if (var10->unknown_c1_0_ & 2) {
        var43 = 1;
    } else {
        var43 = 0;
    }
    short var44 = 0;
    int var45 = 0;
    for (; var45 < *arg2; var45++) {
        Struct_ov017_02190884_2* var46 = (Struct_ov017_02190884_2*)var0->GetPartyMemberByIndex(arg1[var45]);
        var14 = var0->GetGameObjectByIndex(arg1[var45] * 0xc + 0x14);
        if (var46 == NULL) {
            continue;
        }
        func_020340f4((unsigned char*)var46);
        if (var45 == 0) {
            func_02039858((unsigned char*)var46, -1);
            var46->unknown_b6_ = 0x28;
            var46->unknown_b0_ = 0x324;
            if (arg4 != 0) {
                if (var33 != 0) {
                    func_020397c0(var46);
                    var46->unknown_0_.DisableFlag(0x1000000);
                } else {
                    func_020397cc((Struct_02018300_3*)var46, 1);
                }
            }
            func_02039d58((unsigned char*)var46);
            var46->unknown_0_.SetInheritedAlpha(0x1f);
            if (func_0202b7d8((int*)var8) && arg0 != func_0202c1a4(var8)) {
                func_020340e4((unsigned char*)var46);
            }
        } else {
            func_02039858((unsigned char*)var46, arg1[var44 - 1]);
            var46->unknown_b6_ = 0x66;
            var46->unknown_b0_ = 0x648;
            if (arg5 != 0) {
                func_02039d24((unsigned char*)var46);
            }
            if (arg4 != 0) {
                func_020397cc((Struct_02018300_3*)var46, 1);
            }
            var46->unknown_0_.EnableFlag(0x80);
        }
        func_0203986c((unsigned char*)var46, var45);
        var46->unknown_b4_ = 0x189;
        func_02039880((unsigned char*)var46, arg1[0]);
        if (arg3 != 0) {
            func_020398a4((unsigned char*)var46);
        }
        if (var20->unknown_3_ != 0) {
            if (var43 != 0) {
                var46->unknown_c1_0_ |= 2;
            } else {
                var46->unknown_c1_0_ &= ~2;
            }
        }
        if (var14 != NULL) {
            short var47 = var14->obj3D_.unknown_2_;
            if (var47 != 0x2347 && var47 != 0x2348 && var47 != 0x2349) {
                var44++;
            } else if (var12 != 0) {
                var46->unknown_0_.SetInheritedAlpha(0);
            } else {
                if (var46->unknown_0_.GetInheritedAlpha() == 0) {
                    func_02039d58((unsigned char*)var46);
                    var46->unknown_0_.SetInheritedAlpha(0x1f);
                }
                var44++;
            }
        } else {
            var44++;
        }
    }

    unsigned char var48 = *arg2;
    unsigned char var49 = arg1[*arg2 - 1];
    if (arg0 == 0 && var0->GetPartyMemberByIndex(0xce) != NULL) {
        Struct_ov017_02190884_2* var50 = (Struct_ov017_02190884_2*)var0->GetPartyMemberByIndex(0xce);
        if (var50 != NULL) {
            func_02039858((unsigned char*)var50, var49);
            var50->unknown_b6_ = 0x66;
            var50->unknown_b0_ = 0x648;
            func_02039d24((unsigned char*)var50);
            if (arg4 != 0) {
                func_020397cc((Struct_02018300_3*)var50, 1);
            }
            func_0203986c((unsigned char*)var50, var48);
            var50->unknown_b4_ = 0x189;
            func_02039880((unsigned char*)var50, arg1[0]);
            var50->unknown_0_.EnableFlag(0x80);
            if (arg3 != 0) {
                func_020398a4((unsigned char*)var50);
            }
        }
    }

    if (var19->unknown_3_ != 0 || var20->unknown_3_ != 0 || var21->unknown_3_ != 0) {
        var13 = 0;
    }
    if (var13 != 0) {
        for (int var51 = 0; var51 < *arg2; var51++) {
            GameObject* var52 = var0->GetPartyMemberByIndex(arg1[var51]);
            if (var52 != NULL) {
                var52->obj3D_.position_ = var39[var51];
                func_02033874((Struct_02033834*)var52, var40[var51]);
            }
        }
    }

    if (var9->unknown_ptr_36d0 != NULL) {
        func_0202006c((unsigned char*)var9->unknown_ptr_36d0, 1);
    }
}
