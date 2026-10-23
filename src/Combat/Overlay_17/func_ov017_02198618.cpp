#if defined(jpn)
enum {Enum_ov017_02198618_108=0x8c, Enum_ov017_02198618_132=0xc4, Enum_ov017_02198618_134=0xc6};
#else
enum {Enum_ov017_02198618_108=0x6c, Enum_ov017_02198618_132=0x84, Enum_ov017_02198618_134=0x86};
#endif
#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

struct Struct_0203402c {
    char unknown_0_[0xc4];
    unsigned short unknown_c4_0_ : 15;
    unsigned short unknown_c5_7_ : 1;
};

extern "C" int func_020535c8(signed char* arg0);
extern "C" int func_0203402c(struct Struct_0203402c* arg0);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);
extern "C" int func_02094b9c(void* arg0, void* arg1);
extern "C" void func_ov017_0219a674(unsigned char* arg0);
extern "C" void func_ov017_0219b33c(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov017_02198618 { unsigned int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_ov017_02198618_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[3];
    void* unknown_8_;
    unsigned char unknown_c_[4];
    unsigned short unknown_10_;
    unsigned char unknown_12_[2];
};

// USA: func_ov017_02198618
extern "C" ARM void func_ov017_02198618(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    if (var1 == NULL) return;
    if (func_020535c8((signed char*)var1) != 0) return;
    if (func_0203402c((struct Struct_0203402c*)var1) != 0) return;

    unsigned char* var2 = (unsigned char*)func_02012fe4();
    func_020100bc(var0);
    unsigned char* var3 = (unsigned char*)func_0201e838(var2 + Enum_ov017_02198618_108, 10);
    struct Struct_ov017_02198618 var4 = *(struct Struct_ov017_02198618*)((char*)var1 + 0x44);

    while (var3 != NULL) {
        if (func_02094b9c(var3, &var4) != 0) {
            unsigned short var5 = *(unsigned short*)(var3 + 0x2c);
            short var6 = *(short*)(var2 + 0x2700 + Enum_ov017_02198618_132);
            if (var5 == var6) {
                unsigned short var7 = *(unsigned short*)var2;
                unsigned short var8 = *(unsigned short*)(var2 + 0x2700 + Enum_ov017_02198618_134);
                if (var7 == var8) {
                    struct Struct_ov017_02198618_2 var9;
                    func_ov017_0219a674((unsigned char*)&var9);
                    var9.unknown_0_ = 0xb;
                    var9.unknown_8_ = var3;
                    var9.unknown_4_ = 1;
                    func_ov017_0219b33c(arg0, &var9, 1, 0xb);
                    return;
                }
            }
        }
        var3 = *(unsigned char**)(var3 + 0x70);
    }
}
