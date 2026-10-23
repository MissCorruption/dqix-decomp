#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"

struct Struct_02107800_2 {
#if defined(jpn)
    char unknown_0_[0x14];
    Struct_0203bebc* unknown_14_;
    char unknown_18_[8];
    Struct_0203bebc* unknown_20_;
    Struct_0203bebc* unknown_24_;
    Struct_0203bebc* unknown_28_;
#else
    char unknown1_0_[0x10];
    Struct_0203bebc* unknown_10_;
#endif
};

extern Struct_02107800_2 data_02107800;

// USA: func_020429bc
extern "C" ARM Struct_0203bebc* func_020429bc(int arg0) {
    Struct_0203bebc* var0 = NULL;
#if defined(jpn)
    switch (arg0) {
    case 6: var0 = data_02107800.unknown_14_; break;
    case 8: var0 = data_02107800.unknown_20_; break;
    case 10: var0 = data_02107800.unknown_24_; break;
    case 12: var0 = data_02107800.unknown_28_; break;
    }
#else
    if (arg0 == 8) var0 = data_02107800.unknown_10_;
#endif
    return var0;
}
