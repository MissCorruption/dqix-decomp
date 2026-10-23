#include <globaldefs.h>
#include "Resource/MonsterDefinition.h"

// USA: func_0206ef48
extern "C" ARM int func_0206ef48(Struct_0206ef48* arg0, Struct_0206ef40* arg1) {
    arg1->unknown1_0_ = func_0206ef94(arg0, arg1->unknown1_0_, 0);
#if !defined(jpn)
    arg1->unknown_14_ = func_0206ef94(arg0, arg1->unknown_14_, 0);
#endif
    arg1->unknown_4_ = func_0206ef94(arg0, arg1->unknown_4_, 0);
    return 1;
}
