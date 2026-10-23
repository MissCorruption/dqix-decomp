#include <globaldefs.h>

extern "C" void func_ov000_0217f518(char* arg0);

struct Struct_ov000_021735d0_2 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};
struct Struct_ov000_021735d0_3 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x17c - 0x70];
    int unknown_17c_;
};
extern "C" struct Struct_ov000_021735d0_2* func_ov000_0217f8c0(struct Struct_ov000_021735d0_3* arg0);

struct Struct_ov000_02180404 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0xc7 - 0x50];
#else
    char unknown1_50_[0x87 - 0x50];
#endif
    unsigned char unknown_87_;
    char unknown_88_[0x448 - 0x88];
};

// USA: func_ov000_02180404
extern "C" ARM void func_ov000_02180404(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        struct Struct_ov000_02180404* var1 = (struct Struct_ov000_02180404*)(arg0 + 0x958) + *(signed char*)(arg0 + var0 + 0x6c);
        int var2 = (var1->unknown_4c_ >= 0 && var1->unknown_4c_ <= 3) ? 1 : 0;
        if (var2 && var1->unknown_87_ != 0) {
            func_ov000_0217f518((char*)var1);
        }
    }
    struct Struct_ov000_021735d0_2* var3 = func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0);
    if (var3) {
        *((unsigned char*)var3 + 0x24) |= 4;
    }
}
