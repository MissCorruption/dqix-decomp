#include <globaldefs.h>

#include "Combat/ActionState.h"
#include "Combat/MapDisplay.h"
#include "NitroSDK/Memory.h"

struct Struct_020fdcb0_3 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    unsigned char unknown_14_;
    char unknown_15_[0x3];
    int unknown_18_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
};

struct Struct_020fdc60_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

extern "C" void func_0201f9b8(Struct_020fdcb0_3 *arg0);
extern "C" void func_0201f9e8(Struct_020fdc60_3 *arg0);
extern "C" void func_02026644(char *arg0);

extern Struct_020fdcb0_3 data_020fdcb0[4];
#if defined(jpn)
extern unsigned char data_020fda36;
#define data_020fdcce data_020fda36
#else
extern unsigned char data_020fdcce;
#endif

// USA: func_02020554
extern "C" ARM void func_02020554(Struct_02020554 *arg0) {
#if defined(jpn)
    VectorizedMemset(arg0, 0, 0xad8);
#else
    VectorizedMemset(arg0, 0, 0xc30);
#endif
    arg0->unknown_9c1_ = 0;
    arg0->unknown_9c2_ = 0;
    arg0->unknown_9c3_ = 0;
    arg0->unknown_9c4_ = 0;
    arg0->unknown_9c6_ = 0;
    arg0->unknown_a96_ = 0;
    func_02020720(arg0);

    for (int var0 = 0; var0 < 4; var0++) {
        func_0201f9b8(&data_020fdcb0[var0]);
        (&data_020fdcce)[var0 * 0x20] = 0;
        func_0201f9e8((Struct_020fdc60_3 *) &data_020fdc60[var0]);
    }

    arg0->unknown_5a4_ |= 1;
    arg0->unknown_765_ = 1;
    arg0->unknown_5a8_ = 0;
    arg0->unknown_12_  = 0;
    arg0->unknown_9c7_ = 0;
    arg0->unknown_778_ = 0;
    arg0->unknown_9c5_ = 0;
    arg0->unknown_76c_ = 0;
    arg0->unknown_770_ = 0;
    arg0->unknown_774_ = 0;
    arg0->unknown_779_ = 0;
    arg0->unknown_9ba_ = 0;
    arg0->unknown_77c_ = 0;
    arg0->unknown_780_ = 0;
    func_02026644((char *) arg0);

    arg0->unknown_9b8_  = 0;
    arg0->unknown_9b9_  = 0;
    arg0->unknown_9c8_  = 0;
    arg0->unknown_55d_   = 0xf;
    arg0->unknown_55e_  = 0;
    arg0->unknown_9cc_ = -1;
#if !defined(jpn)
    arg0->unknown_9f8_ = -1;
#endif
    arg0->unknown_9d0_ = -1;
    arg0->unknown_9d4_ = -1;
    arg0->unknown_9fc_ = -1;
    arg0->unknown_a00_ = -1;
    arg0->unknown_a04_ = -1;
    arg0->unknown_a08_ = -1;
    arg0->unknown_a0c_ = -1;
    arg0->unknown_a10_ = -1;
    arg0->unknown_a14_ = -1;
    arg0->unknown_a18_ = -1;
    arg0->unknown_a1c_ = -1;
    arg0->unknown_a20_ = -1;
    arg0->unknown_a24_ = -1;
    arg0->unknown_a28_ = -1;
    arg0->unknown_a2c_ = -1;
    arg0->unknown_a30_ = -1;
    for (int var1 = 0; var1 < 8; var1++) {
        arg0->unknown_9d8_[var1] = -1;
    }
    arg0->unknown_a34_ = 0xff;
    VectorizedMemset(arg0->unknown_a35_, 0, 0x10);
    VectorizedMemset(arg0->unknown_a45_, 0, 0x10);
    VectorizedMemset(arg0->unknown_a55_, 0, 0x20);
    arg0->unknown_a95_ = 0;
    arg0->unknown_a97_ = 0;
#if !defined(jpn)
    VectorizedMemset(arg0->unknown_ba2_, 0, 0x40);
    arg0->unknown_be4_ = 0;
    arg0->unknown_be8_ = 0;
    arg0->unknown_bec_ = 0;
    arg0->unknown_bee_ = 0;
#endif
}
