#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02171ba0_1820 = 0x618 };
enum { Enum_ov003_02171ba0_1836 = 0x628 };
enum { Enum_ov003_02171ba0_1828 = 0x620 };
#else
enum { Enum_ov003_02171ba0_1820 = 0x71c };
enum { Enum_ov003_02171ba0_1836 = 0x72c };
enum { Enum_ov003_02171ba0_1828 = 0x724 };
#endif

struct Struct_0202b2f0;
extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" int func_0202c578(struct Struct_0202b2f0*, int);
extern "C" void func_0202c21c(struct Struct_0202b2f0*, int);
extern "C" void func_0202b0f4(void*);

struct Struct_0202bad4;
struct Struct_0202bad4_2;
extern "C" Struct_0202bad4* func_0202bad4(struct Struct_0202bad4_2*, int);

extern "C" void func_ov003_02171e1c(void*, void*);
extern "C" int func_0205e488(void*);

struct Struct_ov003_02171ba0 {
    unsigned char unknown_0_;
    char unknown_1_[0x199 - 1];
    unsigned char unknown_199_;
    char unknown_19a_[Enum_ov003_02171ba0_1820 - 0x19a];
    int unknown_71c_;
    int unknown_720_;
    char unknown_724_[Enum_ov003_02171ba0_1836 - Enum_ov003_02171ba0_1828];
    unsigned int unknown_72c_;
};

// USA: func_ov003_02171ba0
extern "C" ARM void func_ov003_02171ba0(struct Struct_ov003_02171ba0* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0202b2f0* var1 = (struct Struct_0202b2f0*)func_0202ae18();
    void* var2 = func_0202ae24();

    if (func_0202c578(var1, arg0->unknown_199_)) {
        func_0202c21c(var1, arg0->unknown_199_);
    }
    arg0->unknown_72c_ += var0->GetEffectiveDeltaTime();
    if (arg0->unknown_72c_ > 0xbb8) {
        func_0202b0f4(var1);
        arg0->unknown_0_ = 0;
        return;
    }
    if (func_0202c578(var1, 0) && arg0->unknown_71c_ == 0) {
        func_0202bad4((struct Struct_0202bad4_2*)var1, arg0->unknown_199_);
        func_0202b0f4(var1);
        arg0->unknown_0_ = 0;
        return;
    }
    if (arg0->unknown_720_ != 0 && arg0->unknown_71c_ != 0) {
        struct Struct_0202bad4* var3 = func_0202bad4((struct Struct_0202bad4_2*)var1, arg0->unknown_199_);
        func_ov003_02171e1c(arg0, (char*)var3 + 0x68);
        func_0202b0f4(var1);
        arg0->unknown_0_ = 0;
    }
    if (func_0205e488(var2) != 0) {
        arg0->unknown_720_ = 1;
    }
}
