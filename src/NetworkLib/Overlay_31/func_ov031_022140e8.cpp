#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void* func_ov031_022157e8(char* arg0);
extern "C" void func_ov031_02215750(int arg0, void* arg1);

// USA: func_ov031_022140e8
extern "C" ARM bool func_ov031_022140e8(void* arg0, int arg1, void* arg2) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char* var1 = (unsigned char*)arg2;
    switch (arg1) {
    case 2:
        var0 += 0x100;
    case 1:
        var0 += 0x100;
    case 0: {
        struct Struct_ov031_022140e8 { unsigned char unknown_0_0_ : 2; unsigned char unknown_0_2_ : 6; };
        Struct_ov031_022140e8* var2 = (Struct_ov031_022140e8*)(var0 + 0xe6);
        var1[0] = var2->unknown_0_0_;
        VectorizedInvertedMemcpy(var0 + 0x80, var1 + 2, 0x10);
        break;
    }
    case 5:
        var0 += 0x100;
    case 4:
        var0 += 0x100;
    case 3: {
        var1[0] = 1;
        VectorizedInvertedMemcpy(var0 + 0xd1, var1 + 2, 5);
        break;
    }
    case 6: {
        var1[0] = 2;
        unsigned char var3 = var0[0xd13];
        unsigned char* var4 = var0 + 0x7c;
        void* var5 = var4 + 0x400 + var3 * 0xc0;
        typedef void* (*Type_ov031_022140e8)(void*, void*);
        ((Type_ov031_022140e8)func_ov031_022157e8)(var5, var1 + 2);
        break;
    }
    case 8:
    case 9:
        break;
    case 7: {
        var1[0] = 2;
        unsigned char var6 = var0[0xd13];
        unsigned char* var7 = var0 + 0x7c;
        func_ov031_02215750((int)(var7 + 0x400 + var6 * 0xc0), var1 + 2);
        break;
    }
    default:
        break;
    }
    return var1[0] != 0;
}
