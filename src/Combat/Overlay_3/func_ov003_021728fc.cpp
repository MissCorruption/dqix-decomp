#include <globaldefs.h>
#include "Resource/Brightness.h"

#if defined(jpn)
enum { kRegionValueEC_E8 = 0xe8 };
enum { kRegionValue120_12C = 0x12c };
enum { kRegionValueEF_EB = 0xeb };
enum { kRegionValueFA_108 = 0x108 };
enum { kRegionValue3C9_139 = 0x139 };
#else
enum { kRegionValueEC_E8 = 0xec };
enum { kRegionValue120_12C = 0x120 };
enum { kRegionValueEF_EB = 0xef };
enum { kRegionValueFA_108 = 0xfa };
enum { kRegionValue3C9_139 = 0x3c9 };
#endif

extern "C" int func_020421a0();

extern "C" int func_020ac4f8(int commit);
struct MainBgControlBackup02074af4;
extern "C" ARM void func_02074af4(struct MainBgControlBackup02074af4* obj);
extern "C" void func_020c5588(int color, int alpha, int depth, int polygonId, int fogEnable);
extern "C" int* func_020936f8(void);
extern "C" void func_020941b0(struct Obj020941b0* p);
extern "C" void func_020939dc(void* obj);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);

struct S021728fc {
    char pad_0[kRegionValueEC_E8];
    unsigned char field_ec;
    unsigned char pad_ed;
    unsigned char field_ee;
    char pad_ef[kRegionValue120_12C - kRegionValueEF_EB];
    int field_120;
};

// USA: func_ov003_021728fc
extern "C" ARM void func_ov003_021728fc(S021728fc* obj) {
    GameResources* field4 = GetGameResources();
    if (obj->field_ee != 0) return;

    func_020ac4f8(0);
#if defined(jpn)
    *(int*)((char*)obj + 0xf0) = *(int*)(func_020421a0() + 0x28);
#endif
    func_02074af4((struct MainBgControlBackup02074af4*)((char*)obj + kRegionValueFA_108));

    volatile unsigned int* dispcnt = (volatile unsigned int*)0x4000000;
    unsigned int v = (*dispcnt & 0x1f00) >> 8;
    obj->field_120 = v;
    unsigned int mask = 4;
    *dispcnt = (*dispcnt & ~0x1f00) | 0x1300;

    volatile unsigned short* bg = (volatile unsigned short*)((char*)dispcnt + 8);
    bg[0] = bg[0] & ~3;
    bg[1] = (bg[1] & ~3) | 1;
    bg[2] = (bg[2] & ~3) | 2;
    bg[3] = (bg[3] & ~3) | 3;
    bg[1] = (bg[1] & 0x43) | 0xf00;

    SetFlags00(field4, mask);
    SetFlags04(field4, 0x8de);

    func_020c5588(0, 0, 0x7fff, 0, 0);

    int* g = func_020936f8();
    func_020941b0((struct Obj020941b0*)g);
    ((unsigned char*)g)[kRegionValue3C9_139] = (((unsigned char*)g)[kRegionValue3C9_139] & ~1) | 1;
    func_020939dc(g);

    func_020466e4((unsigned int*)func_020d6c00(), 0x1000);

    obj->field_ec = 1;
    obj->field_ee = 0;
}
