#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cd48 data_ov005_0215e128
#define func_ov013_02185990 func_ov013_02186b88
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);

extern "C" int func_020421a0();
extern "C" int func_0205cecc(void* arg0);
extern "C" int func_0205cb64(void* arg0);
extern "C" void func_02043204(char* arg0);
extern "C" void func_0205ce94(unsigned char* arg0);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);

extern "C" void func_ov013_02185990(void* arg0);
extern "C" void func_ov013_02186c64(void* arg0, int arg1, int arg2);
extern "C" void func_ov013_02185cc0(void* arg0);

extern struct Struct_02108760 data_02108760;

// USA: func_ov013_02186590
extern "C" ARM void func_ov013_02186590(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (var0[R(0x5cb,0x63f)] != 0) {
        var0[R(0x5c5,0x639)] = 1;
    }
    int var1 = func_020421a0();
    unsigned char* var2 = (unsigned char*)var1;
    int var3 = 1;
    var2[0x1000 + R(0x7ee,0x9be)] = var3;

    if (var0[R(0x5ca,0x63e)] == 0) {
        if (*(int*)(var2 + R(0x870,0x9a0)) != 0) return;
        func_ov013_02185990(arg0);
        unsigned char var4 = var0[R(0x5c8,0x63c)];
        unsigned char* var5 = var0 + R(0x3ec,0x3f0);
        if (var4 == 4) {
            func_0205bcdc((struct Struct_0205bcdc*)(var5 + 4), var3);
            func_0205bb04(var5 + 0x54, var3);
        } else {
            func_0205bcdc((struct Struct_0205bcdc*)(var5 + 4), 0);
            func_0205bb04(var5 + 0x54, 0);
        }
        var0[R(0x5ca,0x63e)] = var0[R(0x5ca,0x63e)] + 1;
        return;
    }

    if (var0[R(0x5ca,0x63e)] != 1) return;

    int var6 = func_0205cecc(var0 + R(0x3d0,0x3d4));
    if (g_keyManager.TestKeysPressed(0x601) != 0) {
        var6 = func_0205cb64(var0 + R(0x3d0,0x3d4));
    } else if (g_keyManager.TestKeysPressed(2) != 0) {
        var6 = -2;
        var3 = 0;
    }

    if (var6 == -2) goto caseInvalidate;
    if (var6 == 0) goto caseReset;
    if (var6 == 1) goto caseInvalidate;
    return;

caseReset:
    {
        unsigned char var7 = var0[R(0x5c8,0x63c)];
        if (var7 == 4) {
            var0[R(0x5c8,0x63c)] = 5;
            func_02043204((char*)var2);
            func_0205ce94(var0 + R(0x3d0,0x3d4));
            var0[R(0x5ec,0x664)] = 0;
            func_0205eaa0(&data_02108760, 1, 0);
        } else {
            var0[R(0x5c8,0x63c)] = 5;
            var0[R(0x5ec,0x664)] = 1;
            func_02043204((char*)var2);
            func_0205ce94(var0 + R(0x3d0,0x3d4));
            func_0205d6a0((struct Struct_0205d6a0*)(var0 + R(0x34,0x38)), 1);
            func_0205eaa0(&data_02108760, 1, 0);
        }
        var0[R(0x5ca,0x63e)] = 0;
        return;
    }

caseInvalidate:
    var0[R(0x5c8,0x63c)] = 1;
    var0[R(0x5ca,0x63e)] = 0;
    g_keyManager.CancelCurrentKeyRepeat();
    if (var3 != 0) {
        func_0205eaa0(&data_02108760, 1, 0);
    }
    var0[R(0x5ec,0x664)] = 0;
    func_02043204((char*)var2);
    func_0205ce94(var0 + R(0x3d0,0x3d4));
    var0[R(0x5c5,0x639)] = 0;
    func_ov013_02186c64(arg0, 0, 0);
    func_ov013_02185cc0(arg0);
}
