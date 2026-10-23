#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov002_0215a658 {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 20;
    unsigned int unknown_a_4_ : 1;
    unsigned int unknown_a_5_ : 11;
};
struct Struct_0201099c_10;
struct Struct_02083994;
struct Struct_0207cf30_4;

extern "C" struct Struct_ov002_0215a658* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_02083994(struct Struct_02083994* arg0, int arg1);
extern "C" int func_020a095c(struct Struct_0207cf30_4* arg0, int arg1, int arg2);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215b2c8(char* arg0);

// USA: func_ov002_0215a658
#if defined(jpn)
extern "C" ARM void func_ov002_0215a658(char* arg0, int arg1) {
    int var0;
    char* var1;
    GameState* var2 = GameState::GetInstance();
    void* var3 = func_02010828(var2);
    for (int var4 = 0; var4 < *(int*)(arg0 + 0x1afc); var4++) {
        int var5 = *(int*)(arg0 + var4 * 4 + 0x1b00);
        if (arg1 == var5 || arg1 == 4) {
            GameObject* var6 = func_0200ff1c(var2, var5);
            if (var6 != NULL) {
                char* var7 = (char*)func_02053c6c((unsigned char*)var6);
                int var8;
                unsigned char var9 = 0;
                for (var8 = 0; var8 < 8; var8++) {
                    var0 = var8 * 2;
                    var1 = var7 + 0x454;
                    if (*(short*)(var1 + var0) > 0) {
                        struct Struct_ov002_0215a658* var10 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + 0x750), *(short*)(var1 + var0));
                        if (var10->unknown_a_4_) {
                            short var11 = *(short*)(var1 + var0);
                            *(short*)(var1 + var0) = -1;
                            *(short*)(var7 + var9++ * 2 + 0x454) = var11;
                        } else {
                            if (*(short*)(var1 + var0) == 0x570a) {
                                if (func_02083994((struct Struct_02083994*)var7, 0x570a) == 1) {
                                    *(char*)(*(char**)((char*)var6 + 0x130) + 8) = 0;
                                    func_ov017_021c9e00(var6->obj3D_.unknown_4_, 0, 0, 1);
                                }
                            }
                            func_020a095c((struct Struct_0207cf30_4*)var3, *(short*)(var1 + var0), 1);
                            *(short*)(var1 + var0) = -1;
                        }
                    }
                }
            }
        }
    }
}
#else
extern "C" ARM void func_ov002_0215a658(char* arg0, int arg1) {
    int var12;
    char* var13;
    GameState* var14 = GameState::GetInstance();
    void* var15 = func_02010828(var14);
    for (int var16 = 0; var16 < *(int*)(arg0 + 0x1c38); var16++) {
        int var17 = *(int*)(arg0 + var16 * 4 + 0x1c3c);
        if (arg1 == var17 || arg1 == 4) {
            GameObject* var18 = func_0200ff1c(var14, var17);
            if (var18 != NULL) {
                char* var19 = (char*)func_02053c6c((unsigned char*)var18);
                int var20;
                unsigned char var21 = 0;
                for (var20 = 0; var20 < 8; var20++) {
                    var12 = var20 * 2;
                    var13 = var19 + 0x454;
                    if (*(short*)(var13 + var12) > 0) {
                        struct Struct_ov002_0215a658* var22 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + 0x7ec), *(short*)(var13 + var12));
                        if (var22->unknown_a_4_) {
                            short var23 = *(short*)(var13 + var12);
                            *(short*)(var13 + var12) = -1;
                            *(short*)(var19 + var21++ * 2 + 0x454) = var23;
                        } else {
                            if (*(short*)(var13 + var12) == 0x570a) {
                                if (func_02083994((struct Struct_02083994*)var19, 0x570a) == 1) {
                                    *(char*)(*(char**)((char*)var18 + 0x130) + 8) = 0;
                                    func_ov017_021c9e00(var18->obj3D_.unknown_4_, 0, 0, 1);
                                }
                            }
                            func_020a095c((struct Struct_0207cf30_4*)var15, *(short*)(var13 + var12), 1);
                            *(short*)(var13 + var12) = -1;
                        }
                    }
                }
            }
        }
    }
    func_ov002_0215b2c8(arg0);
}
#endif
