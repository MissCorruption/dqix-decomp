#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

class GameState;
struct Struct_0205de24_2;
struct Struct_0205c570;
struct Struct_0205d81c;
struct Struct_02108760;

extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_0205deb4(struct Struct_0205d81c *arg0, int arg1, int arg2);
extern "C" void *func_02010828(GameState *arg0);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" void func_ov002_02161cf0(void *arg0);
extern "C" void func_ov002_0215fb54(void *arg0);
extern "C" void func_ov002_0215b9a4(void *arg0, int arg1, int arg2);
extern "C" void func_ov002_02156e90(void *arg0);
extern char data_02108760[];

// USA: func_ov002_02167eb0
#if defined(jpn)
extern "C" ARM void func_ov002_02167eb0(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1a88);
    if (var0 == 0) {
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + 0xe20), 0, 3);
        func_ov002_02161cf0(arg0);
        func_ov002_0215fb54(arg0);
        (*(int *) (arg0 + 0x1a88))++;
        return;
    }
    if (var0 != 1) return;
    *(int *) (arg0 + 0x22ac) |= 4;
    short var1                  = *(short *) (arg0 + 0x1acc);
    *(short *) (arg0 + 0x1acc) = func_0205d794((struct Struct_0205c570 *) (arg0 + 0xe20));
    if (var1 != *(short *) (arg0 + 0x1acc)) return;
    int var2 = g_keyManager.TestKeysPressed(0x601);
    int var3 = (var2 | func_0205da38((struct Struct_0205da38*)(arg0 + 0xe20), 0x14)) ? 1 : 0;
    if (var3) {
        func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1a80) & 0xff, 1);
        func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
        GameState *var4 = GameState::GetInstance();
        func_02010828(var4);
        unsigned char *var5 = (unsigned char *)var4->GetPartyMemberByIndex(*(signed char *) (arg0 + 0x1ae8));
        if (var5 == 0) return;
        *(int *) (func_02053c6c(var5) + 0x8b4) = *(short *) (arg0 + 0x1acc);
        *(short *) (arg0 + 0x1acc)            = -1;
        func_ov002_02156e90(arg0);
        func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 0x1b, 0);
        func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 0x1c, 0);
        return;
    }
    if (func_ov002_02161b48(arg0, 1)) {
        *(short *) (arg0 + 0x1acc) = -1;
        func_ov002_02156e90(arg0);
        func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 0x1b, 0);
        func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 0x1c, 0);
    }
}
#else
extern "C" ARM void func_ov002_02167eb0(char *arg0) {
    int var6 = *(int *) (arg0 + 0x1bc0);
    if (var6 == 0) {
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + 0xec8), 0, 3);
        func_ov002_02161cf0(arg0);
        func_ov002_0215fb54(arg0);
        (*(int *) (arg0 + 0x1bc0))++;
        return;
    }
    if (var6 != 1) return;
    *(int *) (arg0 + 0x247c) |= 4;
    short var7                  = *(short *) (arg0 + 0x1c04);
    *(short *) (arg0 + 0x1c04) = func_0205d794((struct Struct_0205c570 *) (arg0 + 0xec8));
    if (var7 != *(short *) (arg0 + 0x1c04)) return;
    int var8 = g_keyManager.TestKeysPressed(0x601);
    int var9 = (var8 | func_0205da38((struct Struct_0205da38*)(arg0 + 0xec8), 0x14)) ? 1 : 0;
    if (var9) {
        func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1bb8) & 0xff, 1);
        func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
        GameState *var10 = GameState::GetInstance();
        func_02010828(var10);
        unsigned char *var11 = (unsigned char *)var10->GetPartyMemberByIndex(*(signed char *) (arg0 + 0x1c20));
        if (var11 == 0) return;
        *(int *) (func_02053c6c(var11) + 0x94c) = *(short *) (arg0 + 0x1c04);
        *(short *) (arg0 + 0x1c04)            = -1;
        func_ov002_02156e90(arg0);
        func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xec8), 0x1a, 0);
        func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xec8), 0x1b, 0);
        return;
    }
    if (func_ov002_02161b48(arg0, 1)) {
        *(short *) (arg0 + 0x1c04) = -1;
        func_ov002_02156e90(arg0);
        func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xec8), 0x1a, 0);
        func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xec8), 0x1b, 0);
    }
}
#endif
