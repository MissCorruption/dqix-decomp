#include <globaldefs.h>
#include "std_library_functions.h"

struct Obj02069dbc { void* dest; };

// USA: func_02069dbc
extern "C" ARM int func_02069dbc(struct Obj02069dbc* obj) {
    void* d = obj->dest;
    unsigned short v = 0xff12;
    memcpy(d, &v, 2);
    return 2;
}
