#if defined(jpn)
#define func_ov014_021885bc func_ov014_0218948c
#endif

#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

extern "C" void func_02080bac(void* obj, int id);
extern "C" void func_0208065c(void* obj, int id);
struct Container02080f8c;
extern "C" void func_02080f8c(struct Container02080f8c* obj, int id, int value);
struct Container02080fa8;
extern "C" void func_02080fa8(struct Container02080fa8* obj, int id, int value);
extern "C" void func_020806b0(void* obj, int id);
extern "C" void func_02080b2c(void* obj, int id);
extern "C" void func_02081130(void* obj, int id, int flag);
extern "C" int func_020813ec(void* obj, int id);
struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
struct ListHeadStruct021874f8;
extern "C" short func_ov014_021874f8(struct ListHeadStruct021874f8* obj);
struct S02187520;
extern "C" short func_ov014_02187520(struct S02187520* s);

struct SubEntry021885bc {
    struct SubEntry021885bc* next;
    char pad4[4];
    int field8;
    char pad12[0x13 - 0xc];
    unsigned char pad13 : 1;
    unsigned char flagBit1 : 1;
};

// USA: func_ov014_021885bc
extern "C" ARM void func_ov014_021885bc(void* self) {
    void* list = *(void**)((char*)self + 0xc0);
    short val = *(short*)((char*)self + 0x176);
    *(short*)((char*)list + LOW_REGION(0x2a, 0x36)) = val;
    func_02080bac(list, 5);
    func_0208065c(list, 5);

    struct SubEntry021885bc* node = *(struct SubEntry021885bc**)((char*)self + 0xbc);
    short id = 0x1b;
    short count = 0;
    for (; count < 0x10; id++, count++) {
        if (node != NULL) {
            int v = func_020e0434((struct Container020e0310*)((char*)self + 0xe0), 0x15);
            func_02080f8c((struct Container02080f8c*)list, id, v);
            if (node->flagBit1) {
                func_02080f8c((struct Container02080f8c*)*(void**)((char*)self + 0xc0), id, node->field8);
            }
            node = node->next;
        } else {
            func_020806b0(list, id);
            func_02080b2c(list, id);
        }
    }

    short listCount = func_ov014_021874f8((struct ListHeadStruct021874f8*)self);
    short idx = (short)(func_ov014_02187520((struct S02187520*)self) + 1);
    func_02080fa8((struct Container02080fa8*)list, 0x2b, idx);
    short page = (short)((listCount + 0xf) / 0x10);
    func_02080fa8((struct Container02080fa8*)list, 0x2d, page);
    int overflow = (listCount > 0x10) ? 1 : 0;
    func_02081130(list, 5, overflow);
    func_020813ec(list, 5);
}
