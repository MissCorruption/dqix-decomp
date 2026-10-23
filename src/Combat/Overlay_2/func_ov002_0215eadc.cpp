#include "std_library_functions.h"
#include <globaldefs.h>

struct Struct_0205d81c;
struct Elem_0205d81c;
extern "C" struct Elem_0205d81c *func_0205d81c(struct Struct_0205d81c *s, int key);
struct Struct0205de24;
extern "C" void func_0205de24(struct Struct0205de24 *obj, unsigned char keyLow,
                                                                        unsigned char keyHigh);
extern "C" void func_0205deb4(struct Struct_0205d81c *s, int key, int value);
extern "C" void func_ov002_0215ee04(char *base);

extern "C" void func_ov002_0215ef60(void *base);
extern "C" void func_ov002_02157030(void *base, int type, short *a, short *b, short *c, short *d);
extern "C" void func_ov002_0215be00(void *base, int a, int b, int c);
extern "C" void func_ov002_0215ec4c(void *base, void *dst, int flag);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_0205d304(void *a, void *b, int p2, int p3, int p4, int p5, int p6);
#else
#define RG(u, j) (u)
extern "C" void func_0205d304(void *a, void *b, int p2, int p3, int p4, int p5, int p6, int p7);
#endif

struct BufOv0215eadc {
    char pad[RG(0xbd0, 0xa98)];
    void *buf;
};
struct FieldOv0215eadc {
    char pad[RG(0xbb8, 0xa80)];
    int field;
};
struct CountOv0215eadc {
    char pad[0x58];
    int count;
};

// USA: func_ov002_0215eadc
extern "C" ARM void func_ov002_0215eadc(char *base, int refresh) {
    struct CountOv0215eadc *l = (struct CountOv0215eadc *) (base + RG(0x2c8 + 0xc00, 0xe20)) + 1;
    l--;
    int many = 0;
    if (l->count > 1) many = 1;
    if (refresh == 0) {
        func_ov002_0215ee04(base);
        func_ov002_0215ef60(base);
    }
    func_0205de24((struct Struct0205de24 *) (base + RG(0xec8, 0xe20)), 0, 2);
    short s16 = 0, s14 = 0, s12 = 1, s10 = 1;
    func_ov002_02157030(base, RG(0x10, 0x11), &s16, &s14, &s12, &s10);
    s16    = s16 + s12;
    int id = ((struct FieldOv0215eadc *) (base + 0x1000))->field & 0xff;
    if (refresh != 0) id = RG(0x11, 0x12);
    if (func_0205d81c((struct Struct_0205d81c *) (base + RG(0xec8, 0xe20)), id) == 0) {
        func_ov002_0215be00(base, id, s16, s14);
        memset(((struct BufOv0215eadc *) (base + 0x1000))->buf, 0, RG(0x960, 0x800));
        func_ov002_0215ec4c(base, ((struct BufOv0215eadc *) (base + 0x1000))->buf, 0);
#if defined(jpn)
        func_0205d304(base + 0xe20, ((struct BufOv0215eadc *) (base + 0x1000))->buf, 0, 0, many, 1, 0);
#else
        func_0205d304(base + 0xec8, ((struct BufOv0215eadc *) (base + 0x1000))->buf, 0, 0, many, 1, 0, 0);
#endif
    }
    if (refresh == 0) {
        func_0205deb4((struct Struct_0205d81c *) (base + RG(0xec8, 0xe20)), RG(0x12, 0x13), 0);
        func_0205deb4((struct Struct_0205d81c *) (base + RG(0xec8, 0xe20)), RG(0x13, 0x14), 0);
    }
}
