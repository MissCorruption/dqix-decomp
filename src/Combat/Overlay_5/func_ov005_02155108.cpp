#if defined(jpn)
#define R(j,u) (j)
#define func_ov005_02155d6c func_ov005_0215735c
#define func_ov005_02159c88 func_ov005_0215b1d4
#define func_ov005_0215a2c8 func_ov005_0215b81c
#define func_ov005_0215a37c func_ov005_0215b8d0
#define func_ov005_0215a3bc func_ov005_0215b910
#define func_ov005_0215a418 func_ov005_0215b96c
#define func_ov005_0215a720 func_ov005_0215bc6c
#define func_ov005_0215aa44 func_ov005_0215bf64
#define func_ov005_0215ae7c func_ov005_0215c33c
#define func_ov005_0215b0a0 func_ov005_0215c4b4
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc* arg0);
extern "C" void func_ov005_0215a620(void* arg0);
extern "C" void func_0204b088(void* arg0, int arg1);
struct Struct_020439b0;
extern "C" void func_020e2d24(int* arg0, int arg1, int arg2);
extern "C" void func_ov005_0215ae7c(void* arg0);
struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
extern "C" void func_020e2cc4(struct Struct_020439b0* arg0, int arg1);
struct Struct_020e2834;
extern "C" void func_020e2834(struct Struct_020e2834* arg0);
extern "C" void func_ov005_02155d6c(void* arg0);

// USA: func_ov005_02155108
extern "C" ARM void func_ov005_02155108(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    if (*(unsigned char*)(var0 + 0x3000 + R(0xd3c, 0xdc4)) != 0xff) return;

    func_0205d2bc((struct Struct_0205d2bc*)(var0 + R(0xee0, 0x2e4 + 0xc00)));
    func_ov005_0215a620(arg0);

    if (*(int*)(var0 + 0x3000 + R(0xd44, 0xdcc)) & 0x100) {
        func_0204b088(var0 + R(0xea0, 0x2a4 + 0xc00), 0);
        *(int*)(var0 + 0x3000 + R(0xd44, 0xdcc)) &= ~0x100;
    }

    if (*(int*)(var0 + 0x3000 + R(0xd44, 0xdcc)) & 0x200) {
        func_ov005_0215ae7c(arg0);
        *(int*)(var0 + 0x3000 + R(0xd44, 0xdcc)) &= ~0x200;
    }

    if (*(void**)(var0 + R(0xe60, 0xe64)) != NULL) {
        unsigned char* var1 = *(unsigned char**)((unsigned char*)(*(void**)(var0 + R(0xe60, 0xe64))) + 0x10);
        int var2;
        func_020e2d24((int*)(var1 + 0x28), 0x1f, 1);
        var2 = func_020e28dc((struct Struct_020e28dc*)*(void**)(var0 + R(0xe60, 0xe64)));
        func_020e2cc4((struct Struct_020439b0*)(var1 + 0x28), var2);
        func_020e2834((struct Struct_020e2834*)*(void**)(var0 + R(0xe60, 0xe64)));
    }

    func_ov005_02155d6c(arg0);
}
