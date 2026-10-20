#include "std_library_functions.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_ov002_02157030 func_ov002_021586b0
#endif

extern "C" void func_ov002_02157030(void *base, int type, short *a, short *b, short *c, short *d);
extern "C" void func_ov002_0215be00(void *base, int a, int b, int c);
extern "C" void func_ov002_0215c988(void *base, void *dst, int flag);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_0205d304(void *a, void *b, int p2, int p3, int p4, int p5, int p6);
#else
#define RG(u, j) (u)
extern "C" void func_0205d304(void *a, void *b, int p2, int p3, int p4, int p5, int p6, int p7);
#endif

struct BufOv0215c8a4 {
    char pad[RG(0xbd0, 0xa98)];
    void *buf;
};
struct CountOv0215c8a4 {
    char pad[0x58];
    int count;
};

// USA: func_ov002_0215c8a4
extern "C" ARM void func_ov002_0215c8a4(char *base) {
    struct CountOv0215c8a4 *l = (struct CountOv0215c8a4 *) (base + RG(0x2c8 + 0xc00, 0xe20)) + 1;
    l--;
    int flag = 0;
    if (l->count > 1) {
        flag = 1;
    }
    short s16 = 0, s14 = 0, s12 = 1, s10 = 1;
    func_ov002_02157030(base, 4, &s16, &s14, &s12, &s10);
    s16 = s16 + s12;
    func_ov002_0215be00(base, 5, s16, 1);

    memset(((struct BufOv0215c8a4 *) (base + 0x1000))->buf, 0, RG(0x960, 0x800));
    func_ov002_0215c988(base, ((struct BufOv0215c8a4 *) (base + 0x1000))->buf, 0);

#if defined(jpn)
    func_0205d304(base + 0xe20, ((struct BufOv0215c8a4 *) (base + 0x1000))->buf, 0, 0, flag, 1, 0);
#else
    func_0205d304(base + 0xec8, ((struct BufOv0215c8a4 *) (base + 0x1000))->buf, 0, 0, flag, 1, 0, 0);
#endif
}
