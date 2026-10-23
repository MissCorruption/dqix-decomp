#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "Grotto/Main/TreasureMapMetadata.h"

// USA: func_02011a40
extern "C" ARM void func_02011a40(char* arg0) {
    TreasureMapMetadata var0;
    var0.SetMapType(TreasureMapType_Invalid);
#if defined(jpn)
    VectorizedInvertedMemcpy(&var0, arg0 + 0x6202, 0x1c);
#else
    VectorizedInvertedMemcpy(&var0, arg0 + 0x6482, 0x1c);
#endif
}
