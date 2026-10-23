#include <globaldefs.h>

struct ResetStruct_39ee8;
extern "C" void func_02039ee8(struct ResetStruct_39ee8* s);

struct Entry0203a588 {
    char pad0[5];
    signed char flag;
    char pad1[18];
};

struct Obj0203a588 {
    char pad0[0x550];
    struct Entry0203a588 entries[16];
};

// USA: func_0203a588
extern "C" ARM void func_0203a588(struct Obj0203a588* obj) {
    int i;
    for (i = 0; i < 16; i++) {
        if (obj->entries[i].flag < 0x23) {
            func_02039ee8((struct ResetStruct_39ee8*)&obj->entries[i]);
        }
    }
}
