#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#include "Resource/CharacterCreationUI.h"
#include "Graphics/SpriteAffineTransform.h"

struct Struct_0205a254_2 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[11];
    unsigned char unknown_15_;
    unsigned char unknown_16_[2];
};
struct Struct_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short unknown_ac_, unknown_ae_;
    unsigned char unknown_b0_[12];
    short unknown_bc_, unknown_be_;
    unsigned char unknown_c0_[4];
    unsigned char unknown_c4_;
    unsigned char unknown_c5_[0x1b];
};
struct Struct_0205d81c;
struct Struct_0205a330;
extern "C" void func_0205a42c(Struct_0205a254*, int, int);
extern "C" void func_0205a370(Struct_0205a254*, int);
extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254*, int);
extern "C" void func_020e27ec(Struct_0205a254*, int, short, short);
extern "C" void func_0205a330(Struct_0205a330*, int);
extern "C" void func_0205ae8c(void*);
extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c*, int);
extern "C" int func_0204c7e0(unsigned char*);

extern "C" ARM void func_ov023_021da9b4(Struct_ov009_021842a0* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (arg0->unknown_7d8_ != NULL) {
        signed char var1 = arg0->unknown_c58_;
        if (var1 >= 1 && var1 <= 8) {
            short var2 = (short)(((var1 - 1) << 4) + 0x2b);
            func_0205a42c(arg0->unknown_7e0_, 0, 0x78);
            func_0205a370(arg0->unknown_7e0_, 0);
            Struct_0205a254_2* var3 = func_0205a3d0(arg0->unknown_7e0_, 0);
            if (var3 != NULL) var3->unknown_15_ |= 8;
            unsigned int var4 = var0->GetTickCount();
            func_0205a330((Struct_0205a330*)arg0->unknown_7e0_, var4);
            func_020e27ec(arg0->unknown_7e0_, 0, 0x6c, var2);
            func_0205ae8c(arg0->unknown_7d8_);
        }
    }
    if (arg0->unknown_7e4_ == NULL) return;
    Struct_0205d0e0* var5 = func_0205d81c((Struct_0205d81c*)&arg0->unknown_1f8_[1], 1);
    if (var5 == NULL) return;
    if (!func_0204c7e0((unsigned char*)var5)) return;
    short var6 = (short)(var5->unknown_ac_ << 3);
    short var7 = (short)(var5->unknown_ae_ << 3);
    var6 = (short)(var6 + var5->unknown_bc_);
    var7 = (short)(var7 + var5->unknown_be_);
    func_0205a42c(arg0->unknown_7ec_, 0, 0x3f);
    func_0205a370(arg0->unknown_7ec_, 0);
    Struct_0205a254_2* var8 = func_0205a3d0(arg0->unknown_7ec_, 0);
    if (var8 != NULL) var8->unknown_15_ |= 8;
    unsigned int var9 = var0->GetTickCount();
    func_0205a330((Struct_0205a330*)arg0->unknown_7ec_, var9);
    func_020e27ec(arg0->unknown_7ec_, 0, (short)(var6 - 8), (short)(var7 - 2));
    func_0205ae8c(arg0->unknown_7e4_);
}
#else
struct Struct_02000c9c_8;
extern "C" ARM unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);

struct Struct_0205a254;
extern "C" void func_0205a42c(struct Struct_0205a254* arg0, int arg1, int arg2);
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
struct Struct_0205a254_2;
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" ARM void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);

struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);

extern "C" void func_0205ae8c(void* arg0);

struct Struct_0205d81c;
struct Struct_ov023_021da9b4 {
    char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xbc - 0xb0];
    short unknown_bc_;
    short unknown_be_;
};
extern "C" ARM struct Struct_ov023_021da9b4* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" ARM int func_0204c7e0(unsigned char* arg0);

// USA: func_ov023_021da9b4
extern "C" ARM void func_ov023_021da9b4(void* arg0) {
    GameState* var10 = GameState::GetInstance();

    if (*(void**)((char*)arg0 + 0x7d8) != 0) {
        signed char var11 = *(signed char*)((char*)arg0 + 0xc58);
        if (var11 >= 1 && var11 <= 8) {
            short var12 = 0x6c;
            short var13 = (short)(((var11 - 1) << 4) + 0x2b);
            GameState* var14 = GameState::GetInstance();
            int var15 = func_0200fb08((struct Struct_02000c9c_8*)var14);
            struct Struct_0205a254* var16 = *(struct Struct_0205a254**)((char*)arg0 + 0x7e0);
            if (var15 == 4) var12 = 0x64;
            func_0205a42c(var16, 0, 0x78);
            func_0205a370(var16, 0);
            struct Struct_0205a254_2* var17 = func_0205a3d0(var16, 0);
            if (var17 != NULL) {
                *(unsigned char*)((char*)var17 + 0x15) |= 8;
            }
            unsigned int var18 = var14->GetTickCount();
            func_0205a330((struct Struct_0205a330*)var16, var18);
            func_020e27ec(var16, 0, var12, var13);
            func_0205ae8c(*(void**)((char*)arg0 + 0x7d8));
        }
    }

    if (*(void**)((char*)arg0 + 0x7e4) == 0) {
        return;
    }
    struct Struct_ov023_021da9b4* var19 = func_0205d81c((struct Struct_0205d81c*)((char*)arg0 + 0x2b4), 1);
    if (var19 == 0) {
        return;
    }
    if (!func_0204c7e0((unsigned char*)var19)) {
        return;
    }
    short var20 = (short)(var19->unknown_ac_ << 3);
    short var21 = (short)(var19->unknown_ae_ << 3);
    var20 = (short)(var20 + var19->unknown_bc_);
    var21 = (short)(var21 + var19->unknown_be_);

    struct Struct_0205a254* var22 = *(struct Struct_0205a254**)((char*)arg0 + 0x7ec);
    func_0205a42c(var22, 0, 0x78);
    func_0205a370(var22, 0);
    struct Struct_0205a254_2* var23 = func_0205a3d0(var22, 0);
    if (var23 != NULL) {
        *(unsigned char*)((char*)var23 + 0x15) |= 8;
    }
    unsigned int var24 = var10->GetTickCount();
    func_0205a330((struct Struct_0205a330*)var22, var24);
    func_020e27ec(var22, 0, (short)(var20 - 8), (short)(var21 - 2));
    func_0205ae8c(*(void**)((char*)arg0 + 0x7e4));
}
#endif
