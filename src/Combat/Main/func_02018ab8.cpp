#include <globaldefs.h>
#include "World/ZoneChest.h"

extern "C" void* func_0201e838(unsigned char*, unsigned int);

// USA: func_02018ab8
extern "C" ARM void func_02018ab8(Zone3D* arg0) {
    Struct_020134e0::Struct_02018300* var0;
    Struct_02016874_2* var1;
    int var2;

    var0 = (Struct_020134e0::Struct_02018300*)func_0201e838((unsigned char*)&arg0->substruct_6c_, 2);
    while (var0 != NULL) {
        var1 = func_02018b34(arg0, var0);
        var2 = (var0->unknown_2c_.unknown1_0_.unknown_2_4_ & 0x80) != 0;
        if (var1 != NULL) {
            var1->unknown_2_ |= 0x8;
            if (var2) var1->unknown_2_ |= 0x10;
        }
        var0 = var0->unknown_70_;
    }
}
