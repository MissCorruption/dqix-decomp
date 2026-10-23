#include <globaldefs.h>

struct Struct_0205de24_2;

extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
struct Struct_0205d81c;
extern "C" unsigned char * func_0205d81c(Struct_0205d81c*, int);
extern "C" void func_ov002_0215be00(void *arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215d0e8(unsigned char *arg0, void *arg1, int arg2);
#if defined(jpn)
#define func_ov002_0215d214 func_ov002_0215e2b0
#endif
extern "C" void func_ov002_0215d214(unsigned char *arg0, void *arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void *, void *, int, int, int, int, int);
#else
extern "C" void func_0205d304(void *, void *, int, int, bool, bool, void *, bool);
#endif
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1, unsigned char arg2);
struct Struct_0205d5d0;
extern "C" void func_0205d5d0(Struct_0205d5d0*, int, int, int, unsigned char);
struct Struct_0205dee8;
extern "C" void func_0205dee8(Struct_0205dee8*, int);
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);

// USA: func_ov002_0215ce94
extern "C" ARM void func_ov002_0215ce94(unsigned char *arg0) {
#if defined(jpn)
    int var0 = 0x16;
    int var1 = 1;
    if (*(short *) (arg0 + 0x1a00 + 0xee) != -1) {
        unsigned char *var2 = func_0205d81c((Struct_0205d81c *) (arg0 + 0xe20), 0x11);
        if (var2 != 0) {
            var0 = 1;
            var1 = (short) (*(short *) (var2 + 0xae) + *(short *) (var2 + 0xaa));
        }
    }
    func_ov002_0215be00(arg0, (unsigned char) *(int *) (arg0 + 0x1000 + 0xa80), var0, var1);
    memset(*(void **) (arg0 + 0x1000 + 0xa98), 0, 0x800);
    func_ov002_0215d0e8(arg0, *(void **) (arg0 + 0x1000 + 0xa98), 0);
    func_0205d304(arg0 + 0xe20, *(void **) (arg0 + 0x1000 + 0xa98), 0, 1, 0, 1, 0);
    unsigned char *var3 =
        func_0205d81c((Struct_0205d81c *) (arg0 + 0xe20), (unsigned char) *(int *) (arg0 + 0x1000 + 0xa80));
    if (*(short *) (arg0 + 0x1a00 + 0xee) != -1) {
        var3 = func_0205d81c((Struct_0205d81c *) (arg0 + 0xe20), 0x12);
    }
    if (var3 != 0) {
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + 0xe20), 0, 3);
        func_ov002_0215be00(arg0, 9, *(short *) (var3 + 0xac), (short) (*(short *) (var3 + 0xae) + *(short *) (var3 + 0xaa)));
        memset(*(void **) (arg0 + 0x1000 + 0xa98), 0, 0x800);
        func_ov002_0215d214(arg0, *(void **) (arg0 + 0x1000 + 0xa98), 0);
        func_0205d304(arg0 + 0xe20, *(void **) (arg0 + 0x1000 + 0xa98), 0, 0, 0, 1, 0);
    }
    func_0205dee8((Struct_0205dee8 *) (arg0 + 0xe20), (unsigned char) *(int *) (arg0 + 0x1000 + 0xa80));
    func_0205deb4((Struct_0205d81c *) (arg0 + 0xe20), (unsigned char) *(int *) (arg0 + 0x1000 + 0xa80), 0);
#else
    int var4 = 0x16;
    int var5 = 1;
    if (*(short *) (arg0 + 0x1c26) != -1) {
        unsigned char *var6 = func_0205d81c((Struct_0205d81c*)(arg0 + 0x2c8 + 0xc00), 0x10);
        if (var6 != 0) {
            var4 = 1;
            var5 = (short) (*(short *) (var6 + 0xae) + *(short *) (var6 + 0xaa));
        }
    }
    func_ov002_0215be00(arg0, (unsigned char) *(int *) (arg0 + 0x1000 + 0xbb8), var4, var5);
    memset(*(void **) (arg0 + 0x1000 + 0xbd0), 0, 0x960);
    func_ov002_0215d0e8(arg0, *(void **) (arg0 + 0x1000 + 0xbd0), 0);
    func_0205d304(arg0 + 0x2c8 + 0xc00, *(void **) (arg0 + 0x1000 + 0xbd0), 0, 1, false, true, 0, false);
    unsigned char *var7 =
        func_0205d81c((Struct_0205d81c*)(arg0 + 0x2c8 + 0xc00), (unsigned char) *(int *) (arg0 + 0x1000 + 0xbb8));
    if (*(short *) (arg0 + 0x1c26) != -1) {
        var7 = func_0205d81c((Struct_0205d81c*)(arg0 + 0x2c8 + 0xc00), 0x11);
    }
    if (var7 != 0) {
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + 0x2c8 + 0xc00), 0, 3);
        func_ov002_0215be00(arg0, 8, *(short *) (var7 + 0xac), (short) (*(short *) (var7 + 0xae) + *(short *) (var7 + 0xaa)));
        memset(*(void **) (arg0 + 0x1000 + 0xbd0), 0, 0x960);
        func_ov002_0215d214(arg0, *(void **) (arg0 + 0x1000 + 0xbd0), 0);
        func_0205d304(arg0 + 0x2c8 + 0xc00, *(void **) (arg0 + 0x1000 + 0xbd0), 0, 0, false, true, 0, false);
        unsigned char *var8 = func_0205d81c((Struct_0205d81c*)(arg0 + 0x2c8 + 0xc00), 8);
        if (var8 != 0) {
            short var9 = *(short *) (var8 + 0xac);
            short var10 = *(short *) (var8 + 0xae);
            short var11 = *(short *) (var8 + 0xa8);
            if (*(short *) (arg0 + 0x1c26) != -1) {
                var10 = var10 - 4;
            } else {
                var9 = 0x1f - var11;
            }
            *(short *) (var8 + 0xac) = var9;
            *(short *) (var8 + 0xae) = var10;
            func_0205d5d0((Struct_0205d5d0*)(arg0 + 0x2c8 + 0xc00), 8, (int)(*(void **) (arg0 + 0x1000 + 0xbd0)), 1, 0);
        }
    }
    func_0205dee8((Struct_0205dee8*)(arg0 + 0x2c8 + 0xc00), (unsigned char) *(int *) (arg0 + 0x1000 + 0xbb8));
    func_0205deb4((Struct_0205d81c*)(arg0 + 0x2c8 + 0xc00), (unsigned char) *(int *) (arg0 + 0x1000 + 0xbb8), 0);
#endif
}
