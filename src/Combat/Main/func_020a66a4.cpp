#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020a66a4_14076 = 0x34ec, Enum_020a66a4_1816 = 0x508 };
#else
enum { Enum_020a66a4_14076 = 0x36fc, Enum_020a66a4_1816 = 0x718 };
#endif
#include "GameState/GameState.h"

struct Struct_0200ffc0;
extern "C" void* func_0200ffc0(struct Struct_0200ffc0* arg0);
struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);
struct Struct_02046b1c;
extern "C" int func_02046b1c(struct Struct_02046b1c* arg0);
struct Struct_020a66a4;
extern "C" void func_020a7eb8(struct Struct_020a66a4* arg0);
extern "C" int func_ov017_021b8b54(void* arg0);
extern "C" void* func_02057924(void* arg0);
extern "C" void func_02057ab8(void* arg0, int arg1);

struct Struct_020a66a4_2 {
    char unknown_0_[Enum_020a66a4_14076];
    void* unknown_36fc_;
};

struct Struct_020a66a4_3 {
    char unknown_0_[Enum_020a66a4_1816];
    void* unknown_718_;
};

// USA: func_020a66a4
extern "C" ARM void func_020a66a4(struct Struct_020a66a4_2* arg0) {
    void* var0;
    void* var1;
    int var2;
    void* var3;
    void* var4;
    GameState* var5 = GameState::GetInstance();
    var1 = arg0->unknown_36fc_;
    var0 = func_0200ffc0((struct Struct_0200ffc0*)var5);
    var2 = func_02046b24((struct Struct_02015438**)var1);
    func_02046b1c((struct Struct_02046b1c*)var1);
    struct Struct_020a66a4_3* var6 = (struct Struct_020a66a4_3*)((char*)arg0 + 0x3000);
    var4 = var6->unknown_718_;
    var3 = func_02057924(var6);
    if (var0 == NULL) return;
    if (var2 == 0xa && *((unsigned char*)var4 + 3) != 0) {
        if (func_ov017_021b8b54(var4)) return;
    }
    func_020a7eb8((struct Struct_020a66a4*)var0);
    func_02057ab8(var3, 0xc9);
}
