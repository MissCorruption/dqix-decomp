#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
extern "C" void func_ov023_021dcae0(void* arg0, int arg1);
extern "C" void func_ov023_021db2e4(volatile int* arg0);
struct Struct_ov023_021fdaa8 { int unknown_0_; int unknown_4_; };
extern Struct_ov023_021fdaa8 data_ov023_021fdaa8[];

// USA: func_ov023_021dfb4c
extern "C" ARM void func_ov023_021dfb4c(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021dfb4c_1906=0x6ee, Enum_ov023_021dfb4c_1904=0x6ec, Enum_ov023_021dfb4c_1908=0x6f0, Enum_ov023_021dfb4c_1915=0x6f7, Enum_ov023_021dfb4c_1947=0x717, Enum_ov023_021dfb4c_1844=0x6b0, Enum_ov023_021dfb4c_1848=0x6b4, Enum_ov023_021dfb4c_1876=0x6d0};
#else
 enum {Enum_ov023_021dfb4c_1906=0x772, Enum_ov023_021dfb4c_1904=0x770, Enum_ov023_021dfb4c_1908=0x774, Enum_ov023_021dfb4c_1915=0x77b, Enum_ov023_021dfb4c_1947=0x79b, Enum_ov023_021dfb4c_1844=0x734, Enum_ov023_021dfb4c_1848=0x738, Enum_ov023_021dfb4c_1876=0x754};
#endif
    short var0 = *(short*)((char*)arg0 + Enum_ov023_021dfb4c_1906);
    short var1 = *(short*)((char*)arg0 + Enum_ov023_021dfb4c_1904);
    if (var1 != var0) {
        func_ov023_021dcae0(arg0, var0);
    }

    if ((*(unsigned short*)((char*)arg0 + Enum_ov023_021dfb4c_1908) & 1) == 0) {
        return;
    }

    if (*(signed char*)((char*)arg0 + Enum_ov023_021dfb4c_1915) == 1) {
        struct Struct_ov023_021dfb4c { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 1; unsigned char unknown_0_2_ : 6; };
        if (((Struct_ov023_021dfb4c*)((char*)arg0 + Enum_ov023_021dfb4c_1947))->unknown_0_1_ == 0) {
            func_ov023_021db2e4((volatile int*)((char*)arg0 + Enum_ov023_021dfb4c_1844));
            for (int var2 = 0; var2 < 7; var2++) {
                func_ov023_021db2e4((volatile int*)((char*)arg0 + Enum_ov023_021dfb4c_1848 + var2 * 4));
            }
            *(unsigned short*)((char*)arg0 + Enum_ov023_021dfb4c_1908) |= 1;
            *(int*)((char*)arg0 + Enum_ov023_021dfb4c_1876) = 0;
            return;
        }
    }

    (int)BackgroundLoader::GetInstance();
    Struct_ov023_021fdaa8* var3 = data_ov023_021fdaa8;

    while (*(int*)((char*)arg0 + Enum_ov023_021dfb4c_1876) >= 0 &&
           var3[*(int*)((char*)arg0 + Enum_ov023_021dfb4c_1876)].unknown_0_ != 0) {
        int var4 = *(int*)((char*)arg0 + Enum_ov023_021dfb4c_1876);
        Struct_ov023_021fdaa8* var5 = &var3[var4];
        int var6 = var5->unknown_4_;
        int var7 = *(int*)((char*)arg0 + Enum_ov023_021dfb4c_1876);

        char* var8 = (char*)arg0 + (var6 >> 1);
        int (*var9)(void*);
        if (var6 & 1) {
            void* var10 = *(void**)var8;
            var9 = *(int(**)(void*))((char*)var10 + var5->unknown_0_);
        } else {
            var9 = (int(*)(void*))var5->unknown_0_;
        }

        int var11 = var9(var8);
        *(int*)((char*)arg0 + Enum_ov023_021dfb4c_1876) = var11;
        if (var11 < 0) {
            *(unsigned short*)((char*)arg0 + Enum_ov023_021dfb4c_1908) &= ~1;
            func_ov023_021db2e4((volatile int*)((char*)arg0 + Enum_ov023_021dfb4c_1844));
            for (int var12 = 0; var12 < 7; var12++) {
                func_ov023_021db2e4((volatile int*)((char*)arg0 + Enum_ov023_021dfb4c_1848 + var12 * 4));
            }
            return;
        }
        if (var7 == var11) {
            return;
        }
    }
}
