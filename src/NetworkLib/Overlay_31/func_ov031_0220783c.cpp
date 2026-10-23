#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0220783c {
    void* unknown_0_;
    short unknown_4_;
    unsigned short unknown_6_;
};
extern "C" int func_ov031_02206fa4(void*);

// USA: func_ov031_0220783c
extern "C" ARM int func_ov031_0220783c(Struct_ov031_0220783c* arg0, unsigned int arg1, long long arg2) {
    bool var0 = arg2 != -1;
    Struct_ov031_0220783c* var1;
    unsigned int var2;
    int var3;
    do {
        var1 = arg0;
        var2 = var3 = 0;
        if (var2 < arg1) {
            do {
                int var4 = var1->unknown_4_ | 0xe0;
                int var5 = var4 & func_ov031_02206fa4(var1->unknown_0_);
                var1->unknown_6_ = var5;
                var2++;
                var1++;
                if (var5) var3++;
            } while (var2 < arg1);
        }
        if (var3 > 0) break;
        if (var0 && arg2 <= 0) break;
        SleepCurrentContext(1);
        arg2 -= 0x20b;
    } while (true);
    return var3;
}
