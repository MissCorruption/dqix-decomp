#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_0202c848(int arg0);
extern "C" int func_020d4aa8(void);
extern "C" unsigned short func_020d4be8(void);

struct Struct_02101680 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned char unknown_a_[6];
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};
extern "C" int func_020d5340(int arg0, struct Struct_02101680* arg1);

extern unsigned char data_021015a0[0xc];
extern struct Struct_02101680 data_02101680;
extern int data_02101b80;
extern unsigned char data_02101694[0x20];
extern "C" void func_0202cefc(void);

// USA: func_0202cddc
extern "C" ARM int func_0202cddc(void) {
    int var0 = func_020d4aa8();
    if (var0 == 0x8000) {
        func_0202c848(3);
        return 0;
    }
    if (var0 == 0) {
        func_0202c848(0x16);
        return 0;
    }

    unsigned short var1 = *(unsigned short*)(data_021015a0 + 8);
    if (var1 == 0) {
        unsigned int var2 = data_02101680.unknown_6_;
        unsigned int var3 = (~var2) & (var2 - 1);
        unsigned int var4;
        asm {
            clz var4, var3
        }
        unsigned int var5 = 32 - var4;
        int var6 = var5 + 1;
        unsigned int var7;
        do {
            var6 = var6 + 1;
            if ((unsigned int)var6 > 0x10) var6 = 1;
            var7 = 1 << (var6 - 1);
        } while ((var0 & var7) == 0);
        data_02101680.unknown_6_ = var7;
    } else {
        data_02101680.unknown_6_ = (unsigned short)(1 << (var1 - 1));
    }

    data_02101680.unknown_8_ = func_020d4be8();
    data_02101680.unknown_0_ = (int)&data_02101b80;
    data_02101680.unknown_4_ = 0x400;
    data_02101680.unknown_10_ = 1;
    data_02101680.unknown_12_ = 0;
    VectorizedMemset(data_02101694, 0xff, 0x20);

    int var8 = func_020d5340((int)func_0202cefc, &data_02101680);
    if (var8 == 2) return 1;
    func_0202c848(var8);
    return 0;
}
