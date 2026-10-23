#if defined(jpn)
enum { Enum_ov017_021b04e0_2384 = 0x8b8 };
#else
enum { Enum_ov017_021b04e0_2384 = 0x950 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_021b04e0 {
    char unknown_0_[0xa];
    unsigned char unknown_a_;
    char unknown_b_[0x21 - 0xb];
    unsigned char unknown_21_;
    unsigned char unknown_22_;
};

extern "C" void func_ov017_021d0b30(int arg0, int arg1, int arg2);
extern "C" void* func_ov017_021b0fe0(int arg0, int arg1);
extern "C" void func_ov017_021d1118(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_021d1014(int arg0, int arg1, int arg2);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void* func_0202ae24(void);
extern "C" int func_0205e488(void* arg0);

// USA: func_ov017_021b04e0
extern "C" ARM unsigned char func_ov017_021b04e0(struct Struct_ov017_021b04e0* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1 = arg0->unknown_21_;
    if (var1 == 0) {
        unsigned char* var2 = (unsigned char*)func_02010828(var0);
        unsigned char var3 = arg0->unknown_22_;
        if (var2[0xf7c] == var3) {
            func_ov017_021d0b30(4, 0, 0);
            return 0xb;
        }
        unsigned char var4 = (var2 + var3)[0xf78];
        arg0->unknown_22_ = var3 + 1;
        GameObject* var5 = func_0200ff1c(var0, var4);
        if (var5 == NULL) {
            return arg0->unknown_a_;
        }
        int var6 = func_02053c6c((unsigned char*)var5);
        int var7 = *(int*)((char*)var6 + Enum_ov017_021b04e0_2384) & 0xff;
        func_ov017_021b0fe0(var4, var7);
        func_ov017_021d1118(-1, 5, 1, 1);
        func_ov017_021d1014(-1, 1, 1);
        arg0->unknown_21_ = arg0->unknown_21_ + 1;
    } else if (var1 == 1) {
        void* var8 = func_0202ae24();
        if (func_0205e488(var8) != 0) {
            arg0->unknown_21_ = 0;
        }
    }
    return arg0->unknown_a_;
}
