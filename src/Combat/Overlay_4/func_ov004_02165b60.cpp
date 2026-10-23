#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/TreasureMapMetadata.h"

extern "C" void func_020116c8(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern char* data_ov004_02171010;

// USA: func_ov004_02165b60
extern "C" ARM int func_ov004_02165b60(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_02165b60_2292 = 0x9f4 };
#else
    enum { Enum_ov004_02165b60_2292 = 0x8f4 };
#endif
    func_020116c8(GameState::GetInstance());
    for (int var0 = 0; var0 < *(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_02165b60_2292); var0++) {
        ((TreasureMapMetadata*)(data_ov004_02171010 + var0 * 0x1c))->ClearInitialByteUnknownBit();
    }
    func_ov011_021848a0(arg0, 0x65);
    return 0;
}
