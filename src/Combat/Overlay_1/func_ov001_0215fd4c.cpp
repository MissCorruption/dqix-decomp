#include <globaldefs.h>
#include "World/ZoneChest.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);

// USA: func_ov001_0215fd4c
extern "C" ARM int func_ov001_0215fd4c(char* arg0, int arg1) {
    int var0 = func_ov017_021d60f4(arg0);
    char* var1 = arg0 + 0x8;
    arg0 += 0x10;
    int var2 = func_ov017_021d60f4(var1);
    int var3 = 1;
    int var4 = 1;
    if (arg1 > 2) {
        var3 = func_ov017_021d60f4(arg0);
        arg0 += 0x8;
    }
    if (arg1 > 3) {
        var4 = func_ov017_021d60f4(arg0);
    }

    Zone3D* var5 = (Zone3D*)func_02012fe4();
    Struct_020134e0::Struct_02018300* var6 = (Struct_020134e0::Struct_02018300*)func_0201e838((unsigned char*)&var5->substruct_6c_, 2);
    while (var6 != NULL) {
        if (!(var6->unknown_2c_.unknown1_0_.unknown_2_4_ & 1) && var6->unknown_2c_.unknown1_0_.unknown_0_ == var0 && var6->unknown_2c_.unknown1_0_.unknown_1_ == var2) {
            var6->unknown_2c_.unknown1_0_.unknown_2_4_ = var6->unknown_2c_.unknown1_0_.unknown_2_4_ | 0x380;
            func_02018300(var5, var6, var3, var4, 0);
            Struct_02016874_2* var7 = func_02018b34(var5, var6);
            var7->unknown_2_ |= 0x40;
        }
        var6 = var6->unknown_70_;
    }
    return 1;
}
