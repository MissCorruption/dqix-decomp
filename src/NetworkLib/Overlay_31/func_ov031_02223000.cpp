#include <globaldefs.h>

struct Obj0223bcc8;
struct Selection02223000 {
    Obj0223bcc8* entries[4];
    void* task;
    unsigned short timer;
    signed char selected;
    unsigned char type;
    unsigned char busy;
};
struct Point02223000 { unsigned short x, y; };
struct Bounds02223000 { unsigned short x, y, x2, y2; };
struct Style02223000 { unsigned short first, second; };
extern Selection02223000* data_ov031_02250ba8;
extern unsigned char data_ov031_02248940[];
extern Point02223000 data_ov031_0224891c[];
extern unsigned char data_ov031_02248932[][2];
extern Point02223000 data_ov031_02248918;
extern unsigned char data_ov031_02248924[][2];
extern Style02223000 data_ov031_0224891e[];
extern "C" void func_ov031_0223cb34(Point02223000*, Point02223000*, Bounds02223000*);
extern "C" int func_ov031_0223d49c(Bounds02223000*);
extern "C" void* func_ov031_0223baa0(Obj0223bcc8*, int);
extern "C" void func_ov031_0223bdb0(int, int, void*);
extern "C" void func_ov031_0223bbd8(Obj0223bcc8*, int, int, int);
extern "C" void func_ov031_0223bcc8(Obj0223bcc8*, int, int);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02223268();

// USA: func_ov031_02223000
extern "C" ARM void func_ov031_02223000() {
    int count = data_ov031_02248940[data_ov031_02250ba8->type];
    if (data_ov031_02250ba8->busy) goto reset;
    {
        if (data_ov031_02250ba8->selected != -1) return;
        int i = 0;
        if (count > 0) do {
            Bounds02223000 bounds;
            func_ov031_0223cb34(&data_ov031_0224891c[data_ov031_02248932[data_ov031_02250ba8->type][i]], &data_ov031_02248918, &bounds);
            if (func_ov031_0223d49c(&bounds)) {
                if (data_ov031_02250ba8->task) break;
                int id = data_ov031_02248924[data_ov031_02250ba8->type][i];
                func_ov031_0223bdb0(0, id + 1, func_ov031_0223baa0(data_ov031_02250ba8->entries[i], 0));
                int style = data_ov031_02248932[data_ov031_02250ba8->type][i];
                func_ov031_0223bbd8(data_ov031_02250ba8->entries[i], -1, data_ov031_0224891c[style].x, data_ov031_0224891e[style].first);
                func_ov031_0223bcc8(data_ov031_02250ba8->entries[i], -1, 1);
                data_ov031_02250ba8->task = func_ov031_0223e218(0, (void*)func_ov031_02223268, 0, 0x6e);
                data_ov031_02250ba8->selected = i;
                return;
            }
            i++;
        } while (i < count);
    }
reset:
    data_ov031_02250ba8->selected = -1;
}
