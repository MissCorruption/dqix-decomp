#include <globaldefs.h>

extern "C" void func_ov000_0217f480(char* arg0);

struct Struct_ov000_02180394_2 {
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

struct Struct_ov000_02180394 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x958 - 0x70];
    struct Struct_ov000_02180394_2 unknown_958_[1];
};

// USA: func_ov000_02180394
extern "C" ARM void func_ov000_02180394(struct Struct_ov000_02180394* arg0) {
    for (int var0 = 0; var0 < 4; var0++) {
        struct Struct_ov000_02180394_2* var1 = &arg0->unknown_958_[arg0->unknown_6c_[var0]];
        int var2 = 0;
        int var3 = var1->unknown_4c_;
        if (var3 >= 0 && var3 <= 3) var2 = 1;
        if (var2 && var1->unknown_87_) {
            func_ov000_0217f480((char*)var1);
        }
    }
}
