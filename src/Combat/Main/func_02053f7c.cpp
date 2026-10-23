#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02053f7c_178 = 0xa6 };
#else
enum { Enum_02053f7c_178 = 0xb2 };
#endif

#include "GameState/GameState.h"

struct Struct_02053f7c {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_02053f7c_2 {
    char unknown_0_[Enum_02053f7c_178];
    short unknown_b2_;
};

struct Struct_02053f7c_3 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x100 - 6];
    struct Struct_02053f7c_2 unknown_100_;
};

extern "C" void* func_02010828(GameState* arg0);

// USA: func_02053f7c
extern "C" ARM void func_02053f7c(Struct_02053f7c_3* arg0, unsigned short arg1, int arg2) {
    struct Struct_02053f7c* var0 = (struct Struct_02053f7c*)func_02010828(GameState::GetInstance());
    int var1 = 0;
    int var2;
    if (var0 != NULL) {
        for (var2 = 0; var2 < var0->unknown_f7c_; var2++) {
            unsigned char var3 = var0->unknown_f78_[var2];
            if (var3 == arg0->unknown_4_) {
                var1 = 1;
                break;
            }
        }
    }
    if (arg2 != 0 || var1 != 0) {
        arg0->unknown_100_.unknown_b2_ = arg1;
    }
}
