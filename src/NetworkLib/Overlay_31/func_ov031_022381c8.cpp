#include <globaldefs.h>

struct Context022381c8 {
    void* cellWin;
    void* cellChar;
    void* button[2];
    void* canvas;
    void* task;
    unsigned short countWait;
    signed char count;
    signed char input;
    unsigned char type;
    unsigned char wait;
    bool dark;
};
struct Coord022381c8 { unsigned short x, y; };
struct FourShorts_0223cb1c { unsigned short l; unsigned short t; unsigned short r; unsigned short b; };
extern Context022381c8* data_ov031_02290d10;
extern const Coord022381c8 data_ov031_02249334[6];
extern unsigned char data_ov031_02249394[];
extern unsigned char data_ov031_022492ea[][2];
extern Coord022381c8 data_ov031_02249364[][2];
extern const Coord022381c8 data_ov031_0224934c[6];
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_02238370(void*, int);
extern "C" void func_ov031_0223cb1c(int, int, int, int, FourShorts_0223cb1c*);
extern "C" void func_ov031_0223cc18(int, int, const FourShorts_0223cb1c*);

// USA: func_ov031_022381c8
extern "C" ARM void func_ov031_022381c8(int y) {
    FourShorts_0223cb1c rectangle;
    int y0, y1;
    int i;
    func_ov031_0223bbd8(data_ov031_02290d10->cellWin, -1,
        data_ov031_02249334[data_ov031_02290d10->type].x, y);
    func_ov031_0223bbd8(data_ov031_02290d10->cellChar, -1,
        data_ov031_02249334[data_ov031_02290d10->type].x + 8, y + 8);
    func_ov031_02238370(data_ov031_02290d10->cellWin, y);
    func_ov031_02238370(data_ov031_02290d10->cellChar, y);
    for (i = 0; i < data_ov031_02249394[data_ov031_02290d10->type]; ++i) {
        func_ov031_0223bbd8(data_ov031_02290d10->button[i], -1,
            data_ov031_02249364[data_ov031_02290d10->type][data_ov031_022492ea[data_ov031_02290d10->type][i]].x,
            y + data_ov031_02249364[data_ov031_02290d10->type][data_ov031_022492ea[data_ov031_02290d10->type][i]].y
                - data_ov031_02249334[data_ov031_02290d10->type].y);
        func_ov031_02238370(data_ov031_02290d10->button[i], y);
    }
    y0 = y & 0xff;
    if (y0 >= 192) {
        y0 = y1 = 0;
    } else {
        y1 = y0 + data_ov031_0224934c[data_ov031_02290d10->type].y;
    }
    if (y1 > 192) y1 = 192;
    func_ov031_0223cb1c(data_ov031_02249334[data_ov031_02290d10->type].x,
        y0, data_ov031_02249334[data_ov031_02290d10->type].x
            + data_ov031_0224934c[data_ov031_02290d10->type].x, y1, &rectangle);
    func_ov031_0223cc18(0, 0, &rectangle);
}
