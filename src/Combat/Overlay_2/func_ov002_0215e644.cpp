#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_02046574_2;
struct Struct_020465c0;
struct Struct_0201099c_3;
extern "C" char *func_020421a0();
extern "C" GameObject *func_0200ff1c(GameState *arg0, int arg1);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" void func_02046574(struct Struct_02046574_2 *arg0, int arg1, char *arg2);
extern "C" void func_020465c0(struct Struct_020465c0 *arg0, int arg1, int arg2);
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" void func_020465f0(unsigned char *arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(unsigned char *arg0, int arg1, unsigned char arg2);
extern "C" void func_02046380(void *arg0);
extern "C" int func_020420e8(const char *arg0, int arg1);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" int func_ov017_021bdbcc(GameResources *arg0);
extern "C" void func_02046608(void *arg0, int arg1, const char *arg2, char *arg3, int arg4, int arg5, int arg6);
extern "C" char data_ov002_0216d2a1[];

static inline unsigned short inline_ov002_0215e644(char *arg0, int arg1) { return *(unsigned short *) (arg0 + arg1); }

// USA: func_ov002_0215e644
extern "C" ARM void func_ov002_0215e644(char *arg0, char *arg1) {
    char var0[0x10];
    char var1[0x20];
    char var2[0x400];
    if (arg1 == NULL) return;
    char *var3       = func_020421a0();
    GameObject *var4 = func_0200ff1c(GameState::GetInstance(), *(signed char *) (arg0 + 0x1c00 + 0x20));
    if (var4 == NULL) return;
    unsigned char *var5 = func_02053c6c((unsigned char *) var4);
    if (var5 == NULL) return;
    func_02046380(var3);
    func_02046574((struct Struct_02046574_2 *) var3, 0, *(char **) ((char *) var4 + 0x134));
    int var6 = (0x40 - func_020420e8(*(const char **) ((char *) var4 + 0x134), 0)) >> 1;
    func_020465c0((struct Struct_020465c0 *) var3, 0, inline_ov002_0215e644(*(char **) ((char *) var4 + 0x130), 4));
    func_020465c0((struct Struct_020465c0 *) var3, 1, inline_ov002_0215e644(*(char **) ((char *) var4 + 0x134), 0x30));
    func_020465c0((struct Struct_020465c0 *) var3, 2, inline_ov002_0215e644(*(char **) ((char *) var4 + 0x130), 6));
    func_020465c0((struct Struct_020465c0 *) var3, 3, inline_ov002_0215e644(*(char **) ((char *) var4 + 0x134), 0x32));
    func_020465c0((struct Struct_020465c0 *) var3, 4, *(unsigned short *) (var5 + *(int *) (var5 + 0x950) * 2 + 0x16c));
    func_020465c0((struct Struct_020465c0 *) var3, 5, inline_ov002_0215e644(*(char **) ((char *) var4 + 0x134), 0x34));
    func_020465c0((struct Struct_020465c0 *) var3, 6, inline_ov002_0215e644(*(char **) ((char *) var4 + 0x134), 0x36));
    func_020465c0((struct Struct_020465c0 *) var3, 7, (*(unsigned int *) var5 << 12) >> 22);
    int var7          = *(int *) (var5 + 0x950);
    GameResources *var8 = GetGameResources();
    if (func_ov017_021bdbcc(var8)) var7 = 0;
    char *var9 = (char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20),
                                                                      (short) (var7 + 0x834));
    int var10  = (0x40 - func_020420e8(var9, 0)) >> 1;
    if (func_ov017_021bdbcc(var8)) {
        func_02046574((struct Struct_02046574_2 *) var3, 1, var9);
    } else if (*(int *) ((char *) var4 + 0x1c4) == 0) {
        func_02046574((struct Struct_02046574_2 *) var3, 1, var9);
    }
    unsigned char var11 = *(var5 + *(int *) (var5 + 0x950) + 0x186);
    if (var11 != 0) {
        sprintf(var0, data_ov002_0216d2a1, var11);
        __clear(var1, 0x20);
        int var12 = 5;
        if (var11 == 10) var12 = 0xd;
        func_02041e70(var1, var12);
        func_02042058(var1, var0);
        func_02041e70(var1, 0xf);
        func_02046574((struct Struct_02046574_2 *) var3, 2, var1);
    }
    for (int var13 = 0; var13 < 8; var13++) {
        int var14 = 3;
        if (var13 == 4) var14 = 2;
        func_020465f0((unsigned char *) var3, var13, var14);
    }
    for (int var15 = 0; var15 < 8; var15++) {
        func_020465d8((unsigned char *) var3, var15, 1);
    }
    sprintf(var2,
            (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0x7d0),
            var6, var10);
    func_02046608(var3, 0xa, var2, arg1, 0x100, 0, 0);
}
