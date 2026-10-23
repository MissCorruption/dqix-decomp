#if defined(jpn)
enum { Enum_ov017_0219922c_1724 = 0x4ac, Enum_ov017_0219922c_13824 = 0x3400, Enum_ov017_0219922c_182 = 0xa6, Enum_ov017_0219922c_198 = 0xb6, Enum_ov017_0219922c_2852 = 0x904, Enum_ov017_0219922c_1788 = 0x4ec };
#else
enum { Enum_ov017_0219922c_1724 = 0x6bc, Enum_ov017_0219922c_13824 = 0x3600, Enum_ov017_0219922c_182 = 0xb6, Enum_ov017_0219922c_198 = 0xc6, Enum_ov017_0219922c_2852 = 0xb24, Enum_ov017_0219922c_1788 = 0x6fc };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);
extern "C" void func_ov017_021adc58(unsigned char* arg0);
extern "C" unsigned char func_020100b0(GameState* arg0);
int fix32ReduceAngle0To2Pi(int angle);
struct Vector3i;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_0219922c {
    char unknown_0_[0x20];
    int unknown_20_;
    char unknown_24_[0x34 - 0x24];
};

// USA: func_ov017_0219922c
extern "C" ARM void func_ov017_0219922c(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_0219922c_1724);
    int var2 = (var1[0x16] == 1);
    unsigned short var3 = *(unsigned short*)(arg0 + Enum_ov017_0219922c_13824 + Enum_ov017_0219922c_182);
    signed short var4 = *(signed short*)(arg0 + Enum_ov017_0219922c_13824 + Enum_ov017_0219922c_198);

    if (!var2) {
        void* var5 = func_0205ec34();
        struct Struct_ov017_0219922c var6;
        var6.unknown_20_ = *(unsigned short*)(var1 + 0x1c);
        if (func_020649b0(var5, 0x12, &var6)) {
            func_0206f81c(&var6);
        }
        return;
    }

    unsigned char* var7 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_0219922c_2852);
    func_ov017_021adc58(var7);

    var7 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_0219922c_2852);
    var7[0xa] = (unsigned char)var3;

    int var8 = func_020100b0(var0);
    var7 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_0219922c_2852);
    var7[8] = (unsigned char)var8;

    int var9 = var4 + 0x3244;
    int var10 = fix32ReduceAngle0To2Pi(var9);
    var7 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_0219922c_2852);
    *(unsigned short*)(var7 + 0x10) = (unsigned short)var10;

    var7 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_0219922c_2852);
    *(Vector3i*)((int*)(var7 + 0x14)) = *(Vector3i const*)((int*)var1);

    if (var1[0x17] == 2) {
        (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_0219922c_2852))[0x20] = 1;
    }

    unsigned char* var11 = arg0 + 0x3000;
    struct Struct_0201bdac_2* var12 = *(struct Struct_0201bdac_2**)(var11 + Enum_ov017_0219922c_1788);
    struct Struct_0201bdac* var13 = *(struct Struct_0201bdac**)(var11 + Enum_ov017_0219922c_2852);
    func_020469b4(var12, var13);
}
