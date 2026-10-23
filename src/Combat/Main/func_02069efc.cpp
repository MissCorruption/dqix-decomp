#include <globaldefs.h>
#include "std_library_functions.h"

struct Obj02069efc { void* dest; };

// USA: func_02069efc
extern "C" ARM int func_02069efc(struct Obj02069efc* obj) {
    void* d = obj->dest;
    unsigned short v = 0xff15;
    memcpy(d, &v, 2);
    return 2;
}
