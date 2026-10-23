#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" int func_020d424c(int, int, int, int, int, int);
extern "C" int func_020d40bc(int, int, int);
extern "C" void func_020d404c(int index, int value);
extern "C" void* func_020d41d8(void);

struct BattleHeader020d559c {
    unsigned short field0;
    unsigned char pad[0x180];
    unsigned short field182;
};

struct BattleCtx020d559c {
    int field0;
    BattleHeader020d559c* field4;
};


// USA: func_020d559c
extern "C" ARM int func_020d559c(int a0, unsigned int a1) {
    BattleCtx020d559c* ctx = (BattleCtx020d559c*)func_020d41d8();
    int r = func_020d424c(5, 7, 9, 8, 0xa, 0xb);
    if (r != 0) {
        return r;
    }
    unsigned short headerVal = ctx->field4->field0;
    if (headerVal == 7 || headerVal == 9) {
        if (a1 < 1 || a1 > 0xf) {
            return 6;
        }
        InvalidateDataCacheRange(&ctx->field4->field182, 2);
        if (!(ctx->field4->field182 & (1 << a1))) {
            return 7;
        }
    } else {
        if (a1 != 0) {
            return 6;
        }
    }
    func_020d404c(0xd, a0);
    r = func_020d40bc(0xd, 1, 1 << a1);
    if (r == 0) {
        r = 2;
    }
    return r;
}
