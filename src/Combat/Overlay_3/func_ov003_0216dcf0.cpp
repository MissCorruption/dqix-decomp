#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_0216dcf0_704 = 0x150 };
enum { Enum_ov003_0216dcf0_680 = 0x138 };
enum { Enum_ov003_0216dcf0_4716 = 0x10fc };
#else
enum { Enum_ov003_0216dcf0_704 = 0x2c0 };
enum { Enum_ov003_0216dcf0_680 = 0x2a8 };
enum { Enum_ov003_0216dcf0_4716 = 0x126c };
#endif

struct Struct_0205d0e0 {
    char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
};

struct Struct_0205d81c;
extern "C" struct Struct_0205d0e0* func_0205d8c4(struct Struct_0205d81c* arg0);
extern "C" int func_0204c7e0(unsigned char* arg0);

struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);

struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);

extern "C" void func_0205ae8c(void* arg0);

// USA: func_ov003_0216dcf0
extern "C" ARM void func_ov003_0216dcf0(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0205d0e0* var1 = func_0205d8c4(*(struct Struct_0205d81c**)(arg0 + 0x1000 + Enum_ov003_0216dcf0_704));
    if (var1 != 0 && func_0204c7e0((unsigned char*)var1) != 0) {
        short var2 = var1->unknown_ae_ << 3;
        short var3 = var1->unknown_ac_;
        short var4 = func_0205d794(*(struct Struct_0205c570**)(arg0 + 0x1000 + Enum_ov003_0216dcf0_704));
        short var5 = var2 + var4 * 12;
        struct Struct_0205a254* var6 = *(struct Struct_0205a254**)(arg0 + 0x1000 + Enum_ov003_0216dcf0_680);
        if (var6 == 0) return;
        func_0205a370(var6, 0);
        struct Struct_0205a254_2* var7 = func_0205a3d0(var6, 0);
        if (var7 != 0) {
            *(unsigned char*)((char*)var7 + 0x15) |= 8;
        }
        func_0205a330((struct Struct_0205a330*)var6, var0->GetTickCount());
        func_020e27ec(var6, 0, (short)(var3 * 8) - 4, var5 + 2);
        func_0205ae8c(arg0 + Enum_ov003_0216dcf0_4716);
        return;
    }

    struct Struct_0205a254* var8 = *(struct Struct_0205a254**)(arg0 + 0x1000 + Enum_ov003_0216dcf0_680);
    if (var8 == 0) return;
    struct Struct_0205a254_2* var9 = func_0205a3d0(var8, 0);
    if (var9 != 0) {
        *(unsigned char*)((char*)var9 + 0x15) &= ~8;
    }
}
