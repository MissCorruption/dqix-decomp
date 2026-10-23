#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021716f8_1828 = 0x620 };
enum { Enum_ov003_021716f8_1572 = 0x624 };
enum { Enum_ov003_021716f8_1576 = 0x628 };
#else
enum { Enum_ov003_021716f8_1828 = 0x724 };
enum { Enum_ov003_021716f8_1832 = 0x728 };
enum { Enum_ov003_021716f8_1836 = 0x72c };
#endif

#if defined(jpn)
extern "C" void func_ov003_021714f0(void*);
#endif
#include "GameState/GameState.h"

struct Struct_ov003_021714f0;
extern "C" void func_ov003_02172518(struct Struct_ov003_021714f0* arg0, int arg1);
extern "C" void func_0202ae18(void);
extern "C" void func_0202b0f4(void);

struct Struct_ov003_021716f8 {
    char unknown_0_[0x34c];
    int unknown_34c_;
    char unknown_350_[Enum_ov003_021716f8_1828 - 0x350];
    int unknown_724_;
    char unknown_728_[4];
    unsigned int unknown_72c_;
};

// USA: func_ov003_021716f8
extern "C" ARM void func_ov003_021716f8(struct Struct_ov003_021716f8* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    if (arg0->unknown_724_ != 0) {
#if defined(jpn)
        func_ov003_021714f0(arg0);
#else
        int var1 = ((unsigned int)arg0->unknown_34c_ >> 31) ? 1 : 0;
        func_ov003_02172518((struct Struct_ov003_021714f0*)arg0, var1);
#endif
        var0[0] = 3;
    }

    arg0->unknown_72c_ += GameState::GetInstance()->GetEffectiveDeltaTime();
    if (arg0->unknown_72c_ <= 0xbb8) return;

    func_0202ae18();
    func_0202b0f4();
    var0[0] = 4;
}
