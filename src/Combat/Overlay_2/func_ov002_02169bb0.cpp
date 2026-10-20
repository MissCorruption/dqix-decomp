#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct0205de24;
struct Struct_0205c570;
struct Obj_0205da38;
struct Obj0205eaa0;
struct Struct_0205d81c;
struct Struct_0205bcdc;
struct ShortArrays0204c610;
void FindAndLinkMatchingEntry0205de24(struct Struct0205de24 *obj, unsigned char keyLow,
                                                                        unsigned char keyHigh);
int GetActiveScaledSum0205d794(struct Struct_0205c570 *s);
int IsActiveElementFlag2Set0205da38(struct Obj_0205da38* obj, int key);
void DispatchWithShortB4_0205eaa0(struct Obj0205eaa0 *o, int a, int b);
int CheckFlagOrThreshold_02161b48(char *base, int a);
void SelectCoordsByFlag0x24_02012a84(unsigned char *p, int *x, int *y);
char *FindElementByC40205d81c(struct Struct_0205d81c *s, int key);
void GetFourShortsAtIndex(struct ShortArrays0204c610 *p, int idx, short *a, short *b, short *c, short *d);
void SetIndexIfValid0205bcdc(struct Struct_0205bcdc *s, int idx);
void SyncModeIfChanged0215b268(char *base);
extern "C" void func_0205bb04(void *p, int idx);
extern "C" void func_ov002_02161cf0(void *base);
extern "C" void func_ov002_02160c68(void *base);
extern "C" void func_ov002_02156e90(void *base);
extern "C" void func_ov002_0215b9a4(char *self, unsigned char key, int flag);
extern "C" unsigned char data_02114e54[];
extern "C" char data_02108760[];

// USA: func_ov002_02169bb0
extern "C" ARM void func_ov002_02169bb0(char *base) {
    int state = *(int *) (base + 0x1000 + RG(0xbc0, 0xa88));
    if (state == 0) {
        *(short *) (base + RG(0x1c00 + 0xe, 0x1a00 + 0xd6)) = 0;
        *(unsigned int *) (base + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
        FindAndLinkMatchingEntry0205de24((struct Struct0205de24 *) (base + RG(0x2c8 + 0xc00, 0xe20)), 0, 2);
        func_ov002_02161cf0(base);
        func_ov002_02160c68(base);
        *(int *) (base + 0x1000 + RG(0xbc0, 0xa88)) += 1;
    } else if (state == 1) {
        *(unsigned int *) (base + 0x2000 + RG(0x47c, 0x2ac)) |= 4;
        *(short *) (base + RG(0x1c00 + 0xe, 0x1a00 + 0xd6)) =
            GetActiveScaledSum0205d794((struct Struct_0205c570 *) (base + RG(0x2c8 + 0xc00, 0xe20)));
        unsigned char *vals[2];
        vals[0] = (unsigned char *) (base + RG(0x2c + 0x1c00, 0x2f4 + 0x1800));
        vals[1] = (unsigned char *) (base + RG(0x2d + 0x1c00, 0xf5 + 0x1a00));
        if (data_02114e54[0x55] != 0) {
            int tx, ty;
            short x0, y0, w, h;
            SelectCoordsByFlag0x24_02012a84(data_02114e54, &tx, &ty);
            char *e = FindElementByC40205d81c((struct Struct_0205d81c *) (base + RG(0x2c8 + 0xc00, 0xe20)), RG(0x23, 0x26));
            if (e != NULL) {
                short key = 3;
                for (unsigned char i = 0; i < 2; i++) {
                    for (unsigned char v = 1; v <= 5; v++) {
                        short ex = *(short *) (e + 0xac);
                        short ey = *(short *) (e + 0xae);
                        GetFourShortsAtIndex((struct ShortArrays0204c610 *) e, key++, &x0, &y0, &w, &h);
                        x0 += (short) (ex * 8);
                        y0 += (short) (ey * 8);
                        if (tx >= x0 && x0 + w > tx && ty >= y0 && y0 + h > ty) {
                            *(short *) (base + RG(0x1c00 + 0xe, 0x1a00 + 0xd6)) = i;
                            *vals[i]                         = v;
                            int sel                          = *(short *) (base + RG(0x1c00 + 0xe, 0x1a00 + 0xd6));
                            char *list                       = base + RG(0x2c8 + 0xc00, 0xe20);
                            SetIndexIfValid0205bcdc((struct Struct_0205bcdc *) (list + 4), sel);
                            func_0205bb04(list + 0x54, sel);
                            func_ov002_0215b9a4(base, RG(0x23, 0x26), 0);
                            SyncModeIfChanged0215b268(base);
                            return;
                        }
                    }
                }
            }
        } else {
            short sel = *(short *) (base + RG(0x1c00 + 0xe, 0x1a00 + 0xd6));
            if (sel != 2) {
                unsigned char *p = vals[sel];
                int d            = 0;
                if (g_keyManager.TestKeysPressed(0x20)) {
                    d = -1;
                } else if (g_keyManager.TestKeysPressed(0x10)) {
                    d = 1;
                }
                if (d != 0) {
                    *p += d;
                    if (*p == 0) *p = 1;
                    if (*p > 5) *p = 5;
                    func_ov002_0215b9a4(base, RG(0x23, 0x26), 0);
                    SyncModeIfChanged0215b268(base);
                    return;
                }
            }
        }
        int a = g_keyManager.TestKeysPressed(0x601);
        int b = IsActiveElementFlag2Set0205da38((struct Obj_0205da38*)(base + RG(0x2c8 + 0xc00, 0xe20)), 0x14);
        if (((a | b) ? 1 : 0) && *(short *) (base + RG(0x1c00 + 0xe, 0x1a00 + 0xd6)) == 2) {
            DispatchWithShortB4_0205eaa0((struct Obj0205eaa0 *) data_02108760, 1, 0);
            *(unsigned int *) (base + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
            func_ov002_02156e90(base);
        } else if (CheckFlagOrThreshold_02161b48(base, 1)) {
            *(unsigned int *) (base + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
            func_ov002_02156e90(base);
        }
    }
}
