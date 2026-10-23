#include <globaldefs.h>
#include "Combat/Main/MessageSlotTable.h"

extern "C" void func_020dd8b4(int, int, int, int);

// USA: func_020ddaf4
extern "C" ARM void func_020ddaf4(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    func_020dd8b4(arg0, arg1, arg2, 0);
    func_020dd9b4((Struct_020dd7ac*)arg0, (unsigned int)arg3, (void*)arg4, (void*)arg5);
}
