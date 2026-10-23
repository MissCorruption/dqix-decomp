#include <globaldefs.h>
#include "World/ZoneFeatures.h"

struct Struct_0201e878 {
    char unknown_0_[0x80];
    unsigned short unknown_80_;
    unsigned short unknown_82_;
    int unknown_84_;
};

// USA: func_0201e878
ARM void Struct_020134e0::func_0201e878(Struct_020134e0::Struct_0201dfcc* arg0, unsigned short arg1) {
    struct Struct_0201e878* var0 = (struct Struct_0201e878*)this;
    int var1 = (int)arg0;
    short var2 = (short)arg1;
    var0->unknown_84_ = var1;
    var0->unknown_82_ = var2;
    var0->unknown_80_ = 0;
}
