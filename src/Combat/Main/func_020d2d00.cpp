#include <globaldefs.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct Info020d2d00 {
    int a;
    int b;
};

// USA: func_020d2d00
extern "C" ARM int func_020d2d00(void *listp, void *outp, void *infop) {
    u8 *lb = (u8 *)listp;
    u32 *lp = (u32 *)listp;
    u8 *ob = (u8 *)outp;
    u16 *o = (u16 *)outp;
    struct Info020d2d00 *info = (struct Info020d2d00 *)infop;
    u32 val;
    int kind;
    u32 off;
    u8 *p;
    u16 *s;
    u16 t0;
    u16 t1;

    if ((u32)info->a < lp[14]) {
        do {
            val = *(u32 *)((u8 *)lb + 4 * info->a + 0x3c);
            kind = val & 0xff;
            off = val >> 8;
            ob[0] = (u8)val;

            switch (kind) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                s = (u16 *)(lb + off);
                t0 = s[0];
                t1 = s[1];
                o[1] = t0;
                o[2] = t1;
                t0 = s[2];
                t1 = s[3];
                o[3] = t0;
                o[4] = t1;
                o[5] = s[4];
                info->a++;
                return 1;

            case 16:
                p = lb + off;
                while ((u32)info->b < (u32)(p[1] - p[0]) + 1) {
                    s = (u16 *)(p + info->b * 12);
                    t0 = s[1];
                    t1 = s[2];
                    o[0] = t0;
                    o[1] = t1;
                    t0 = s[3];
                    t1 = s[4];
                    o[2] = t0;
                    o[3] = t1;
                    t0 = s[5];
                    t1 = s[6];
                    o[4] = t0;
                    o[5] = t1;
                    info->b++;
                    return 1;
                }
                break;

            case 17:
                p = lb + off;
                while ((u32)info->b < 8) {
                    if (p[info->b] == 0) {
                        break;
                    }
                    s = (u16 *)(p + info->b * 12);
                    t0 = s[4];
                    t1 = s[5];
                    o[0] = t0;
                    o[1] = t1;
                    t0 = s[6];
                    t1 = s[7];
                    o[2] = t0;
                    o[3] = t1;
                    t0 = s[8];
                    t1 = s[9];
                    o[4] = t0;
                    o[5] = t1;
                    info->b++;
                    return 1;
                }
                break;

            default:
                break;
            }

            info->a++;
            info->b = 0;
        } while ((u32)info->a < lp[14]);
    }

    return 0;
}
