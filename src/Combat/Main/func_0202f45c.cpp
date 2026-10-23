#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Graphics.h"

extern "C" void func_02047554(void* arg0, int arg1, int arg2, int arg3);

struct Struct_020e73fc {
    int unknown_0_[8][2];
};
extern struct Struct_020e73fc data_020e73fc;

struct Struct_0202f45c {
    char unknown_0_[0x18];
    unsigned short unknown_18_;
};

// USA: func_0202f45c
extern "C" ARM void func_0202f45c(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    if (arg3 < 0x8000 || arg4 < 0x8000) return;

    GXFIFO_TEXIMAGE_PARAMS = 0x20030000;
    GXFIFO_POLYGON_ATTRIBUTES = 0x3b1200c0;
    GXFIFO_MATRIX_PUSH = 0;
    GXFIFO_MATRIX_TRANSLATE = arg1 + 0x3000;
    GXFIFO_MATRIX_TRANSLATE = arg2 + 0x3000;
    GXFIFO_MATRIX_TRANSLATE = 0x400000;
    GXFIFO_MATRIX_SCALE = arg3 - 0x6000;
    GXFIFO_MATRIX_SCALE = arg4 - 0x6000;
    GXFIFO_MATRIX_SCALE = 0x1000;
    GXFIFO_POLYGON_BEGIN = 1;
    GXFIFO_VERTEX_COLOR = 0;
    GXFIFO_VERTEX_16 = 0;
    GXFIFO_VERTEX_16 = 0;
    GXFIFO_VERTEX_16 = 0x1000;
    GXFIFO_VERTEX_16 = 0;
    GXFIFO_VERTEX_16 = 0x10001000;
    GXFIFO_VERTEX_16 = 0;
    GXFIFO_VERTEX_16 = 0x10000000;
    GXFIFO_VERTEX_16 = 0;
    GXFIFO_POLYGON_END = 0;
    GXFIFO_MATRIX_POP = 1;

    if (arg5 == 0) return;

    int var0 = (int)((arg3 - 0x8000) / 6.0f);
    int var1 = (int)((arg4 - 0x8000) / 6.0f);

    int var2[8][2];
    var2[0][0] = arg1 - 0x1000;
    var2[0][1] = arg2 - 0x1000;
    var2[1][0] = (arg1 + 0x3000) - (var0 & ~0xfff);
    var2[1][1] = arg2 - 0x1000;
    var2[2][0] = (arg1 + arg3) - 0x7000;
    var2[2][1] = arg2 - 0x1000;
    var2[3][0] = (arg1 + arg3) - 0x7000;
    var2[3][1] = (arg2 + 0x3000) - (var1 & ~0xfff);
    var2[4][0] = (arg1 + arg3) - 0x7000;
    var2[4][1] = (arg2 + arg4) - 0x7000;
    var2[5][0] = (arg1 + 0x3000) - (var0 & ~0xfff);
    var2[5][1] = (arg2 + arg4) - 0x7000;
    var2[6][0] = arg1 - 0x1000;
    var2[6][1] = (arg2 + arg4) - 0x7000;
    var2[7][0] = arg1 - 0x1000;
    var2[7][1] = (arg2 + 0x3000) - (var1 & ~0xfff);

    struct Struct_020e73fc var3 = data_020e73fc;
    var3.unknown_0_[1][0] = var0;
    var3.unknown_0_[5][0] = var0;
    var3.unknown_0_[3][1] = var1;
    var3.unknown_0_[7][1] = var1;

    unsigned char* var4 = (unsigned char*)arg0;
    for (int var5 = 0; var5 < 8; ++var5) {
        int* var6 = var2[var5];
        int* var7 = var3.unknown_0_[var5];
        GXFIFO_MATRIX_PUSH = 0;
        int var8 = var6[1];
        GXFIFO_MATRIX_TRANSLATE = var6[0];
        GXFIFO_MATRIX_TRANSLATE = var8;
        GXFIFO_MATRIX_TRANSLATE = 0x400000;
        int var9 = var7[1];
        GXFIFO_MATRIX_SCALE = var7[0];
        GXFIFO_MATRIX_SCALE = var9;
        GXFIFO_MATRIX_SCALE = 0x1000;
        Struct_0202f45c* var10 = *(Struct_0202f45c**)((char*)arg0 + 0x440);
        unsigned short var11 = var10->unknown_18_;
        *(unsigned short*)(var4 + 0x80) = var11;
        func_02047554(var4, 0, 1, var11);
        GXFIFO_MATRIX_POP = 1;
        var4 += 0x88;
    }
}
