#if defined(jpn)
enum {Enum_ov025_021dce7c_3096=0xb94};
#else
enum {Enum_ov025_021dce7c_3096=0xc18};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov000_02167f10(void* arg0);
extern "C" void func_ov025_021def64(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0216dbf0(void* arg0, int* arg1, int arg2, int arg3);
extern "C" void func_0202ea10(unsigned char* arg0, int arg1, int arg2);

struct Struct_ov025_021dce7c {
    unsigned short unknown_0_;
};

// USA: func_ov025_021dce7c
extern "C" ARM int func_ov025_021dce7c(unsigned char* arg0, struct Struct_ov025_021dce7c* arg1, int arg2) {
    if (arg1) {
        GameState::GetInstance();
        if (arg1->unknown_0_ == 781 || arg1->unknown_0_ == 582) {
            int var0 = arg2;
            func_ov000_02167f10(arg0);
            func_ov025_021def64(arg0, arg1, 0x18);
            func_ov000_0216dbf0(arg0 + Enum_ov025_021dce7c_3096, &var0, 1, 1);
            func_0202ea10(arg0 + Enum_ov025_021dce7c_3096, 409, 2000);
            return 1;
        }
    }
    return 0;
}
