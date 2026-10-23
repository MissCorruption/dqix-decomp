#include <globaldefs.h>
#include "Resource/MessageUpdate.h"

extern "C" void func_02043124(char* arg0);

// USA: func_02043204
extern "C" ARM void func_02043204(char* arg0) {
    Struct_02021b84* var0 = (Struct_02021b84*)arg0;
    func_02043040(var0);
    func_02043124(arg0);
    func_020430b0(var0);
}
