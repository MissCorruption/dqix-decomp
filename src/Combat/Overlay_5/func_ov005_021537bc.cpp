#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "NitroSDK/Graphics.h"

extern "C" void func_02047554(void* arg0, int arg1, int arg2);
struct Struct_02075db0;
extern "C" int func_02075db0(Struct_02075db0* arg0, int arg1, int arg2);

struct Struct_ov005_021537bc {
    unsigned char* unknown_0_;
    unsigned int unknown_4_;
    unsigned char unknown_8_[0x28 - 8];
    unsigned int unknown_28_;
    unsigned int unknown_2c_;
    unsigned int unknown_30_;
    unsigned int unknown_34_;
    int unknown_38_;
};

// USA: func_ov005_021537bc
extern "C" ARM void func_ov005_021537bc(void* arg0, int arg1, unsigned short arg2) {
    Struct_ov005_021537bc* var0 = (Struct_ov005_021537bc*)arg0;
    if (var0->unknown_0_ == 0) return;
    unsigned int var1 = var0->unknown_28_;
    unsigned int var2 = var0->unknown_2c_;
    int var3 = (int)(var1 & ~0xfffU);
    int var4 = (int)(var2 & ~0xfffU);
    int var5 = (int)((var1 + var0->unknown_30_ - var0->unknown_4_) & ~0xfffU);
    int var6 = (int)((var2 + var0->unknown_34_ - var0->unknown_4_) & ~0xfffU);
    int var7[4][2] = {
        { var3, var4 },
        { var5, var4 },
        { var3, var6 },
        { var5, var6 }
    };
    for (int var8 = 0; var8 < 4; ++var8) {
        int var9 = var7[var8][0];
        int var10 = var7[var8][1];
        switch (arg1) {
        case 0: {
            GXFIFO_MATRIX_PUSH = 0;
            int var11 = var0->unknown_38_;
            GXFIFO_MATRIX_TRANSLATE = var9;
            GXFIFO_MATRIX_TRANSLATE = var10;
            GXFIFO_MATRIX_TRANSLATE = var11;
            *(unsigned short*)(var0->unknown_0_ + var8 * 0x88 + 0x80) = arg2;
            func_02047554(var0->unknown_0_ + var8 * 0x88, 0, 1);
            GXFIFO_MATRIX_POP = 1;
            break;
        }
        case 1:
            func_02075db0((Struct_02075db0*)(var0->unknown_0_ + var8 * 0x70),
                var9 >> 12, var10 >> 12);
            break;
        case 2: {
            unsigned char* var12 = var0->unknown_0_ + var8 * 0x28;
            *(int*)(var12 + 0x14) = var9;
            *(int*)(var12 + 0x18) = var10;
            break;
        }
        }
    }
}
