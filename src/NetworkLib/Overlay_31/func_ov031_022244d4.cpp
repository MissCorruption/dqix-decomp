#include <globaldefs.h>

struct Point16_022244d4 { unsigned short x, y; };
struct PointPair16_022244d4 { unsigned short x, y, x2, y2; };

extern "C" void func_ov031_0223cb34(Point16_022244d4*, Point16_022244d4*, PointPair16_022244d4*);
extern "C" int func_ov031_0223d5ac(PointPair16_022244d4*);
extern "C" void func_ov031_02224f20(int);
extern "C" void func_ov031_0222506c(void);
extern "C" void func_ov031_022247bc(void);
extern "C" void func_ov031_022247ec(void);

struct EntityStruct022244d4 {
    unsigned char pad[0x11c];
    unsigned char field11c;
    unsigned char field11d;
    signed char field11e;
    unsigned char pad2[0x121 - 0x11f];
    signed char field121;
};
extern EntityStruct022244d4* data_ov031_02250bfc;

extern PointPair16_022244d4 data_ov031_022493b8;
extern Point16_022244d4 data_ov031_02248a0c[47];
extern Point16_022244d4 data_ov031_022489c8;
extern unsigned char* data_ov031_0224b424[];
extern Point16_022244d4 data_ov031_022489ec[2];
extern Point16_022244d4 data_ov031_022489fc[2];
extern unsigned char data_ov031_02248a04[];
extern Point16_022244d4 data_ov031_022489dc[2];
extern Point16_022244d4 data_ov031_022489c4;
extern unsigned char data_ov031_022489b8[];
extern Point16_022244d4 data_ov031_022489e4;
extern Point16_022244d4 data_ov031_022489f4;
extern Point16_022244d4 data_ov031_022489e8;
extern Point16_022244d4 data_ov031_022489f8;

// USA: func_ov031_022244d4
extern "C" ARM void func_ov031_022244d4(void) {
    data_ov031_02250bfc->field11c = 0;
    if (!func_ov031_0223d5ac(&data_ov031_022493b8)) return;
    PointPair16_022244d4 buf;
    int i;
    for (i = 0; i < 47; i++) {
        func_ov031_0223cb34(&data_ov031_02248a0c[i], &data_ov031_022489c8, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            EntityStruct022244d4* p = data_ov031_02250bfc;
            if (p->field11e != i) return;
            p->field11c = data_ov031_0224b424[p->field11d][i];
            if (data_ov031_02250bfc->field11d == 1) {
                func_ov031_02224f20(0);
            }
            data_ov031_02250bfc->field121 = i;
            func_ov031_0222506c();
            return;
        }
    }
    Point16_022244d4* b = data_ov031_022489fc;
    Point16_022244d4* t = data_ov031_022489ec;
    for (i = 2; i < 4; i++, b++, t++) {
        func_ov031_0223cb34(t, b, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            EntityStruct022244d4* p = data_ov031_02250bfc;
            if (p->field11e != i + 47) return;
            p->field11c = data_ov031_02248a04[i];
            if (data_ov031_02250bfc->field11d == 1) {
                func_ov031_02224f20(0);
            }
            data_ov031_02250bfc->field121 = i + 47;
            func_ov031_0222506c();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov031_0223cb34(&data_ov031_022489dc[i], &data_ov031_022489c4, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            EntityStruct022244d4* p = data_ov031_02250bfc;
            if (p->field11e != i + 51) return;
            p->field11c = data_ov031_022489b8[i];
            data_ov031_02250bfc->field121 = i + 51;
            func_ov031_0222506c();
            return;
        }
    }
    func_ov031_0223cb34(&data_ov031_022489e4, &data_ov031_022489f4, &buf);
    if (func_ov031_0223d5ac(&buf)) {
        if (data_ov031_02250bfc->field11e != 47) return;
        func_ov031_022247bc();
        data_ov031_02250bfc->field121 = 47;
        func_ov031_0222506c();
        return;
    }
    func_ov031_0223cb34(&data_ov031_022489e8, &data_ov031_022489f8, &buf);
    if (!func_ov031_0223d5ac(&buf)) return;
    if (data_ov031_02250bfc->field11e != 48) return;
    func_ov031_022247ec();
    data_ov031_02250bfc->field121 = 48;
    func_ov031_0222506c();
}
