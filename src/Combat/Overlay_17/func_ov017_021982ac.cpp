#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021982ac_108 = 0x8c };
#else
enum { Enum_ov017_021982ac_108 = 0x6c };
#endif
#include "GameState/GameState.h"

struct Struct_020a2908;
struct Struct_020a28e0;

extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);
extern "C" int func_020100f8(char* arg0);
extern "C" int func_020a2cc4(unsigned char* arg0);
extern "C" void func_020a2cd8(unsigned char* arg0, int arg1);
extern "C" void func_020a2908(unsigned char* arg0, struct Struct_020a2908* arg1);
extern "C" void func_020a296c(unsigned char* arg0, struct Struct_020a2908* arg1);
extern "C" void func_020a28d0(unsigned char* arg0);
extern "C" void func_020a28c4(unsigned char* arg0);
extern "C" void func_020a28e0(struct Struct_020a28e0* arg0);
extern "C" void func_020a298c(unsigned char* arg0);

extern "C" void* func_02012fe4(void);

struct Struct_ov017_021982ac_2 {
    char unknown_0_[0x2c];
    unsigned char unknown_2c_0_ : 7;
    unsigned char unknown_2c_7_ : 1;
    char unknown_2d_[3];
    unsigned char unknown_30_[0x2c];
    unsigned char unknown_5c_[0x14];
    struct Struct_ov017_021982ac_2* unknown_70_;
};

struct Struct_ov017_021982ac {
    unsigned int unknown_0_[3];
};

extern "C" int func_02094b9c(struct Struct_ov017_021982ac_2* arg0, struct Struct_ov017_021982ac* arg1);
extern "C" void func_020a28dc(void* arg0, int arg1, void* arg2, void* arg3);

// USA: func_ov017_021982ac
extern "C" ARM void func_ov017_021982ac(void) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02012fe4();
    GameObject* var2 = var0->GetUnknownGameObject();
    struct Struct_ov017_021982ac var3 = *(struct Struct_ov017_021982ac*)((char*)var2 + 0x44);
    struct Struct_ov017_021982ac_2* var4;
    unsigned char* var5;
    int var6;

    var4 = (struct Struct_ov017_021982ac_2*)func_0201e838((unsigned char*)var1 + Enum_ov017_021982ac_108, 4);
    var5 = (unsigned char*)func_020100f8((char*)var0);
    if (var5 == 0) {
        return;
    }

    var6 = 0;
    while (var4 != 0) {
        if (func_02094b9c(var4, &var3)) {
            int var7 = var4->unknown_2c_0_;
            if (var7 == 4) {
                if (func_020a2cc4(var5)) {
                    func_020a2cd8(var5, 0);
                }
                func_020a2908(var5, (struct Struct_020a2908*)var4->unknown_30_);
                var6 = 1;
            } else if (var7 == 5) {
                func_020a296c(var5, (struct Struct_020a2908*)var4->unknown_30_);
                var6 = 1;
            } else {
                func_020a28dc(var5, var7, var4->unknown_30_, var4->unknown_5c_);
            }
            if (!var4->unknown_2c_7_) {
                func_020a28d0(var5);
            }
            break;
        }
        var4 = var4->unknown_70_;
    }

    if (var4 == 0) {
        func_020a28c4(var5);
        func_020a28e0((struct Struct_020a28e0*)var5);
    }
    if (!var6) {
        func_020a298c(var5);
    }
}
