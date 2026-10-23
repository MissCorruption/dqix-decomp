#include <globaldefs.h>
#include "Graphics/VRAMStaging.h"

struct Struct_0204166c;
extern "C" void func_020416c0(struct Struct_0204166c* arg0);

extern "C" void func_020439b0(void* arg0, int arg1);

#if defined(jpn)
extern int data_0210773c;
extern int data_020e846c;
extern const char data_020efd90[];
#define data_021077fc data_0210773c
#define data_020e7af8 data_020e846c
extern "C" void func_02041bbc(void*);
extern "C" int func_02043014(int, unsigned short*);
extern "C" void func_02046530(void*, unsigned short*, int, int);
#else
extern int data_021077fc;
#endif
extern int data_020e7af8;

struct Struct_020432c4 {
    char unknown_0_[0x68];
    unsigned int unknown_68_0_ : 16;
};

// USA: func_020432c4
extern "C" ARM void func_020432c4(char* arg0) {
    struct Struct_020432c4* var0 = *(struct Struct_020432c4**)(arg0 + (
#if defined(jpn)
0x1c4c
#else
0x1e28
#endif
));
    int var1;

    if (var0 != 0) {
        data_021077fc = var0->unknown_68_0_ << 3;
    }

    StageMemoryToVRAM(VRAMSubregion_TexturePalette, &data_020e7af8, data_021077fc, 0x20, true, true);

    for (var1 = 0; var1 < 0x80; var1++) {
#if defined(jpn)
        func_02041bbc(arg0 + 0x888 + var1 * 0x1c);
        *(unsigned char*)(arg0 + var1 + 0x1688) = 0;
#else
        func_020416c0((struct Struct_0204166c*)(arg0 + 0x9b8 + var1 * 0x1c));
        *(unsigned char*)(arg0 + var1 + 0x17b8) = 0;
#endif
    }

#if defined(jpn)
    if (*(void**)(arg0 + 0x1c4c)) {
        *(unsigned char*)(arg0 + 0x1789) = 0;
        unsigned short* var2 = *(unsigned short**)(data_020efd90 + 0x64);
        for (int var3 = 0; var3 < 14; var3++, var2++) {
            func_02046530(arg0, var2, func_02043014(12, var2), 12);
            *(unsigned char*)(arg0 + 0x1688 + var3) = 1;
        }
    }
#endif
    func_020439b0(arg0, 0);
}
