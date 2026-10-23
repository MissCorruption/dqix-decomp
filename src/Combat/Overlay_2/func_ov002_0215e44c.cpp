#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_ov002_0215e644 func_ov002_0215f7ac
#endif

struct Struct_ov002_0216c9fb {
    signed char unknown_0_[4];
};

extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" void *func_02010828(GameState *arg0);
extern "C" void func_020dc4d0(signed char *arg0, signed char *arg1);
extern "C" void func_ov002_0215be00(void *arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215e644(unsigned char *arg0, void *arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_0205d304(void *, void *, int, int, int, int, int);
#define data_ov002_0216c9fb data_ov002_0216d058
#else
#define RG(u, j) (u)
extern "C" void func_0205d304(void *, void *, int, int, bool, bool, void *, bool);
#endif
struct Struct_0205d5d0;
extern "C" void func_0205d5d0(Struct_0205d5d0*, int, int, int, unsigned char);
struct Struct_0205d81c;
extern "C" unsigned char * func_0205d81c(Struct_0205d81c*, int);
extern "C" void func_0204f160(unsigned char* arg0, int arg1, int arg2);
extern "C" void func_0204ecb4(unsigned char *arg0, int arg1, int arg2, int arg3, int arg4, signed char *arg5);
struct Struct_0204fbf8_2;
extern "C" void func_0204fbf8(Struct_0204fbf8_2*);
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);

extern Struct_ov002_0216c9fb data_ov002_0216c9fb;

// USA: func_ov002_0215e44c
extern "C" ARM void func_ov002_0215e44c(unsigned char *arg0) {
    func_02010828(GameState::GetInstance());
    signed char var0    = 0;
    Struct_ov002_0216c9fb var1 = data_ov002_0216c9fb;
    func_020dc4d0(var1.unknown_0_, &var0);
    int var2 = 0x10;
    var2 -= var0 * 4;
    for (signed char var3 = 0; var3 < var0; var3++) {
        *(signed char *) (arg0 + RG(0x1c20, 0x1ae8)) = var1.unknown_0_[var3];
        func_ov002_0215be00(arg0, (unsigned char) (*(signed char *) (arg0 + RG(0x1c20, 0x1ae8)) + RG(0x2c, 0x2f)), (short) var2, 3);
        memset(*(void **) (arg0 + RG(0x1bd0, 0x1a98)), 0, RG(0x960, 0x800));
        func_ov002_0215e644(arg0, *(void **) (arg0 + RG(0x1bd0, 0x1a98)), 0);
#if defined(jpn)
        func_0205d304(arg0 + 0xe20, *(void **) (arg0 + 0x1a98), 0, 0, 0, 1, 0);
#else
        func_0205d304(arg0 + 0x2c8 + 0xc00, *(void **) (arg0 + 0x1bd0), 0, 0, false, false, 0, false);
#endif
        unsigned char var4 = (unsigned char) (*(signed char *) (arg0 + RG(0x1c20, 0x1ae8)) + RG(0x2c, 0x2f));
        if ((unsigned char) (var4 + RG(0xd4, 0xd1)) <= 3) {
#if !defined(jpn)
            func_0205d5d0((Struct_0205d5d0*)(arg0 + 0x2c8 + 0xc00), var4, (int)(*(void **) (arg0 + 0x1bd0)), 1, 0);
#endif
            unsigned char *var5 = func_0205d81c((Struct_0205d81c*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), var4);
            if (var5 != 0) {
                short var6 = *(short *) (var5 + 0xac);
                short var7 = *(short *) (var5 + 0xae);
                short var8 = *(short *) (var5 + 0xa8);
                short var9 = *(short *) (var5 + 0xaa);
                func_0204f160(var5, *(int *) (var5 + 0xa0), var4);
                func_0204ecb4(var5, var6, var7, var8, var9, 0);
                func_0204fbf8((Struct_0204fbf8_2*)var5);
            }
        }
        var2 += 8;
    }
    for (int var10 = 0; var10 < var0; var10++) {
        *(signed char *) (arg0 + RG(0x1c20, 0x1ae8)) = var1.unknown_0_[var10];
        func_0205deb4((Struct_0205d81c*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), (unsigned char) (*(signed char *) (arg0 + RG(0x1c20, 0x1ae8)) + RG(0x2c, 0x2f)), (unsigned short) (*(signed char *) (arg0 + RG(0x1c20, 0x1ae8)) + 6));
    }
    *(signed char *) (arg0 + RG(0x1c20, 0x1ae8)) = -1;
}
