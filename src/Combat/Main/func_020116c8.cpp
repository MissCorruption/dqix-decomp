#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020116c8_25572 = 0x6184, Enum_020116c8_25573 = 0x6185 };
#else
enum { Enum_020116c8_25572 = 0x63e4, Enum_020116c8_25573 = 0x63e5 };
#endif
#include "Grotto/Main/TreasureMapMetadata.h"

extern "C" int func_020ac760(void* arg0);
extern "C" int func_020ac734(void* arg0);

extern "C" {
    void func_ov017_021cfabc(void);
    void func_ov017_021cf730(int, int);
}

// USA: func_020116c8
extern "C" ARM void func_020116c8(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    var0[Enum_020116c8_25572] = 0;
    var0[Enum_020116c8_25573] = 0;

    unsigned char var1[0xad8];
    func_020ac760(var1);

    for (int var2 = 0; var2 < var1[0]; var2++) {
        ((TreasureMapMetadata*)(var1 + 2 + var2 * 0x1c))->ClearInitialByteUnknownBit();
    }

    func_020ac734(var1);
    func_ov017_021cfabc();
    func_ov017_021cf730(-1, 0);
}
