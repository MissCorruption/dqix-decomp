#include <globaldefs.h>

struct Obj020415b0 {
    char pad[0xd0];
    int field_d0;
};

struct Obj02040b2c {
    char pad[0x18];
    struct Obj020415b0* field18;
};

extern "C" void* func_0203cf4c(void);
extern "C" void* func_0203df78(void* base, int key);
extern "C" void func_02040b2c(struct Obj02040b2c* self, int value);
extern "C" int func_020415b0(Obj020415b0*, int, int);

extern char data_ov004_021706f4[];

// USA: func_ov004_021684d4
extern "C" ARM int func_ov004_021684d4(void) {
    struct Obj02040b2c* entry = (struct Obj02040b2c*)func_0203df78(func_0203cf4c(), 0x67);
    if (!entry) {
        return 0;
    }
    if (entry->field18) {
        func_02040b2c(entry, 0);
        entry->field18->field_d0 = 1;
        func_020415b0(entry->field18, (int)data_ov004_021706f4, 1);
    }
    return 0;
}
