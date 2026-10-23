#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_ov013_0218683c func_ov013_02187b68
#endif

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

extern "C" void func_ov013_02185aac(unsigned char* arg0);
struct Struct_0205dee8;
extern "C" void func_0205dee8(struct Struct_0205dee8* arg0, int arg1);
struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);
struct Struct_02108760;
extern struct Struct_02108760 data_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" void func_ov013_02186c64(void* arg0, int arg1, int arg2);
extern "C" void func_ov013_02185cc0(void* arg0);
struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_ov013_02186c1c(void* arg0);

// USA: func_ov013_0218683c
extern "C" ARM void func_ov013_0218683c(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    int var1 = 0;
    var0[LOW_REGION(0x644, 0x6bc)] |= 1;
    var0[LOW_REGION(0x5c6, 0x63a)] = var1;

    if (var0[LOW_REGION(0x5ca, 0x63e)] == 0) {
        if (var0[LOW_REGION(0x5c8, 0x63c)] == 4) *(int*)(var0 + LOW_REGION(0x5e8, 0x660)) = 1;
        else *(int*)(var0 + LOW_REGION(0x5e8, 0x660)) = var1;
        func_ov013_02185aac(var0);
        var0[LOW_REGION(0x5ca, 0x63e)] = var0[LOW_REGION(0x5ca, 0x63e)] + 1;
        return;
    }
    if (var0[LOW_REGION(0x5ca, 0x63e)] != 1) return;

    func_0205dee8((struct Struct_0205dee8*)(var0 + LOW_REGION(0x34, 0x38)), 3);
    var0[LOW_REGION(0x5c7, 0x63b)] = 0;
    if (g_keyManager.TestKeysPressed(0xc0) != 0) {
        if (*(int*)(var0 + LOW_REGION(0x5e8, 0x660)) == 0) *(int*)(var0 + LOW_REGION(0x5e8, 0x660)) = 1;
        else *(int*)(var0 + LOW_REGION(0x5e8, 0x660)) = 0;
        var1 = 1;
    }

    if (*(int*)(var0 + LOW_REGION(0x5d4, 0x648)) == 2) {
        *(int*)(var0 + LOW_REGION(0x5e8, 0x660)) = (signed char)func_0205d794((struct Struct_0205c570*)(var0 + LOW_REGION(0x34, 0x38)));
        var1 = 1;
    }

    if (var0[LOW_REGION(0x5c9, 0x63d)] == var0[LOW_REGION(0x5c8, 0x63c)]) {
        if (g_keyManager.TestKeysPressed(0x601) != 0) {
            func_0205eaa0(&data_02108760, 1, 0);
            if (var0[LOW_REGION(0x5c8, 0x63c)] == 4) {
                int var2 = 1;
                if (*(int*)(var0 + LOW_REGION(0x5e8, 0x660)) == 0) {
                    var0[LOW_REGION(0x5c8, 0x63c)] = 5;
                    func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), var2);
                    var0[LOW_REGION(0x5ec, 0x664)] = 0;
                } else {
                    var0[LOW_REGION(0x5c8, 0x63c)] = var2;
                    g_keyManager.CancelCurrentKeyRepeat();
                    var0[LOW_REGION(0x5ec, 0x664)] = 0;
                    func_0205dee8((struct Struct_0205dee8*)(var0 + LOW_REGION(0x34, 0x38)), 3);
                    func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), 0);
                    func_0205dee8((struct Struct_0205dee8*)(var0 + LOW_REGION(0x34, 0x38)), 2);
                    func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), 0);
                    var0[LOW_REGION(0x5c5, 0x639)] = 0;
                    var0[LOW_REGION(0x644, 0x6bc)] &= ~1;
                    func_ov013_02186c64(var0, 0, 0);
                    func_ov013_02185cc0(var0);
                }
            } else {
                if (*(int*)(var0 + LOW_REGION(0x5e8, 0x660)) == 0) {
                    int var3 = 1;
                    var0[LOW_REGION(0x5ec, 0x664)] = var3;
                    var0[LOW_REGION(0x5c8, 0x63c)] = 5;
                    func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), var3);
                } else {
                    func_0205dee8((struct Struct_0205dee8*)(var0 + LOW_REGION(0x34, 0x38)), 3);
                    func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), 0);
                    func_0205dee8((struct Struct_0205dee8*)(var0 + LOW_REGION(0x34, 0x38)), 2);
                    func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), 0);
                    var0[LOW_REGION(0x5c5, 0x639)] = 0;
                    var0[LOW_REGION(0x5c8, 0x63c)] = 1;
                    g_keyManager.CancelCurrentKeyRepeat();
                    var0[LOW_REGION(0x644, 0x6bc)] &= ~1;
                    func_ov013_02186c64(var0, 0, 0);
                    func_ov013_02185cc0(var0);
                }
            }
            var0[LOW_REGION(0x5ca, 0x63e)] = 0;
        } else {
            if (g_keyManager.TestKeysPressed(2) != 0 ||
                (*(int*)(var0 + LOW_REGION(0x5e8, 0x660)) == 1 && func_0205da38((struct Struct_0205da38*)(var0 + LOW_REGION(0x34, 0x38)), 0x14) != 0)) {
                if (g_keyManager.TestKeysPressed(2) == 0) {
                    func_0205eaa0(&data_02108760, 1, 0);
                }
                func_0205dee8((struct Struct_0205dee8*)(var0 + LOW_REGION(0x34, 0x38)), 3);
                func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), 0);
                func_0205dee8((struct Struct_0205dee8*)(var0 + LOW_REGION(0x34, 0x38)), 2);
                func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), 0);
                var0[LOW_REGION(0x5c5, 0x639)] = 0;
                var0[LOW_REGION(0x5c8, 0x63c)] = 1;
                g_keyManager.CancelCurrentKeyRepeat();
                var0[LOW_REGION(0x5ca, 0x63e)] = 0;
                var0[LOW_REGION(0x644, 0x6bc)] &= ~1;
                func_ov013_02186c64(var0, 0, 0);
                func_ov013_02185cc0(var0);
            } else {
                if (*(int*)(var0 + LOW_REGION(0x5e8, 0x660)) == 0 &&
                    func_0205da38((struct Struct_0205da38*)(var0 + LOW_REGION(0x34, 0x38)), 0x14) != 0) {
                    func_0205eaa0(&data_02108760, 1, 0);
                    int var4 = 1;
                    if (var0[LOW_REGION(0x5c8, 0x63c)] == 4) {
                        var0[LOW_REGION(0x5c8, 0x63c)] = 5;
                        func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), var4);
                        var0[LOW_REGION(0x5ec, 0x664)] = 0;
                    } else {
                        var0[LOW_REGION(0x5ec, 0x664)] = var4;
                        var0[LOW_REGION(0x5c8, 0x63c)] = 5;
                        func_0205d6a0((struct Struct_0205d6a0*)(var0 + LOW_REGION(0x34, 0x38)), var4);
                        var0[LOW_REGION(0x5ca, 0x63e)] = 0;
                    }
                }
            }
        }
    }

    if (var1 != 0) {
        func_ov013_02186c1c(var0);
    }
}
