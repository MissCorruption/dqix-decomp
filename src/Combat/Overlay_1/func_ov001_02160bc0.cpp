#include <globaldefs.h>
#include "World/ZoneChest.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_02012fe4(void);

extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);

// USA: func_ov001_02160bc0
extern "C" ARM int func_ov001_02160bc0(void* arg0, int arg1) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    if (arg1 > 2) {
        func_ov017_021d60f4((char*)arg0 + 0x10);
    }
    Zone3D* var2 = (Zone3D*)func_02012fe4();
    Struct_020134e0::Struct_02018300* var3 = (Struct_020134e0::Struct_02018300*)func_0201e838((unsigned char*)&var2->substruct_6c_, 2);
    while (var3 != NULL) {
        if ((var3->unknown_2c_.unknown1_0_.unknown_2_4_ & 1) && var3->unknown_2c_.unknown1_0_.unknown_0_ == var0 && var3->unknown_2c_.unknown1_0_.unknown_1_ == var1) {
            var3->unknown_2c_.unknown1_0_.unknown_2_4_ &= ~0x200;
            func_02018918(var2, var3);
        }
        var3 = var3->unknown_70_;
    }
    return 1;
}
