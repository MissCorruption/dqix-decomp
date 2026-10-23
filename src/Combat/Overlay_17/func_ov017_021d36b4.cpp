#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_0202c1a4;

struct Struct_ov017_021d36b4 {
    char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
    Vector3s unknown_8_;
};

struct Struct_ov017_021d36b4_2 {
    unsigned short unknown_0_;
    Vector3s unknown_2_;
};

extern "C" void* func_020120a0(char* arg0, unsigned int arg1);
extern "C" int func_0202c508(struct Struct_0202c1a4* arg0);
extern "C" void func_ov017_021d360c(int arg0, unsigned char arg1, int arg2, Vector3s arg3);
extern "C" GameObject* func_0200ffe0(GameState* arg0, int arg1);
extern "C" void func_02034044(unsigned char* arg0, int arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" unsigned char func_02039d7c(char* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

// USA: func_ov017_021d36b4
extern "C" ARM void func_ov017_021d36b4(int arg0, struct Struct_ov017_021d36b4* arg1, GameState* arg2, int arg3,
                                        struct Struct_0202c1a4* arg4) {
    struct Struct_ov017_021d36b4_2* var0 = (struct Struct_ov017_021d36b4_2*)func_020120a0((char*)arg2, arg1->unknown_5_);
    if (var0 == 0) return;

    if (arg1->unknown_4_ == 0) {
        if (func_0202c508(arg4)) {
            var0->unknown_0_ = arg1->unknown_6_;
            Vector3fix16Copy(&var0->unknown_2_, &arg1->unknown_8_);
            func_ov017_021d360c(arg1->unknown_4_, arg1->unknown_5_, arg1->unknown_6_, arg1->unknown_8_);
        } else if (arg0 == 0) {
            var0->unknown_0_ = arg1->unknown_6_;
            Vector3fix16Copy(&var0->unknown_2_, &arg1->unknown_8_);
        }
    } else if (arg1->unknown_4_ == 1) {
        int var1 = arg1->unknown_6_ <= 3;
        if (!var1) {
            GameObject* var2 = func_0200ffe0(arg2, arg1->unknown_6_ - 4);
            if (var2 == 0) return;
            arg1->unknown_6_ = var2->obj3D_.unknown_4_;
        }
        GameObject* var3 = arg2->GetMaybeWanderingMonsterByIndex(arg1->unknown_6_);
        GameObject* var4 = arg2->GetPartyMemberByIndex(arg1->unknown_6_);
        if (var3 == 0) return;

        if (func_0202c508(arg4)) {
            if (var0->unknown_0_ == 0) return;
            int var5 = 0;
            if (var3->obj3D_.unknown_4_ >= 0 && var3->obj3D_.unknown_4_ <= 3) var5 = 1;
            if (!var5) {
                func_02034044((unsigned char*)var3, 5000);
                if (var4 != 0) func_020397c0(var4);
            }
            var0->unknown_0_ = 0;
            func_ov017_021d360c(arg1->unknown_4_, arg1->unknown_5_, arg1->unknown_6_, arg1->unknown_8_);
        } else if (arg0 == 0) {
            short var6;
            int var7 = 0;
            var6 = var3->obj3D_.unknown_4_;
            if (var6 >= 0 && var6 <= 3) var7 = 1;
            if (var7) {
                if (var6 == func_0202c1a4(arg4) && var4 != 0 && func_02039d7c((char*)var4) == 0) {
                    func_02034044((unsigned char*)var3, 5000);
                    if (var4 != 0) func_020397c0(var4);
                }
            } else {
                func_02034044((unsigned char*)var3, 5000);
                if (var4 != 0) func_020397c0(var4);
            }
            var0->unknown_0_ = 0;
        }
    }
}
