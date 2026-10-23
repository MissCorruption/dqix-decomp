#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02171af0_1836 = 0x628 };
#else
enum { Enum_ov003_02171af0_1836 = 0x72c };
#endif

#if defined(jpn)
extern "C" void func_ov003_021714f0(void*);
#endif
#include "GameState/GameState.h"

struct Struct_0202b2f0;
struct Struct_0202c1a4;
struct Struct_ov003_021714f0;

extern "C" void* func_0202ae18(void);
extern "C" void func_0202b0f4(void* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void func_0202c1e8(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c288(void* arg0);
extern "C" void func_ov003_02172518(struct Struct_ov003_021714f0* arg0, int arg1);

struct Struct_ov003_02171af0 {
    unsigned char unknown_0_;
    char unknown_1_[0x199 - 1];
    unsigned char unknown_199_;
    char unknown_19a_[0x1b1 - 0x19a];
    unsigned char unknown_1b1_0_ : 6;
    unsigned char unknown_1b1_6_ : 1;
    unsigned char unknown_1b1_7_ : 1;
    char unknown_1b2_[Enum_ov003_02171af0_1836 - 0x1b2];
    unsigned int unknown_72c_;
};

// USA: func_ov003_02171af0
extern "C" ARM void func_ov003_02171af0(struct Struct_ov003_02171af0* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();

    arg0->unknown_72c_ += var0->GetEffectiveDeltaTime();
    if (arg0->unknown_72c_ > 0xbb8) {
        func_0202b0f4(var1);
        arg0->unknown_72c_ = 0;
        arg0->unknown_0_ = 0;
    }

    if (func_0202c1a4((struct Struct_0202c1a4*)var1) <= 0) {
        return;
    }

    signed char var2 = func_0202c1a4((struct Struct_0202c1a4*)var1);
    func_0202c1e8((struct Struct_0202b2f0*)var1, var2);
    func_0202c1e8((struct Struct_0202b2f0*)var1, arg0->unknown_199_);
    func_0202c288(var1);

#if defined(jpn)
    func_ov003_021714f0(arg0);
#else
    int var3 = arg0->unknown_1b1_6_ ? 1 : 0;
    func_ov003_02172518((struct Struct_ov003_021714f0*)arg0, var3);
#endif
    arg0->unknown_0_ = 7;
}
