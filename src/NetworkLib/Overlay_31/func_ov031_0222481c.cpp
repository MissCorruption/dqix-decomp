#include <globaldefs.h>

struct Point0222481c { unsigned short x, y; };
struct Rectangle0222481c { unsigned short x, y, right, bottom; };
struct MenuContext0222481c {
    char padding_0[0x11c];
    unsigned char feedback;
    char padding_11d;
    signed char selection;
    char padding_11f[3];
    unsigned char repeatCount;
    unsigned char alternate;
};
extern MenuContext0222481c* data_ov031_02250bfc;
extern Rectangle0222481c data_ov031_022493b8;
extern Point0222481c data_ov031_02248a0c[47];
extern Point0222481c data_ov031_022489c8;
extern Point0222481c data_ov031_022489fc[2];
extern Point0222481c data_ov031_022489ec[2];
extern Point0222481c data_ov031_022489dc[2];
extern Point0222481c data_ov031_022489c4;
extern "C" int func_ov031_0223d414(Rectangle0222481c*);
extern "C" void func_ov031_0223cb34(Point0222481c*, Point0222481c*, Rectangle0222481c*);
extern "C" void func_ov031_02224a20(int);
extern "C" void func_ov031_02236878(int);

// USA: func_ov031_0222481c
extern "C" ARM void func_ov031_0222481c() {
    Rectangle0222481c rectangle;
    if (!func_ov031_0223d414(&data_ov031_022493b8)) goto clear;
    {
        int i = 0;
        Point0222481c* point = data_ov031_02248a0c;
        do {
            func_ov031_0223cb34(point, &data_ov031_022489c8, &rectangle);
            if (func_ov031_0223d414(&rectangle)) {
                if (data_ov031_02250bfc->selection != i) goto clear;
                func_ov031_02224a20(i);
                goto reset;
            }
            i++;
            point++;
        } while (i < 47);
    }
    {
        Point0222481c* extent = data_ov031_022489fc;
        Point0222481c* point = data_ov031_022489ec;
        int i = 2;
        do {
            func_ov031_0223cb34(point, extent, &rectangle);
            if (func_ov031_0223d414(&rectangle)) {
                if (data_ov031_02250bfc->selection != i + 47) goto clear;
                func_ov031_02224a20(i + 47);
                if (i != 3) return;
                data_ov031_02250bfc->repeatCount++;
                if (data_ov031_02250bfc->repeatCount < 40) return;
                if (!data_ov031_02250bfc->alternate) {
                    func_ov031_02236878(9);
                    data_ov031_02250bfc->selection = -1;
                    return;
                }
                data_ov031_02250bfc->feedback = 0x80;
                data_ov031_02250bfc->repeatCount -= 7;
                return;
            }
            i++;
            extent++;
            point++;
        } while (i < 4);
    }
    {
        Point0222481c* point = data_ov031_022489dc;
        int i = 0;
        do {
            func_ov031_0223cb34(point, &data_ov031_022489c4, &rectangle);
            if (func_ov031_0223d414(&rectangle)) {
                if (data_ov031_02250bfc->selection != i + 51) goto clear;
                func_ov031_02224a20(i + 51);
                goto reset;
            }
            i++;
            point++;
        } while (i < 2);
    }
clear:
    func_ov031_02224a20(-1);
reset:
    data_ov031_02250bfc->repeatCount = 0;
}
