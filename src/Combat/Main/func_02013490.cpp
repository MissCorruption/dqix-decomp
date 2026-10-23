#include <globaldefs.h>
#include "World/BmdjScriptNode.h"
#include "std_library_functions.h"

// USA: func_02013490
extern "C" ARM void func_02013490(Struct_02013490* arg0) {
    arg0->unknown_0_ = NULL;
    arg0->unknown_38_ = 0;
    arg0->unknown_4_.unknown_0_ = 0;
    memset(arg0->unknown_4_.directionBitmasks, 0, sizeof(arg0->unknown_4_.directionBitmasks));
    memset(arg0->unknown_4_.tilename, 0, sizeof(arg0->unknown_4_.tilename));
    Mat3x3_WriteIdentity(&arg0->unknown_14_);
    arg0->unknown_3c_.x = 0;
    arg0->unknown_3c_.y = 0;
    arg0->unknown_3c_.z = 0;
}
