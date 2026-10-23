#include <globaldefs.h>

struct Obj_021849bc { char pad[0x114]; int field114; };

// USA: func_ov011_021849bc
extern "C" ARM int func_ov011_021849bc(struct Obj_021849bc* obj, int mask) {
    return obj->field114 & mask;
}
