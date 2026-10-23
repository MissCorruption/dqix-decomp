#include <globaldefs.h>

struct FlagObj02211754 { char pad[0x20]; unsigned int flags; };

// USA: func_ov031_02211754
extern "C" ARM void func_ov031_02211754(FlagObj02211754 *obj) {
    obj->flags |= 1;
}
