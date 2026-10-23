#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "Resource/GameResources.h"
#include "Grotto/Main/DetailedTreasureMapData.h"

struct Struct_ov004_0216342c {
    TreasureMapMetadata unknown_0_[99];
    DetailedTreasureMapData unknown_ad4_[8];
    unsigned char unknown_18f4_;
    unsigned char unknown_18f5_;
    short unknown_18f6_;
    short unknown_18f8_;
    unsigned char unknown_18fa_;
    unsigned char unknown_18fb_;
    unsigned char unknown_18fc_;
    unsigned char unknown_18fd_;
    unsigned char unknown_18fe_;
    unsigned char unknown_18ff_[0x15];
};

#if defined(jpn)
// USA: func_ov004_0216342c
extern "C" ARM void func_ov004_02163a20(void* arg0) {
#else
// USA: func_ov004_0216342c
extern "C" ARM void func_ov004_0216342c(void* arg0) {
#endif
    GameResources* var0 = GetGameResources();
    VectorizedMemset(arg0, 0, sizeof(Struct_ov004_0216342c));
    Struct_ov004_0216342c* var1 = (Struct_ov004_0216342c*)arg0;
    var1->unknown_18fa_ = ((unsigned char*)var0->unknown_41c8)[0x118];
    var1->unknown_18fb_ = 0;
    var1->unknown_18fc_ = 0;
    var1->unknown_18fd_ = 0;
    var1->unknown_18fe_ = 0;
}
