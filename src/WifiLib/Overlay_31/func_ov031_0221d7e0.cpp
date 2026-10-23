#include "NitroSDK/OverlayResponse.h"

extern char data_ov031_0224b0dc[];
extern "C" int func_ov031_0221e650(const char*);
extern "C" void func_ov031_0221e354(void*, int, const char*, int);
extern "C" int func_ov031_0221e4fc(unsigned char*, unsigned char*, int);
// USA: func_ov031_0221d7e0
extern "C" THUMB int func_ov031_0221d7e0(Struct_ov031_0221d7e0* arg0, Struct_ov031_0221d7e0* arg1) {
    int var0 = 0;
    func_ov031_0221e354(arg1, 8, data_ov031_0224b0dc, func_ov031_0221e650(data_ov031_0224b0dc));
    if (func_ov031_0221e4fc(arg0->unknown_0_, arg1->unknown_0_, 6) != 0)
        var0--;
    else {
        unsigned short var1 = func_ov031_0221e638(arg0->unknown_6_);
        unsigned short var2 = func_ov031_0221e638(arg1->unknown_6_);
        if (var1 + 1 != var2)
            var0 -= 2;
    }
    return var0;
}
