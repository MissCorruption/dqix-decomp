#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_020899bc {
    char unknown_0_[8];
    short unknown_8_;
};

extern struct Struct_020899bc* data_02108efc;

// USA: func_020899bc
extern "C" ARM int func_020899bc(struct Struct_0201c1c8* arg0) {
    data_02108efc->unknown_8_ = (short)((Script::Parameter*)arg0)->ToInt();
    return 1;
}
