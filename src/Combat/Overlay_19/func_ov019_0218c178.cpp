#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov019_0218c178_76 = 0x3c, Enum_ov019_0218c178_84 = 0x44 };
#else
enum { Enum_ov019_0218c178_76 = 0x4c, Enum_ov019_0218c178_84 = 0x54 };
#endif

#include "GameState/GameState.h"

struct Struct_0205a254;
struct Struct_0205a330;

struct Struct_0205c96c {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0xd];
    unsigned char unknown_15_;
};

struct Struct_ov019_0218c178 {
    char unknown_0_[Enum_ov019_0218c178_76];
    int unknown_4c_;
    char unknown_50_[0x40];
    struct Struct_0205a254* unknown_90_;
};

extern "C" void func_0205a370(struct Struct_0205a254*, int);
extern "C" struct Struct_0205c96c* func_0205a3d0(struct Struct_0205a254*, int);
extern "C" void func_0205a330(struct Struct_0205a330*, int);
extern "C" void func_0205a42c(struct Struct_0205a254*, int, int);
extern "C" void func_0205ae8c(void*);

// USA: func_ov019_0218c178
extern "C" ARM void func_ov019_0218c178(struct Struct_ov019_0218c178* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (arg0->unknown_4c_ & 1) {
        struct Struct_0205a254* var1 = arg0->unknown_90_;
        if (var1 != NULL) {
            struct Struct_0205c96c* var2;
            func_0205a370(var1, 1);
            var2 = func_0205a3d0(var1, 1);
            if (var2 != NULL) {
                var2->unknown_15_ = var2->unknown_15_ | 8;
            }
            func_0205a330(
                (struct Struct_0205a330*)var1, var0->GetTickCount());
            var2 = func_0205a3d0(var1, 1);
            if (var2 != NULL) {
                var2->unknown_4_ = 0xd7;
                var2->unknown_6_ = 0x96;
            }
            func_0205a42c(var1, 1, 0x24);
        }
        func_0205ae8c((char*)arg0 + Enum_ov019_0218c178_84);
    } else {
        struct Struct_0205a254* var3 = arg0->unknown_90_;
        if (var3 != NULL) {
            struct Struct_0205c96c* var4 = func_0205a3d0(var3, 1);
            if (var4 != NULL) {
                var4->unknown_15_ = var4->unknown_15_ & ~8;
            }
        }
    }
}
