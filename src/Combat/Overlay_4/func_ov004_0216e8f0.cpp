#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov004_0216e8f0 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
};

struct Struct_ov004_0216b7bc;
extern "C" void func_ov011_02184ad8(struct Struct_ov004_0216b7bc* arg0);
extern "C" void func_02012028(void* arg0, unsigned char arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov004_0216e8f0* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov024_021f6f10(void* arg0);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#endif
static inline int inline_ov004_0216e8f0(void* arg0) {
#if defined(jpn)
    return func_ov023_021f6f10(arg0);
#else
    return func_ov024_021f6f10(arg0);
#endif
}

extern unsigned char data_ov004_02171034[];

// USA: func_ov004_0216e8f0
extern "C" ARM int func_ov004_0216e8f0(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_0216e8f0_10 = 0x8, Enum_ov004_0216e8f0_3 = 5 };
#else
    enum { Enum_ov004_0216e8f0_10 = 0xa, Enum_ov004_0216e8f0_3 = 3 };
#endif
    void* var0 = func_ov011_021849c8(arg0);
    if (var0) {
        Struct_ov004_0216e8f0* var1 = func_ov023_021f6880(var0, *(unsigned short*)(data_ov004_02171034 + Enum_ov004_0216e8f0_10));
        if (var1) {
            var1->unknown_c_ &= ~0x10;
        }
    }
    func_ov011_02184ad8((struct Struct_ov004_0216b7bc*)arg0);
    GameState* var2 = GameState::GetInstance();
    if (data_ov004_02171034[Enum_ov004_0216e8f0_3] != 6) {
        Struct_ov004_0216e8f0* var3 = func_ov023_021f6880(var0, 1);
        if (var3 && inline_ov004_0216e8f0(var3) == 0xb) {
            var3->unknown_c_ &= ~0x8;
            func_02012028(var2, 1);
        }
    }
    return 0;
}
