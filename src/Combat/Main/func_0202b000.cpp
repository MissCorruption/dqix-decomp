#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0202b000_1342 = 0x753e - 0x6fc0 };
#else
enum { Enum_0202b000_1342 = 0x74fe - 0x6fc0 };
#endif
#include "GameState/GameState.h"
#include "NitroSDK/ProcessorContext.h"

struct Struct_0202b000 { unsigned char unknown_0_[6]; };
struct Struct_0202b000_2 {
    int unknown_0_;
    unsigned short unknown_4_;
    char unknown_6_[0x102c - 6];
    Struct_0202b000 unknown_102c_;
};
extern "C" void func_0202aec0(Struct_0202b000_2*);
extern "C" void func_020d8654();
extern "C" int func_020d4dd4();
extern "C" int func_0202d9e0();
extern "C" int func_020d472c(void*);
extern "C" void func_0202d688(int);
extern "C" int func_0202b1f4(Struct_0202b000_2*, int);
extern "C" void func_0202dd28();
extern "C" int func_020d5974(void*, int, int);
extern "C" void func_020d8694();
extern "C" void func_0202ae30(void*);

// USA: func_0202b000
extern "C" ARM unsigned char func_0202b000(Struct_0202b000_2* arg0) {
    func_0202aec0(arg0);
    func_020d8654();
    arg0->unknown_4_ = func_020d4dd4();
    int var0 = 0;
    while (!func_0202d9e0()) {
        var0++;
        if (var0 > 5000) break;
        SleepCurrentContext(1);
    }
    func_020d472c((void*)func_0202ae30);
    func_0202d688(0x785);
    arg0->unknown_0_ = 1;
    int var1 = func_0202b1f4(arg0, 1);
    if (var1) {
        func_0202dd28();
        func_0202b1f4(arg0, 1);
    }
    func_020d5974(0, 255, 235);
    GameState* var2 = GameState::GetInstance();
    Struct_0202b000 var3 = *(Struct_0202b000*)&var2->unk_6fc0[Enum_0202b000_1342];
    arg0->unknown_102c_ = var3;
    func_020d8694();
    return var1;
}
