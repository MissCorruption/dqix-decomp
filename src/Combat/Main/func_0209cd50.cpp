#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0209cd50_10120 = 0x27c8, Enum_0209cd50_10118 = 0x27c6 };
#else
enum { Enum_0209cd50_10120 = 0x2788, Enum_0209cd50_10118 = 0x2786 };
#endif

#include "GameState/GameState.h"

extern "C" void* func_02012fe4(void);
extern "C" void* func_02011584(void* arg0);
extern "C" int _s32_div_f(int a, int b);
struct Struct_02095924_2;
struct Struct_02099950;
extern "C" struct Struct_02099950* func_02099950(struct Struct_02095924_2* arg0, int arg1);
extern "C" int func_0209caf0(int arg0);
extern "C" int func_0209cc3c(void* arg0, int arg1);

extern int data_02109be0;

struct Struct_0209cd50 {
    char unknown_0_[0xd];
    unsigned char unknown_d_0_ : 7;
    unsigned char : 1;
};

// USA: func_0209cd50
extern "C" ARM int func_0209cd50(int arg0) {
    int var0 = 0;
    GameState* var1 = GameState::GetInstance();
    struct Struct_02095924_2* var2 = (struct Struct_02095924_2*)func_02011584(var1);
    void* var3 = func_02012fe4();
    if ((_s32_div_f(arg0, 100) * 100) == 0x170c) {
        if (*(unsigned char*)((char*)var3 + Enum_0209cd50_10120) == 0) {
            if (*(unsigned short*)((char*)var3 + Enum_0209cd50_10118) == 0x76c) {
                arg0 = 0x76c;
            }
        }
    }
    struct Struct_02099950* var4 = func_02099950(var2, arg0);
    if (var4 != 0) {
        unsigned int var5 = ((struct Struct_0209cd50*)var4)->unknown_d_0_;
        var0 = func_0209caf0(var5);
    }
    int var6 = func_0209cc3c(&data_02109be0, arg0);
    if (var6 >= 0) {
        var0 = var6;
    }
    return var0;
}
