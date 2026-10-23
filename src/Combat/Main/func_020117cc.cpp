#include <globaldefs.h>
#include "Grotto/Main/GrottoStruct.h"

// USA: func_020117cc
extern "C" ARM void func_020117cc(char* arg0, DetailedTreasureMapData* arg1) {
#if defined(jpn)
    ((GrottoStruct*)(arg0 + 0x6184))->LoadActiveMetadataFromDetailed((DetailedTreasureMapData*)arg1);
#else
    ((GrottoStruct*)(arg0 + 0x63e4))->LoadActiveMetadataFromDetailed((DetailedTreasureMapData*)arg1);
#endif
#if defined(jpn)
    ((TreasureMapMetadata*)(arg0 + 0x61d0))->SetInitialByteUnknownBit();
#else
    ((TreasureMapMetadata*)(arg0 + 0x6450))->SetInitialByteUnknownBit();
#endif
}
