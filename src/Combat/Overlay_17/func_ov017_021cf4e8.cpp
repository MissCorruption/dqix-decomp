#include <globaldefs.h>

struct Struct_020fdd44;
extern "C" unsigned short* func_02012fe4(void);
extern "C" struct Struct_020fdd44* func_02027ca4(void);
extern "C" struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1);

struct Struct_ov017_021cf4e8 { unsigned short unknown_0_0_:4; unsigned short unknown_0_4_:12; };

// USA: func_ov017_021cf4e8
extern "C" ARM void func_ov017_021cf4e8(void* arg0, unsigned char* arg1, unsigned char* arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cf4e8_3958=0xca2, Enum_ov017_021cf4e8_3962=0xca6, Enum_ov017_021cf4e8_180=0x204, Enum_ov017_021cf4e8_17408=0x4000};
#else
 enum {Enum_ov017_021cf4e8_3958=0xf76, Enum_ov017_021cf4e8_3962=0xf7a, Enum_ov017_021cf4e8_180=0xb4, Enum_ov017_021cf4e8_17408=0x4400};
#endif
    int var0 = arg1[4] <= 3;
    if (var0) {
        unsigned char* var1 = arg2 + arg1[4] + 0x7000;
        var1[Enum_ov017_021cf4e8_3958] = arg1[5];
        if (arg1[5] == 2) {
            unsigned char* var2 = arg3 + Enum_ov017_021cf4e8_180 + Enum_ov017_021cf4e8_17408;
            unsigned short* var3 = func_02012fe4();
            struct Struct_020fdd44* var4 = func_02028bd0(func_02027ca4(), *var3);
            if (var4 != 0) {
                *(unsigned short*)var2 = *var3;
                *(unsigned short*)(var2 + 2) = ((struct Struct_ov017_021cf4e8*)((char*)var4 + 2))->unknown_0_4_;
            }
        }
    } else {
        unsigned char* var5 = arg2 + arg1[4] + 0x7000;
        var5[Enum_ov017_021cf4e8_3958] = 5;
    }
    arg2[0x7000 + Enum_ov017_021cf4e8_3962] = arg2[0x7000 + Enum_ov017_021cf4e8_3962] | (1 << arg1[4]);
}
