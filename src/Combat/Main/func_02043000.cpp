#if defined(jpn)
#define CONTROLLER_STATE_OFFSET 0x4
#else
#define CONTROLLER_STATE_OFFSET 0x38
#endif
#if defined(jpn)
#define CONTROLLER_SUBOBJECT_OFFSET 0x1804
#else
#define CONTROLLER_SUBOBJECT_OFFSET 0x19e0
#endif
#include <globaldefs.h>
#include "Resource/MessageUpdate.h"
#if defined(jpn)
#define func_02043224 func_02043998
#endif
extern "C" void func_0202f1dc(char*);

extern "C" void func_02043224(void* arg0);
extern "C" void func_02043124(void* arg0);

// USA: func_02043000
extern "C" ARM void func_02043000(char* arg0) {
    func_0202f1dc((char*)(arg0 + CONTROLLER_SUBOBJECT_OFFSET));
    func_02043224(arg0);
    Struct_02021b84* var0 = (Struct_02021b84*)arg0;
    func_02043040(var0);
    func_02043124(arg0);
    func_020430b0(var0);
    *(int*)(arg0 + CONTROLLER_STATE_OFFSET) = 0;
}
