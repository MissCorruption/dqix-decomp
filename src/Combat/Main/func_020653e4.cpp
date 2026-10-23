#include <globaldefs.h>
#include "NitroSDK/Graphics.h"
#include "NitroSDK/Matrix.h"

// USA: func_020653e4
extern "C" ARM void func_020653e4(fix32_t arg0, fix32_t arg1) {
    short var0 = arg0 >> 8;
    short var1 = arg1 >> 8;
    GXFIFO_VERTEX_TEXCOORD = static_cast<unsigned short>(var0) |
                            (static_cast<unsigned int>(static_cast<unsigned short>(var1)) << 16);
}
