#include <globaldefs.h>
#include "Resource/Brightness.h"

struct Struct_ov004_02164670;
extern "C" int func_020421a0(void);
extern char* data_ov004_02171010;
struct Struct_ov004_021652e8 {
#if defined(jpn)
    unsigned char unknown_0_[0x19f4];
#else
    unsigned char unknown1_0_[0x18f4];
#endif
    unsigned char unknown_18f4_;
    unsigned char unknown_18f5_;
    short unknown_18f6_;
    short unknown_18f8_;
    unsigned char unknown_18fa_[2];
    unsigned char unknown_18fc_;
};
extern "C" void func_02026420(unsigned char* arg0, unsigned char arg1);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern struct Struct_02108760 data_02108760;
extern "C" int func_ov004_021651c8(void* arg0);

#if defined(jpn)
enum { Enum_ov004_021652e8_2456 = 0x868, Enum_ov004_021652e8_1744 = 0x4c0 };
// USA: func_ov004_021652e8
extern "C" ARM int func_ov004_02165b78(void* arg0) {
#else
enum { Enum_ov004_021652e8_2456 = 0x998, Enum_ov004_021652e8_1744 = 0x6d0 };
// USA: func_ov004_021652e8
extern "C" ARM int func_ov004_021652e8(void* arg0) {
#endif
    struct Struct_ov004_02164670* var0 = (struct Struct_ov004_02164670*)GetGameResources();
    if (!IsBrightnessZero((GameResources*)var0, false) || !IsBrightnessZero((GameResources*)var0, true)) return 0;
    if (*(void**)((char*)func_020421a0() + Enum_ov004_021652e8_2456) != NULL) return 0;

    {
        Struct_ov004_021652e8* var1 = (Struct_ov004_021652e8*)data_ov004_02171010;
        unsigned char var2 = var1->unknown_18f4_;
        if (var2 == 0) return 0;

        unsigned char* var3 = &var1->unknown_18fc_;
        var2 = var1->unknown_18fc_;
        if (var2 == 0) {
            *var3 = 1;
        } else if (var2 == 1) {
            *var3 = 0;
        }

        unsigned char* var4 = *(unsigned char**)((char*)GetGameResources() + 0x3000 + Enum_ov004_021652e8_1744);
        unsigned char var5 = ((Struct_ov004_021652e8*)data_ov004_02171010)->unknown_18fc_;
        if (var5 == 1) {
            func_02026420(var4, 0);
        } else if (var5 == 0) {
            func_02026420(var4, 1);
        }

        func_ov004_021651c8(arg0);
        func_0205eaa0(&data_02108760, 1, 0);
        return 0;
    }
}
