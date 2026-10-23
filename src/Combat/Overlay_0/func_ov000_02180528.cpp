#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x488
#define REGION_OFFSET_1 0x1f00
#define REGION_OFFSET_2 0x96
#else
#define REGION_OFFSET_0 0x448
#define REGION_OFFSET_1 0x1d00
#define REGION_OFFSET_2 0x5e
#endif


struct Struct_ov000_02180528 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[REGION_OFFSET_0 - 0x25];
};

extern "C" int func_ov000_02174b14(void* arg0);

// USA: func_ov000_02180528
extern "C" ARM int func_ov000_02180528(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        signed char var1 = *(signed char*)(arg0 + var0 + 0x6c);
        struct Struct_ov000_02180528* var2 = (struct Struct_ov000_02180528*)(arg0 + 0x958) + var1;
        var2->unknown_24_ &= ~0x4;
    }
    *(short*)(arg0 + REGION_OFFSET_1 + REGION_OFFSET_2) = 0x10;
    *(int*)(arg0 + 0x920) = 0x100;
    *(int*)(arg0 + 0x92c) = 8;
    *(int*)(arg0 + 0x924) = 0x100;
    *(int*)(arg0 + 0x928) = 0x100;
    return func_ov000_02174b14(arg0);
}
