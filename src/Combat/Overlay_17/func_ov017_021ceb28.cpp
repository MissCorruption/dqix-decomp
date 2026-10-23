#include <globaldefs.h>

extern "C" void* func_020e2ff8(void);
extern "C" int func_0202c508(void*);
extern "C" void func_020e321c(void*, int, int);
extern "C" void func_020e33b4(void*, int, int);

struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);

struct Entry020e3054 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
};
extern "C" struct Entry020e3054* func_020e3054(struct Entry020e3054* list, int key);

struct LocalEvt021ceb28 {
    unsigned char pad0[4];
    unsigned char field4;
    unsigned char field5;
    unsigned char pad1;
    unsigned char field7;
};

// USA: func_ov017_021ceb28
extern "C" ARM void func_ov017_021ceb28(int count, struct LocalEvt021ceb28* evt, int unused2, int unused3, struct SearchStruct0202c1a4* extra) {
    void* obj = func_020e2ff8();
    int inBattle = func_0202c508(extra);
    if (inBattle != 0 && count > 0) {
        if (evt->field4 != 0) {
            func_020e321c(obj, evt->field5, evt->field7);
        } else {
            func_020e33b4(obj, evt->field5, evt->field7);
        }
        return;
    }
    if (count != 0) return;
    signed char val = func_0202c1a4(extra);
    if (evt->field7 != val) return;
    struct Entry020e3054* entry = func_020e3054((struct Entry020e3054*)obj, evt->field5);
    if (entry == NULL) return;
    if (evt->field4 != 0) {
        entry->f2 = 1;
    } else {
        entry->f2 = 3;
    }
}
