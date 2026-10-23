#include <globaldefs.h>
#if defined(jpn)
extern "C" void func_020474a8(void*, int, int, char*);
#endif
#include "GameState/GameState.h"

extern "C" void* func_020421a0();
extern "C" void func_02046380(void* arg0);
struct Struct_020465c0;
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
struct Struct_02046574_2;
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" void func_02046608(void* arg0, int arg1, int arg2, char* arg3, int arg4, int arg5, int arg6);
extern "C" int func_02042058(char* arg0, const char* arg1);

struct Struct_ov003_0216abd8 {
    char unknown_0_[0xf68];
    int unknown_f68_;
};

struct Struct_ov003_0216abd8_2 {
    char unknown_0_[0x600];
    char unknown_600_[0x100];
};

struct Struct_ov003_0216abd8_3 {
    char unknown_0_[0x64];
    char unknown_64_[0x18];
    struct Struct_ov003_0216abd8_2* unknown_7c_;
};

// USA: func_ov003_0216abd8
extern "C" ARM void func_ov003_0216abd8(struct Struct_ov003_0216abd8_3* arg0, char* arg1) {
#if defined(jpn)
    const volatile struct Struct_ov003_0216abd8_3* var0 = arg0;
#else
    struct Struct_ov003_0216abd8_3* var0 = arg0;
#endif
    if (arg1 == NULL) {
        return;
    }
    GameState* var1 = GameState::GetInstance();
    void* var2 = func_020421a0();
    struct Struct_ov003_0216abd8* var3 = (struct Struct_ov003_0216abd8*)func_02010828(var1);
    struct Struct_ov003_0216abd8_2* var4 = var0->unknown_7c_;
    func_02046380(var2);
    if (var3->unknown_f68_ != 0) {
        func_020465c0((struct Struct_020465c0*)var2, 0, var3->unknown_f68_);
        func_020465f0((unsigned char*)var2, 0, 0);
        int var5 = func_020e0434((struct Struct_0201099c_3*)var0->unknown_64_, 0x443);
#if defined(jpn)
        func_020474a8(var2, 0xc, var5, var4->unknown_600_);
#else
#if defined(jpn)
        func_020474a8(var2, 0xc, fmt, var4->text);
#else
        func_02046608(var2, 0xc, var5, var4->unknown_600_, 0xe3, 0, 1);
#endif
#endif
        func_02042058(arg1, var4->unknown_600_);
    } else {
        char* var6 = (char*)var1->GetProtagonist()->baseStats_;
        func_02046574((struct Struct_02046574_2*)var2, 0, var6);
        int var7 = func_020e0434((struct Struct_0201099c_3*)var0->unknown_64_, 0x442);
#if defined(jpn)
        func_020474a8(var2, 0xc, var7, var4->unknown_600_);
#else
#if defined(jpn)
        func_020474a8(var2, 0xc, fmt, var4->text);
#else
        func_02046608(var2, 0xc, var7, var4->unknown_600_, 0xe3, 0, 1);
#endif
#endif
        func_02042058(arg1, var4->unknown_600_);
    }
}
