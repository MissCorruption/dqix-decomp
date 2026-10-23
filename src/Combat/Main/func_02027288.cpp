#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02027288_1880 = 0x6ac };
#else
enum { Enum_02027288_1880 = 0x758 };
#endif

struct Struct_0201fbac;
extern "C" void func_0201fbac(struct Struct_0201fbac* arg0);

struct Struct_020fdc60_5 { char unknown_0_[0x14]; };
extern struct Struct_020fdc60_5 data_020fdc60[4];

// USA: func_02027288
extern "C" ARM void func_02027288(unsigned char* arg0, int arg1) {
    if (arg1 < 0) {
        int var0;
        for (var0 = 0; var0 < 4; var0++) {
            func_0201fbac((struct Struct_0201fbac*)&data_020fdc60[var0]);
        }
        return;
    }
    if (arg1 >= 4) return;
    {
        int var1;
        unsigned char* var2;
        for (var1 = 0; var1 < 4; var1++) {
            var2 = arg0 + var1;
            if (arg1 == var2[Enum_02027288_1880]) {
                func_0201fbac((struct Struct_0201fbac*)&data_020fdc60[var1]);
                return;
            }
        }
    }
}
