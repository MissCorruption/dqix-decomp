#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02011744_25572 = 0x6184, Enum_02011744_1104 = 0x1d0 };
#else
enum { Enum_02011744_25572 = 0x63e4, Enum_02011744_1104 = 0x450 };
#endif
#include "Grotto/Main/TreasureMapMetadata.h"
#include "NitroSDK/Memory.h"

extern "C" int func_020ac760(void* arg0);
extern "C" int func_020ac734(void* arg0);

// USA: func_02011744
extern "C" ARM void func_02011744(void* arg0) {
    if (((unsigned char*)arg0)[Enum_02011744_25572] == 0) {
        return;
    }

    unsigned char var0[0xad8];
    func_020ac760(var0);

    for (int var1 = 0; var1 < var0[0]; var1++) {
        if (((TreasureMapMetadata*)(var0 + 2 + var1 * 0x1c))->GetInitialByteUnknownBit()) {
            VectorizedInvertedMemcpy((char*)arg0 + Enum_02011744_1104 + 0x6000, var0 + 2 + var1 * 0x1c, 0x1c);
            func_020ac734(var0);
            return;
        }
    }
}
