#include <globaldefs.h>

extern "C" unsigned short func_0202df58(void);

struct CheckField0AndGlobalHalfStruct { int field0; };

// USA: func_0202c540
extern "C" ARM int func_0202c540(CheckField0AndGlobalHalfStruct* obj) {
    int cond = obj->field0 != 0;
    if (cond) {
        return func_0202df58() != 0;
    }
    return 0;
}
