#include <globaldefs.h>
#include "std_library_functions.h"

struct Obj02069ed4 { void* dest; };

// USA: func_02069ed4
extern "C" ARM int func_02069ed4(struct Obj02069ed4* obj) {
    void* d = obj->dest;
    unsigned short v = 0xff14;
    memcpy(d, &v, 2);
    return 2;
}
