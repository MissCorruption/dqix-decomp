#include <globaldefs.h>

struct Point16_02226108 { unsigned short x, y; };
struct PointPair16_02226108 { unsigned short x, y, x2, y2; };

extern "C" ARM void func_ov031_0223cb34(Point16_02226108*, Point16_02226108*, PointPair16_02226108*);
extern "C" ARM int func_ov031_0223d5ac(PointPair16_02226108*);
extern "C" ARM void func_ov031_022269d8(void);

extern PointPair16_02226108 data_ov031_022493b8;

struct StatusStruct_02226108 {
    unsigned char pad[0x60];
    unsigned char f60;
    signed char f61;
    unsigned char pad2[1];
    unsigned char f63;
};
extern StatusStruct_02226108* data_ov031_02250c00;

extern Point16_02226108 data_ov031_02248cda[10];
extern Point16_02226108 data_ov031_02248c88;
extern Point16_02226108 data_ov031_02248cb0[2];
extern Point16_02226108 data_ov031_02248c90;
extern Point16_02226108 data_ov031_02248cb8[2];
extern Point16_02226108 data_ov031_02248c94;

extern unsigned char data_ov031_02248d74[10];
extern unsigned char data_ov031_02248c84[2];
extern unsigned char data_ov031_02248c80[2];

// USA: func_ov031_02226108  (semantic: ResolveRangeTableMatch)
extern "C" ARM void func_ov031_02226108() {
    data_ov031_02250c00->f60 = 0;
    if (!func_ov031_0223d5ac(&data_ov031_022493b8)) return;
    PointPair16_02226108 buf;
    int i;
    for (i = 0; i < 10; i++) {
        func_ov031_0223cb34(&data_ov031_02248cda[i], &data_ov031_02248c88, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            StatusStruct_02226108* p = data_ov031_02250c00;
            if (p->f61 != i) return;
            p->f60 = data_ov031_02248d74[i];
            data_ov031_02250c00->f63 = i;
            func_ov031_022269d8();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov031_0223cb34(&data_ov031_02248cb0[i], &data_ov031_02248c90, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            StatusStruct_02226108* p = data_ov031_02250c00;
            if (p->f61 != i + 10) return;
            p->f60 = data_ov031_02248c84[i];
            data_ov031_02250c00->f63 = i + 10;
            func_ov031_022269d8();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov031_0223cb34(&data_ov031_02248cb8[i], &data_ov031_02248c94, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            StatusStruct_02226108* p = data_ov031_02250c00;
            if (p->f61 != i + 12) return;
            p->f60 = data_ov031_02248c80[i];
            data_ov031_02250c00->f63 = i + 12;
            func_ov031_022269d8();
            return;
        }
    }
}
