#if defined(jpn)
#define REGION(j,u) (j)
#define data_ov020_0218d974 data_ov020_0218e1c4
#define data_ov020_0218d990 data_ov020_0218e1e0
#else
#define REGION(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

extern "C" int func_020421a0();
struct Struct_0205c77c;
extern "C" void func_0205c77c(struct Struct_0205c77c* arg0, int arg1);
extern "C" void func_0205cd28(unsigned char* arg0);
extern "C" void func_0205c904(unsigned char* arg0, int arg1);
struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);
extern "C" int func_0205cde8(unsigned char* arg0);
extern "C" int func_0205cecc(void* arg0);
extern "C" int func_0205cb64(void* arg0);
extern "C" unsigned char func_0200fb9c(char* arg0);
extern "C" void func_0200fb94(char* arg0, unsigned char arg1);
extern "C" int func_020ab9c0(int arg0);
extern "C" int func_0205c96c(unsigned char* arg0, int arg1);
extern int data_ov020_0218d990[8];
extern int data_ov020_0218d974[7];

struct Struct_ov020_0218c840 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[REGION(0x1cf, 0x23f) - 0x8];
    unsigned char unknown_23f_;
    unsigned char unknown_240_;
};

// USA: func_ov020_0218c840
extern "C" ARM void func_ov020_0218c840(struct Struct_ov020_0218c840* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_020421a0();

    if (arg0->unknown_4_ == 0) {
        arg0->unknown_23f_ = 1;
        arg0->unknown_240_ = 1;
        func_0205c77c((struct Struct_0205c77c*)((char*)arg0 + 0x10), 1);
        func_0205cd28((unsigned char*)arg0 + 0xc);
    }

    func_0205c904((unsigned char*)arg0 + 0xc, 1);

    struct Struct_0205a330* var2 = *(struct Struct_0205a330**)(var1 + REGION(0x230, 0x2e0));
    if (var2 != 0) {
        func_0205a330(var2, 1);
    }

    if (func_0205cde8((unsigned char*)arg0 + 0xc) != 0) {
        if (arg0->unknown_4_ > 5) {
            volatile unsigned int* var3 = (volatile unsigned int*)0x4000000;
            *var3 = (*var3 & ~0x1f00) | 0x1300;
        }

        int var4 = g_keyManager.TestKeysPressed(0x401);
        int var5 = func_0205cecc((unsigned char*)arg0 + 0xc) >= 0;
        if ((var4 | var5) != 0) {
            int var6 = func_0205cb64((unsigned char*)arg0 + 0xc);
            if (func_0200fb9c((char*)var0) == 6) return;

            if (func_020ab9c0(1) == 4) {
                func_0200fb94((char*)var0, (unsigned char)data_ov020_0218d990[var6]);
                arg0->unknown_0_ = -1;
                arg0->unknown_4_ = -1;
                return;
            } else {
                func_0200fb94((char*)var0, (unsigned char)data_ov020_0218d974[var6]);
                arg0->unknown_0_ = -1;
                arg0->unknown_4_ = -1;
                return;
            }
        }
    }

    func_0205c96c((unsigned char*)arg0 + 0xc, 0);
}
