#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020e385c {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
};
struct Struct_020e3814 {
    int unknown_0_;
    unsigned char unknown_4_, unknown_5_, unknown_6_;
};
struct Struct_0202b2f0;

extern "C" struct Struct_020e385c* func_020e385c(struct Struct_020e385c* arg0, int arg1, int arg2);
extern "C" struct Struct_020e3814* func_020e38a0(struct Struct_020e3814* arg0);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(struct Struct_0202b2f0* arg0);
extern "C" void func_ov017_021cebcc(int, int, int);

// USA: func_020e392c
extern "C" ARM void func_020e392c(struct Struct_020e385c* arg0, int arg1, int arg2) {
    if (func_0202c540((struct Struct_0202b2f0*)func_0202ae18())) return;
    if (func_020e385c(arg0, arg1, arg2) != NULL) return;
    struct Struct_020e3814* var0 = func_020e38a0((struct Struct_020e3814*)arg0);
    if (var0 == NULL) return;
    GameState::GetInstance();
    var0->unknown_4_ = arg1 & 0xff;
    var0->unknown_0_ = arg2;
    func_ov017_021cebcc(3, arg1 & 0xff, arg2);
}
