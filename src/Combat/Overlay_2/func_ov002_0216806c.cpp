#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"
#include "Resource/GameResources.h"

struct Struct_0205c570;
struct Struct_02108760;

extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void *func_02053c6c(unsigned char *arg0);
extern "C" void func_0205eaa0(Struct_02108760 *arg0, int arg1, int arg2);
extern "C" void func_ov002_0215af64(char *arg0);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_02160068(char *arg0);
extern "C" void func_ov002_0215b9a4(char *arg0, unsigned char arg1, int arg2);
extern "C" void func_ov017_0218f5a4(void *arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov002_02161a8c();
extern "C" void func_020dc7e8(int arg0, int arg1);
extern "C" int *func_0202ae18();
extern "C" int func_0202b7d8(int *arg0);
extern "C" void func_ov017_021d0dbc();
extern "C" void func_ov002_02156e90(char *arg0);
struct Struct_0205d81c;
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);

extern Struct_02108760 data_02108760;

// USA: func_ov002_0216806c
#if defined(jpn)
extern "C" ARM void func_ov002_0216806c(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1a88);
    if (var0 == 0) {
        func_ov002_02161cf0(arg0);
        func_ov002_02160068(arg0);
        func_ov002_02161cf0(arg0);
        func_ov002_0215af64(arg0);
        (*(int *) (arg0 + 0x1a88))++;
    } else if (var0 == 1) {
        short var1                  = *(short *) (arg0 + 0x1ace);
        *(short *) (arg0 + 0x1ace) = func_0205d794((struct Struct_0205c570 *) (arg0 + 0xe20));
        if (var1 != *(short *) (arg0 + 0x1ace)) {
            func_ov002_0215af64(arg0);
            func_ov002_0215b9a4(arg0, 0x1e, 0);
        }
        int var2  = g_keyManager.TestKeysPressed(0x601);
        int var3  = func_0205da38((struct Struct_0205da38*)(arg0 + 0xe20), 0x14);
        int var4 = (var2 | var3) ? 1 : 0;
        if (var4) {
            func_0205eaa0(&data_02108760, 1, 0);
            int var5             = *(signed char *) (arg0 + 0x1ae8);
            GameObject *var6 = GameState::GetInstance()->GetPartyMemberByIndex(var5);
            if (var6 == 0) return;
            unsigned char *var7 = (unsigned char *) func_02053c6c((unsigned char *) var6);
            if (var7[0x56a] != *(short *) (arg0 + 0x1ace) && *(short *) (var7 + 0x488) < 0) {
                var6->obj3D_.unknown_2_ = -1;
                func_ov017_0218f5a4(GetGameResources(), var5, 0, 0, 0);
            }
            var7[0x56a] = *(short *) (arg0 + 0x1ace);
            func_ov002_02161a8c();
            func_020dc7e8(1, -1);
            func_020dc7e8(8, -1);
            func_020dc7e8(6, -1);
            func_020dc7e8(7, -1);
            int *var8 = func_0202ae18();
            if (var8 != 0 && func_0202b7d8(var8)) {
                func_ov017_021d0dbc();
            }
            func_ov002_02156e90(arg0);
            func_ov002_02156e90(arg0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xe20), 0x19, 0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xe20), 0x1b, 0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xe20), 0x1c, 0);
        } else if (func_ov002_02161b48(arg0, 1)) {
            func_ov002_02156e90(arg0);
            func_ov002_02156e90(arg0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xe20), 0x19, 0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xe20), 0x1b, 0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xe20), 0x1c, 0);
        }
    }
}
#else
extern "C" ARM void func_ov002_0216806c(char *arg0) {
    int var9 = *(int *) (arg0 + 0x1bc0);
    if (var9 == 0) {
        func_ov002_02161cf0(arg0);
        func_ov002_02160068(arg0);
        func_ov002_02161cf0(arg0);
        func_ov002_0215af64(arg0);
        (*(int *) (arg0 + 0x1bc0))++;
    } else if (var9 == 1) {
        short var10                  = *(short *) (arg0 + 0x1c06);
        *(short *) (arg0 + 0x1c06) = func_0205d794((struct Struct_0205c570 *) (arg0 + 0xec8));
        if (var10 != *(short *) (arg0 + 0x1c06)) {
            func_ov002_0215af64(arg0);
            func_ov002_0215b9a4(arg0, 0x1d, 0);
        }
        int var11  = g_keyManager.TestKeysPressed(0x601);
        int var12  = func_0205da38((struct Struct_0205da38*)(arg0 + 0xec8), 0x14);
        int var13 = (var11 | var12) ? 1 : 0;
        if (var13) {
            func_0205eaa0(&data_02108760, 1, 0);
            int var14             = *(signed char *) (arg0 + 0x1c20);
            GameObject *var15 = GameState::GetInstance()->GetPartyMemberByIndex(var14);
            if (var15 == 0) return;
            unsigned char *var16 = (unsigned char *) func_02053c6c((unsigned char *) var15);
            if (var16[0x56a] != *(short *) (arg0 + 0x1c06) && *(short *) (var16 + 0x488) < 0) {
                var15->obj3D_.unknown_2_ = -1;
                func_ov017_0218f5a4(GetGameResources(), var14, 0, 0, 0);
            }
            var16[0x56a] = *(short *) (arg0 + 0x1c06);
            func_ov002_02161a8c();
            func_020dc7e8(1, -1);
            func_020dc7e8(8, -1);
            func_020dc7e8(6, -1);
            func_020dc7e8(7, -1);
            int *var17 = func_0202ae18();
            if (var17 != 0 && func_0202b7d8(var17)) {
                func_ov017_021d0dbc();
            }
            func_ov002_02156e90(arg0);
            func_ov002_02156e90(arg0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xec8), 0x18, 0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xec8), 0x1a, 0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xec8), 0x1b, 0);
        } else if (func_ov002_02161b48(arg0, 1)) {
            func_ov002_02156e90(arg0);
            func_ov002_02156e90(arg0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xec8), 0x18, 0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xec8), 0x1a, 0);
            func_0205deb4((Struct_0205d81c*)(arg0 + 0xec8), 0x1b, 0);
        }
    }
}
#endif
