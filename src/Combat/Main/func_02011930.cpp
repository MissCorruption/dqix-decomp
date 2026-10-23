#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif
#include "NitroSDK/Memory.h"

struct Struct_02011930 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
};

// USA: func_02011930
extern "C" ARM unsigned char func_02011930(void* arg0, struct Struct_02011930* arg1, void* arg2, void* arg3) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (var0[(IS_JPN ? 0x61ec : 0x646c)] != 0) {
        if (arg1 != NULL) {
            arg1->unknown_0_ = var0[(IS_JPN ? 0x61f0 : 0x6470)];
            arg1->unknown_1_ = var0[(IS_JPN ? 0x61f1 : 0x6471)];
            arg1->unknown_2_ = *(unsigned short*)(var0 + (IS_JPN ? 0x61f2 : 0x6472));
        }
        if (arg2 != NULL) {
            VectorizedInvertedMemcpy(var0 + (IS_JPN ? 0x629f : 0x64df), arg2, 0xa);
            var0[(IS_JPN ? 0x629f : 0x64df)] = 0;
        }
        if (arg3 != NULL) {
            VectorizedInvertedMemcpy(var0 + (IS_JPN ? 0x62a9 : 0x64e9), arg3, 0xa);
            var0[(IS_JPN ? 0x62a9 : 0x64e9)] = 0;
        }
    }
    return var0[(IS_JPN ? 0x61ec : 0x646c)];
}
