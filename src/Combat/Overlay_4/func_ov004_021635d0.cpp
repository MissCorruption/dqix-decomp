#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/TreasureMapMetadata.h"

extern char* data_ov004_02171010;
extern "C" unsigned char func_020119f8(char* arg0, void* arg1);

// USA: func_ov004_021635d0
extern "C" ARM int func_ov004_021635d0(int* arg0, int* arg1) {
#if defined(jpn)
 enum { Enum_ov004_021635d0_2292 = 0x9f4 };
#else
 enum { Enum_ov004_021635d0_2292 = 0x8f4 };
#endif
    if (arg0 == NULL) return 0;
    if (arg1 == NULL) return 0;
    int var0 = -1;
    unsigned char var1 = func_020119f8((char*)GameState::GetInstance(), NULL);
    int var2;
    if (var1 != 0) {
        for (var2 = 0; var2 < *(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_021635d0_2292); var2++) {
            TreasureMapMetadata* var3 = (TreasureMapMetadata*)(data_ov004_02171010 + var2 * 0x1c);
            if (var3->GetDiscoveryState() == DiscoveryState_Cleared) {
                var0 = var2;
                break;
            }
        }
    } else {
        for (var2 = 0; var2 < *(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_021635d0_2292); var2++) {
            TreasureMapMetadata* var4 = (TreasureMapMetadata*)(data_ov004_02171010 + var2 * 0x1c);
            if (var4->GetInitialByteUnknownBit()) {
                var0 = var2;
                break;
            }
        }
    }
    if (var0 < 0) return 0;
    int var5 = var0 / 8;
    int var6 = var0 - var5 * 8;
    if (var6 < 0) var6 = 0;
    *arg0 = var5;
    *arg1 = var6;
    return 1;
}
