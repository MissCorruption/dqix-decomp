#include <globaldefs.h>

struct Obj_02184bd8 { char pad[0x1c8]; int field1c8; };

// USA: func_ov011_02184bd8
extern "C" ARM int func_ov011_02184bd8(struct Obj_02184bd8* obj) {
    return obj->field1c8;
}
