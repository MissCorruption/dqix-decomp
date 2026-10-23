#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void func_02010774(char* arg0, int arg1);
extern "C" void func_020107a8(char* arg0, int arg1);
extern "C" void func_020107dc(char* arg0, int arg1);
extern "C" void func_02010810(char* arg0, int arg1);
struct Struct_020a99d0_3;
extern "C" void func_020a99d0(struct Struct_020a99d0_3* arg0, struct Struct_020a99d0_3* arg1);

struct Struct_020a9a50 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[0x342 - 0x10];
    unsigned char unknown_342_;
};

// USA: func_020a9a50
extern "C" ARM int func_020a9a50(Struct_020a9a50* arg0, char* arg1, int arg2) {
    char* var0 = (char*)GameState::GetInstance();
    func_02010774(var0, arg0->unknown_0_);
    func_020107a8(var0, arg0->unknown_4_);
    func_020107dc(var0, arg0->unknown_8_);
    func_02010810(var0, arg0->unknown_c_);
    if (arg2 != 0) {
        memcpy(arg1, (char*)arg0 + 0x10, 0x8c);
        memcpy(arg1 + 0x8c, (char*)arg0 + 0x9c, 0x15f);
        memcpy(arg1 + 0x2c0, (char*)arg0 + 0x2d0, 0xc);
        memcpy(arg1 + 0x2cc, (char*)arg0 + 0x2dc, 0x66);
        *(unsigned char*)(arg1 + 0x332) = arg0->unknown_342_;
    } else {
        func_020a99d0((struct Struct_020a99d0_3*)arg1, (struct Struct_020a99d0_3*)((char*)arg0 + 0x10));
    }
    return 1;
}
