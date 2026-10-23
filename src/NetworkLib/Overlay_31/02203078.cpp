#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0224c980 {
    char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov031_02203078 {
    int unknown_0_;
    char unknown_4_[6];
    unsigned short unknown_a_;
};

extern Struct_ov031_0224c980 data_ov031_0224c980;

// USA: func_ov031_02203078
extern "C" ARM unsigned short func_ov031_02203078(void) {
    int var0;
    ProcessorContext* var1;
    unsigned short var2;
    ProcessorContext* var3 = data_02111304.firstContext;
    do {
        var0 = 0;
        ++data_ov031_0224c980.unknown_8_;
        if (data_ov031_0224c980.unknown_8_ < 1024 ||
            data_ov031_0224c980.unknown_8_ >= 5000) {
            data_ov031_0224c980.unknown_8_ = 1024;
        }
        var1 = var3;
        if (var1 != NULL) {
            var2 = data_ov031_0224c980.unknown_8_;
            do {
                Struct_ov031_02203078* var4 = (Struct_ov031_02203078*)var1->unknown_A4;
                if (var4 != NULL && var4->unknown_0_ != 0 &&
                    var4->unknown_a_ == var2) {
                    var0 = 1;
                    break;
                }
                var1 = var1->pNext;
            } while (var1 != NULL);
        }
    } while (var0 != 0);
    return data_ov031_0224c980.unknown_8_;
}
