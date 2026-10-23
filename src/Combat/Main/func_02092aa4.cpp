#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

struct Struct_0201099c_14;
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);

struct Struct_02092aa4 {
    SafeAllocator unknown_0_;
    char unknown_14_[0x2c - 0x14];
    int unknown_2c_;
    short unknown_30_;
    short unknown_32_;
    unsigned char unknown_34_;
    unsigned char unknown_35_;
    unsigned char unknown_36_;
    unsigned char unknown_37_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
};

// USA: func_02092aa4
extern "C" ARM void func_02092aa4(Struct_02092aa4* arg0, int arg1) {
    arg0->unknown_0_.ResetAllocatorPointer();
    func_020dfc40((struct Struct_0201099c_14*)((char*)arg0 + 0x14));

    arg0->unknown_2c_ = -1;
    arg0->unknown_30_ = -1;
    arg0->unknown_32_ = 0;
    arg0->unknown_34_ = 0;
    arg0->unknown_35_ = 0;
    arg0->unknown_36_ = 0;
    arg0->unknown_37_ = 0;
    arg0->unknown_38_ = arg1;
    arg0->unknown_39_ = 0;
    arg0->unknown_3a_ = 0;
    arg0->unknown_3b_ = 0;

    unsigned char* var0 = (unsigned char*)func_02010828(GameState::GetInstance());
    unsigned char var1;
    for (var1 = 0; var1 < var0[0xf7c]; var1++) {
        unsigned char* var2 = var0 + var1;
        if (var2[0xf78] == 0) {
            arg0->unknown_37_ |= 1;
            return;
        }
    }
}
