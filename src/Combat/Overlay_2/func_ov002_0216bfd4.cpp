#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0205d6a0;
struct Struct_020e28dc;
struct Struct_020e25e8;
extern "C" char *func_020421a0();
extern "C" void func_02043204(char *arg0);
extern "C" void func_0205d6a0(struct Struct_0205d6a0 *arg0, int arg1);
extern "C" void func_020e25e8(struct Struct_020e25e8 *arg0);
extern "C" int func_020e28dc(struct Struct_020e28dc *arg0);
extern "C" void func_ov002_0215b9a4(char *arg0, unsigned char arg1, int arg2);

// USA: func_ov002_0216bfd4
extern "C" ARM void func_ov002_0216bfd4(char *arg0, unsigned char arg1) {
    char *var0 = func_020421a0();
    if (*(unsigned char *) (arg0 + 0x1000 + RG(0xc2e, 0xaf6)) != 0) {
        *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
        *(unsigned char *) (arg0 + 0x1000 + RG(0xc2e, 0xaf6)) = 0;
        func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)), 1);
        func_0205d6a0((struct Struct_0205d6a0 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0);
    }
    *(unsigned char *) (arg0 + 0x1000 + RG(0xc79, 0xb3d)) = arg1;
    *(unsigned char *) (arg0 + 0x1000 + RG(0xc30, 0xaf8)) = 1;
    *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80))           = RG(0x26, 0x29);
    *(int *) (arg0 + 0x1000 + RG(0xbbc, 0xa84))           = RG(0x26, 0x29);
    int var1                                  = 0;
    int var2                                   = 0;
    int var3                                 = 0;
    int var4                                  = 0;
    switch (*(unsigned char *) (arg0 + 0x1000 + RG(0xc79, 0xb3d))) {
        case 0:
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1a00 + 0xf0))          = 0x236f;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1a00 + 0xf2))          = -1;
            *(unsigned char *) (arg0 + 0x1000 + RG(0xc2e, 0xaf6)) = 1;
            var2                                       = 1;
            *(short *) (arg0 + RG(0x1c00 + 0x12, 0x1a00 + 0xda))          = 0;
            break;
        case 1: break;
        case 2:
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1a00 + 0xf0)) = 0x2371;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1a00 + 0xf2)) = -1;
            var2                              = 1;
            break;
        case 3:
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1a00 + 0xf0))          = 0x2372;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1a00 + 0xf2))          = -1;
            *(unsigned char *) (arg0 + 0x1000 + RG(0xc2e, 0xaf6)) = 1;
            var2                                       = 1;
            *(short *) (arg0 + RG(0x1c00 + 0x12, 0x1a00 + 0xda))          = 0;
            break;
        case 4:
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1a00 + 0xf0)) = 0x2373;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1a00 + 0xf2)) = -1;
            var3                            = 1;
            var2                              = 1;
            break;
        case 5:
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1a00 + 0xf0))          = 0x2377;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1a00 + 0xf2))          = -1;
            var1                                      = 1;
            var3                                     = 1;
            var2                                       = 1;
            var4                                      = 1;
            *(unsigned char *) (arg0 + 0x1000 + RG(0xcc5, 0xb89)) = 1;
            break;
        case 6:
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1a00 + 0xf0)) = 0x2370;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1a00 + 0xf2)) = -1;
            var1                             = 1;
            var3                            = 1;
            var2                              = 1;
            break;
        case 7:
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1a00 + 0xf0))          = 0x2375;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1a00 + 0xf2))          = -1;
            var1                                      = 1;
            var3                                     = 1;
            var2                                       = 1;
            var4                                      = 1;
            *(unsigned char *) (arg0 + 0x1000 + RG(0xcc5, 0xb89)) = 1;
            break;
        case 8: var1 = 1; break;
        case 9:
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1a00 + 0xf0)) = 0x2374;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1a00 + 0xf2)) = -1;
            var3                            = 1;
            var2                              = 1;
            var4                             = 1;
            break;
    }
    if (var1 && *(void **) (arg0 + 4) != NULL &&
        func_020e28dc(*(struct Struct_020e28dc **) (arg0 + 4)))
    {
        func_020e25e8(*(struct Struct_020e25e8 **) (arg0 + 4));
    }
    if (var3) {
        if (!var2) {
            func_02043204(var0);
        } else if (var4) {
            func_02043204(var0);
        }
        *(int *) (arg0 + 0x1000 + RG(0xbbc, 0xa84))           = RG(9, 10);
        *(unsigned char *) (arg0 + 0x1000 + RG(0xc30, 0xaf8)) = 0;
        if (*(unsigned char *) (arg0 + 0x1000 + RG(0xc79, 0xb3d)) == 9) {
            *(int *) (arg0 + 0x1000 + RG(0xbbc, 0xa84)) = 5;
        }
        if (*(unsigned char *) (arg0 + 0x1000 + RG(0xc78, 0xb3c)) != 0) {
            *(signed char *) (arg0 + 0x1000 + RG(0xc20, 0xae8))   = 4;
            *(unsigned char *) (arg0 + 0x1000 + RG(0xc78, 0xb3c)) = 0;
        }
    }
    if (var2) {
        *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = RG(0x26, 0x29);
        *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) = 0;
    }
}
