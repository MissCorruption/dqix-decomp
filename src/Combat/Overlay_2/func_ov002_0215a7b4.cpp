#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201099c_9 { unsigned int unknown_0_[8]; };
struct Struct_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct Struct_0201099c_9* unknown_c_;
    unsigned char unknown_10_[4];
    unsigned char unknown_14_;
};
struct Struct_02061c04_22 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
struct Struct_02061c04_23 { short* unknown_0_; signed char* unknown_4_; short unknown_8_; };

extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" int func_020dddcc(void* arg0);
extern "C" void* func_02010828(GameState* arg0);
extern "C" int func_020a0a08(struct Struct_02061c04_23* arg0, int arg1, int arg2);
extern "C" int func_020ddcbc(int arg0, int arg1, struct Struct_0201099c_10* arg2, int arg3);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_0208386c(struct Struct_02061c04_22* arg0, int arg1);

#if defined(jpn)
#define CONTAINER_0215a7b4 0x750
#define DIRTY_0215a7b4 0x22a8
#else
#define CONTAINER_0215a7b4 0x7ec
#define DIRTY_0215a7b4 0x2478
#endif

// USA: func_ov002_0215a7b4
extern "C" ARM void func_ov002_0215a7b4(char* arg0, int arg1, int arg2, int arg3, unsigned char arg4) {
    GameState* var0 = GameState::GetInstance();
    if (arg1 == 4) {
        if (arg4 != 0) {
            struct Struct_0201099c_9* var1 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + CONTAINER_0215a7b4), arg2);
            if (var1 != 0) {
                func_020dddcc(var1);
            }
        } else {
            void* var2 = func_02010828(var0);
            func_020a0a08((struct Struct_02061c04_23*)var2, arg2, 1);
        }
        *(unsigned char*)(arg0 + DIRTY_0215a7b4) = 1;
        return;
    }
    if (arg4 != 0) {
        func_020ddcbc(arg1, arg3, (struct Struct_0201099c_10*)(arg0 + CONTAINER_0215a7b4), 0);
    } else {
        GameObject* var3 = func_0200ff1c(var0, arg1);
        if (var3 == 0) return;
        {
            int var4 = func_02053c6c((unsigned char*)var3);
            func_0208386c((struct Struct_02061c04_22*)var4, (signed char)arg3);
        }
    }
    *(unsigned char*)(arg0 + DIRTY_0215a7b4) = 1;
}
