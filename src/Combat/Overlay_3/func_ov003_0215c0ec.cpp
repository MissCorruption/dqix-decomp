#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215c0ec_2400=0x800 };
extern "C" void func_02042428(char*, int);
extern "C" void func_02042158(char*, int);
extern char data_ov003_0217e68e[];
extern char data_ov003_0217e696[];
#else
enum { Enum_ov003_0215c0ec_2400=0x960 };
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Input/Input.h"

struct Struct_ov003_0215c0ec {
    int unknown_0_;
    char unknown_4_[0x30 - 0x4];
    int unknown_30_;
};

struct Struct_ov003_0215c0ec_2 {
    char unknown_0_[0xf6c];
    int unknown_f6c_;
};

struct Struct_ov003_0215c0ec_3 {
    char unknown_0_[0x7c];
    char* unknown_7c_;
    char unknown_80_[0xf4 - 0x80];
    char unknown_f4_[0x1a4 - 0xf4];
    unsigned char unknown_1a4_;
    char unknown_1a5_[0x582 - 0x1a5];
    unsigned char unknown_582_;
    unsigned char unknown_583_;
};

struct Struct_0205d5d0;
struct Struct_020465c0;

extern "C" void func_ov003_0215b6f0(struct Struct_ov003_0215c0ec_3* arg0, char* arg1, int arg2);
extern "C" void func_ov003_0215b964(struct Struct_ov003_0215c0ec_3* arg0, char* arg1, int arg2);
extern "C" void func_ov003_0215be70(struct Struct_ov003_0215c0ec_3* arg0, char* arg1, int arg2);
extern "C" int func_020421a0();
extern "C" void func_02046380(void* arg0);
extern "C" int func_020e51cc(int arg0);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2);

// USA: func_ov003_0215c0ec
extern "C" ARM void func_ov003_0215c0ec(struct Struct_ov003_0215c0ec_3* arg0) {
    if (arg0->unknown_582_ != 0) {
        int var0 = 0;
        if (arg0->unknown_582_ == 2 && g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) {
            struct Struct_ov003_0215c0ec* var1 = (struct Struct_ov003_0215c0ec*)((char*)arg0->unknown_f4_ + 4);
            if (!var0 && var1->unknown_30_ < 0) {
                return;
            }
            var0 = 1;
        }
        memset(arg0->unknown_7c_, 0, Enum_ov003_0215c0ec_2400);
        unsigned char var2 = arg0->unknown_1a4_;
        switch (var2) {
        case 1:
            func_ov003_0215b6f0(arg0, arg0->unknown_7c_, var0);
            break;
        case 2:
            func_ov003_0215b964(arg0, arg0->unknown_7c_, var0);
            break;
        case 3:
            func_ov003_0215be70(arg0, arg0->unknown_7c_, var0);
            break;
        }
#if defined(jpn)
        func_0205d5d0((struct Struct_0205d5d0*)arg0->unknown_f4_, var2, (int)arg0->unknown_7c_, 1);
#else
        func_0205d5d0((struct Struct_0205d5d0*)arg0->unknown_f4_, var2, (int)arg0->unknown_7c_, 1, 0);
#endif
    }
    if (arg0->unknown_583_ != 0) {
        GameState* var3 = GameState::GetInstance();
        int var4 = func_020421a0();
        memset(arg0->unknown_7c_, 0, Enum_ov003_0215c0ec_2400);
#if defined(jpn)
        func_02042428(arg0->unknown_7c_, 8);
        func_02042058(arg0->unknown_7c_, data_ov003_0217e68e);
        func_02042158(arg0->unknown_7c_, 2);
        func_02042058(arg0->unknown_7c_, data_ov003_0217e696);
#else
        func_02042058(arg0->unknown_7c_, (const char*)func_020e51cc(0x3f1));
#endif
        func_02046380((void*)var4);
        func_020465c0((struct Struct_020465c0*)var4, 0,
                          ((struct Struct_ov003_0215c0ec_2*)func_02010828(var3))->unknown_f6c_);
        func_020465f0((unsigned char*)var4, 0, 7);
        func_020465d8((unsigned char*)var4, 0, 1);
#if defined(jpn)
        func_0205d5d0((struct Struct_0205d5d0*)arg0->unknown_f4_, 0, (int)arg0->unknown_7c_, 1);
#else
        func_0205d5d0((struct Struct_0205d5d0*)arg0->unknown_f4_, 0, (int)arg0->unknown_7c_, 1, 0);
#endif
        arg0->unknown_583_ = 0;
    }
}
