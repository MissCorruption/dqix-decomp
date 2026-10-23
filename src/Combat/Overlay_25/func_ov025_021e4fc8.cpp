#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e4fc8_12 = 0x4 };
#else
enum { Enum_ov025_021e4fc8_12 = 0xc };
#endif

#include "GameState/GameState.h"

extern "C" void* func_02057924(void);
extern "C" void* func_02058658(void* arg0, int arg1);
extern "C" void* func_ov025_021e8cf0(char* arg0, int arg1);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" void func_02059cc8(unsigned char* arg0);
extern int data_ov025_021ef988;

struct Struct_ov025_021e4fc8 { char unknown_0_[8]; unsigned char unknown_8_; };

// USA: func_ov025_021e4fc8
extern "C" ARM int func_ov025_021e4fc8(struct Struct_ov025_021e4fc8* arg0) {
    void* var0 = func_ov025_021e8cf0(*(char**)((char*)&data_ov025_021ef988 + Enum_ov025_021e4fc8_12), arg0->unknown_8_);
    if (var0) {
        GameState* var1 = GameState::GetInstance();
        func_0200fd48(var1, *(int*)var0);
        void* var2 = func_02057924();
        void* var3 = func_02058658(var2, *(int*)var0);
        if (var3) {
            func_02059cc8((unsigned char*)var3);
        }
    }
    return 1;
}
