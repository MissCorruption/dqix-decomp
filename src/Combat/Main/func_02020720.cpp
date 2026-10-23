#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "NitroSDK/Memory.h"
#include "Combat/MapDisplay.h"
#include "Combat/CombatScriptContext.h"

struct Struct_02020cb8;
extern "C" ARM void func_0204af64(struct Struct_02020cb8* arg0);

extern "C" ARM void func_0202445c(void* arg0);

// USA: func_02020720
extern "C" ARM void func_02020720(Struct_02020554* arg0) {
    arg0->unknown_18_ = 0;
    arg0->unknown_1c_ = 0;
    arg0->unknown_20_ = 0;
    arg0->unknown_24_ = 0;
    arg0->unknown_28_ = 0;
    arg0->unknown_2c_ = 0;
    arg0->unknown_30_ = 0;
    arg0->unknown_34_ = 0;
    arg0->unknown_38_ = 0x1000;
    int var0 = 0x1000 - 0x1400;
    arg0->unknown_3c_ = var0;
    arg0->unknown_40_ = var0;
    arg0->unknown_6c_ = 0;
    arg0->unknown_70_ = 0;
    arg0->unknown_74_ = 0;
    arg0->unknown_14_ = 1;
    arg0->unknown_55c_ = 0;
    arg0->unknown_754_ = 0;
    arg0->unknown_5a4_ = arg0->unknown_5a4_ & 1;
    arg0->unknown_0_ = 0;
    arg0->unknown_a9c_ = 0;

    for (int var1 = 0; var1 < 4; var1++) {
        arg0->unknown_560_[var1] = -1;
        arg0->unknown_570_[var1] = 0;
        arg0->unknown_758_[var1] = 0;
        arg0->unknown_558_[var1] = 1;
    }

    func_0204af64(&arg0->unknown_4c_);

    arg0->unknown_75c_ = 0;
    arg0->unknown_75d_ = 0;
    arg0->unknown_77a_ = 0;
    arg0->unknown_77c_ = 0;
    arg0->unknown_9b4_ = 0;
    arg0->unknown_760_ = 0;
    arg0->unknown_764_ = 0;
    arg0->unknown_766_ = 0;
    arg0->unknown_768_ = 1;

    func_0202445c(arg0);

    arg0->unknown_9bc_ = 0;
    arg0->unknown_9c0_ = 0;
    data_020fdc4c.unknown_c_ = 0;
    arg0->unknown_aa0_ = 0;

    VectorizedMemset(arg0->unknown_aa2_, 0, 0x100);
}
