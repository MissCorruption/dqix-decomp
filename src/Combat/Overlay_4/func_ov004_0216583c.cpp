#include <globaldefs.h>
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

extern char* data_ov004_02171010;
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

#if defined(jpn)
// USA: func_ov004_0216583c
extern "C" ARM int func_ov004_021660cc(void* arg0) {
#else
// USA: func_ov004_0216583c
extern "C" ARM int func_ov004_0216583c(void* arg0) {
#endif
    Struct_ov004_0216342c* var0 = (Struct_ov004_0216342c*)data_ov004_02171010;
    var0->unknown_18fd_ = 1;
    func_ov011_021848a0(arg0, 0x65);
    return 0;
}
