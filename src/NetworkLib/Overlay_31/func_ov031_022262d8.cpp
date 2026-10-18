#include <globaldefs.h>

struct Point16 { unsigned short x, y; };
struct Rectangle16 { unsigned short x, y, x2, y2; };
extern Rectangle16 data_ov031_022493b8;
extern "C" void func_ov031_0223cb34(Point16*, Point16*, Rectangle16*);
extern "C" void func_ov031_02236878(int);

struct RepeatInputState {
    char pad_00[0x60];
    unsigned char action;
    signed char selection;
    char pad_62[3];
    unsigned char repeat;
    unsigned char held;
};
extern RepeatInputState* data_ov031_02250c00;
extern Point16 data_ov031_02248cda[10];
extern Point16 data_ov031_02248c88;
extern Point16 data_ov031_02248cb0[2];
extern Point16 data_ov031_02248c90;
extern Point16 data_ov031_02248cb8[2];
extern Point16 data_ov031_02248c94;
extern "C" int func_ov031_0223d414(Rectangle16*);
extern "C" void func_ov031_022264c8(int);

// USA: func_ov031_022262d8
extern "C" ARM void func_ov031_022262d8() {
    Rectangle16 bounds;
    if (func_ov031_0223d414(&data_ov031_022493b8)) {
        {
            Point16* extent;
            int index;
            Point16* origin;
            origin = data_ov031_02248cda;
            extent = &data_ov031_02248c88;
            index = 0;
            do {
                func_ov031_0223cb34(origin, extent, &bounds);
                if (func_ov031_0223d414(&bounds)) {
                    if (data_ov031_02250c00->selection != index) goto reset;
                    func_ov031_022264c8(index);
                    goto clear;
                }
                ++index; ++origin;
            } while (index < 10);
        }
        {
            Point16* extent;
            Point16* origin;
            int index;
            origin = data_ov031_02248cb0;
            extent = &data_ov031_02248c90;
            index = 0;
            do {
                func_ov031_0223cb34(origin, extent, &bounds);
                if (func_ov031_0223d414(&bounds)) {
                    if (data_ov031_02250c00->selection != index + 10) goto reset;
                    func_ov031_022264c8(index + 10);
                    if (index != 0) goto clear;
                    ++data_ov031_02250c00->repeat;
                    if (data_ov031_02250c00->repeat < 40) return;
                    if (!data_ov031_02250c00->held) {
                        func_ov031_02236878(9);
                        data_ov031_02250c00->selection = -1;
                        return;
                    }
                    data_ov031_02250c00->action = 16;
                    data_ov031_02250c00->repeat -= 7;
                    return;
                }
                ++index; ++origin;
            } while (index < 2);
        }
        {
            Point16* extent;
            Point16* origin;
            int index;
            origin = data_ov031_02248cb8;
            extent = &data_ov031_02248c94;
            index = 0;
            do {
                func_ov031_0223cb34(origin, extent, &bounds);
                if (func_ov031_0223d414(&bounds)) {
                    if (data_ov031_02250c00->selection != index + 12) goto reset;
                    func_ov031_022264c8(index + 12);
                    goto clear;
                }
                ++index; ++origin;
            } while (index < 2);
        }
    }
reset:
    func_ov031_022264c8(-1);
clear:
    data_ov031_02250c00->repeat = 0;
}
