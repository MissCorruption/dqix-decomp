#include <globaldefs.h>

struct Point16 { unsigned short x, y; };
struct Rectangle16 { unsigned short x, y, x2, y2; };
extern Rectangle16 data_ov031_022493b8;
extern "C" void func_ov031_0223cb34(Point16*, Point16*, Rectangle16*);
extern "C" void func_ov031_02236878(int);

struct MenuSelectionState {
    char pad_00[0x11e];
    signed char selection;
    char pad_11f[4];
    unsigned char mode;
    unsigned char enabled;
};
extern MenuSelectionState* data_ov031_02250bfc;
extern Point16 data_ov031_02248a0c[47];
extern Point16 data_ov031_022489c8;
extern Point16 data_ov031_022489f4[4];
extern Point16 data_ov031_022489e4[4];
extern int data_ov031_0224b43c[4];
extern Point16 data_ov031_022489dc[2];
extern Point16 data_ov031_022489c4;
extern "C" int func_ov031_0223d49c(Rectangle16*);

// USA: func_ov031_022242ec
extern "C" ARM void func_ov031_022242ec() {
    Rectangle16 bounds;
    if (!func_ov031_0223d49c(&data_ov031_022493b8)) return;
    data_ov031_02250bfc->selection = -1;
    {
        Point16* extent;
        Point16* origin;
        int index;
        origin = data_ov031_02248a0c;
        extent = &data_ov031_022489c8;
        index = 0;
        do {
            func_ov031_0223cb34(origin, extent, &bounds);
            if (func_ov031_0223d49c(&bounds)) {
                if (!data_ov031_02250bfc->enabled) {
                    func_ov031_02236878(9);
                    return;
                }
                func_ov031_02236878(0);
                data_ov031_02250bfc->selection = index;
                return;
            }
            ++index; ++origin;
        } while (index < 47);
    }
    {
        Point16* extent;
        Point16* origin;
        int index;
        extent = data_ov031_022489f4;
        origin = data_ov031_022489e4;
        index = 0;
        do {
            func_ov031_0223cb34(origin, extent, &bounds);
            if (func_ov031_0223d49c(&bounds)) {
                if (index == 3) {
                    if (!data_ov031_02250bfc->mode) goto error;
                }
                if (index == 2) {
                    if (!data_ov031_02250bfc->enabled) goto error;
                }
                goto accepted;
error:
                func_ov031_02236878(9);
                return;
accepted:
                func_ov031_02236878(data_ov031_0224b43c[index]);
                data_ov031_02250bfc->selection = index + 47;
                return;
            }
            ++index; ++extent; ++origin;
        } while (index < 4);
    }
    {
        Point16* extent;
        Point16* origin;
        int index;
        origin = data_ov031_022489dc;
        extent = &data_ov031_022489c4;
        index = 0;
        do {
            func_ov031_0223cb34(origin, extent, &bounds);
            if (func_ov031_0223d49c(&bounds)) {
                func_ov031_02236878(0);
                data_ov031_02250bfc->selection = index + 51;
                return;
            }
            ++index; ++origin;
        } while (index < 2);
    }
}

