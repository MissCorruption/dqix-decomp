#include "Util/ElementIndexTable.h"
#include <globaldefs.h>

// USA: func_0201f2a4
extern "C" ARM struct Struct_02019568* func_0201f2a4(struct Struct_020177d4* arg0, int arg1) {
    if (arg1 < 0 || arg0->unknown_10_ <= arg1) {
        return 0;
    }
    return &arg0->unknown_c_[arg1];
}
