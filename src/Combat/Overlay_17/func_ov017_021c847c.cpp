#if defined(jpn)
enum { Enum_ov017_021c847c_2380 = 0x8b4 };
#else
enum { Enum_ov017_021c847c_2380 = 0x94c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
struct Struct_0202c508;
extern "C" int func_0202c508(struct Struct_0202c508* arg0);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c847c {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_ov017_021c847c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_[8];
    unsigned char unknown_c_[8];
};

// USA: func_ov017_021c847c
extern "C" ARM void func_ov017_021c847c(void) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    void* var2 = func_0202ae24();

    struct Struct_ov017_021c847c_2 var3;
    var3.unknown_0_ = 0x76;
    char* var4 = (char*)var3.unknown_4_;
    int var5;
    for (var5 = 0; var5 < 4; var5++) {
        var4[var5] = -1;
        *(var4 + var5 + 4) = -1;
    }

    if (func_0202c508((struct Struct_0202c508*)var1)) {
        int var6;
        for (var6 = 0; var6 < 4; var6++) {
            GameObject* var7 = func_0200ff58(var0, var6);
            if (var7 != NULL) {
                int var8 = func_02053c6c((unsigned char*)var7);
                if (var8 != 0) {
                    var4[var6] = (unsigned char)*(int*)(var8 + Enum_ov017_021c847c_2380);
                }
            }
        }
    }

    struct Struct_ov017_021c847c* var9 = (struct Struct_ov017_021c847c*)func_02010828(var0);
    int var10;
    for (var10 = 0; var10 < var9->unknown_f7c_; var10++) {
        unsigned char var11 = var9->unknown_f78_[var10];
        GameObject* var12 = func_0200ff1c(var0, var11);
        if (var12 != NULL) {
            int var13 = func_02053c6c((unsigned char*)var12);
            if (var13 != 0) {
                unsigned int var14 = *(unsigned int*)(var13 + 0x78);
                *(var4 + var11 + 4) = (unsigned char)((var14 << 1) >> 31);
            }
        }
    }

    func_0205e330(var2, &var3, 0);
}
