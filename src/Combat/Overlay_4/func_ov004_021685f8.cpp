#if defined(jpn)
#define R(j,u) (j)
#define data_ov004_02170700 data_ov004_02170fa8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Obj020415b0 {
    char pad_00[0xcc];
    const char* animName;
    int animFlags;
};

struct Obj02040b2c {
    char pad_00[0x18];
    struct Obj020415b0* model;
};

extern "C" void* func_0203cf4c(void);
extern "C" void* func_0203df78(void* base, int key);
extern "C" void func_02040b2c(struct Obj02040b2c* self, int value);
extern "C" int func_020415b0(Obj020415b0*, int, int);

extern char data_ov004_02170700[];

// USA: func_ov004_021685f8
extern "C" ARM int func_ov004_021685f8(void) {
    struct Obj02040b2c* entry = (struct Obj02040b2c*)func_0203df78(func_0203cf4c(), 0x67);
    if (entry) {
        func_02040b2c(entry, 0);
        entry->model->animFlags = 1;
        func_020415b0(entry->model, (int)data_ov004_02170700, 1);
    }
    return 0;
}
