#include <globaldefs.h>

extern "C" int func_ov000_021815c8(void* arg0);

struct Struct_ov000_021751ac {
    char unknown_0_[0x18];
    signed char unknown_18_;
    char unknown_19_[0x24 - 0x19];
    unsigned char unknown_24_;
    char unknown_25_[0x28 - 0x25];
    int unknown_28_;
    char unknown_2c_[0x4c - 0x2c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

// USA: func_ov000_021751ac
extern "C" ARM void func_ov000_021751ac(char* arg0) {
    int var0 = func_ov000_021815c8(arg0);
    struct Struct_ov000_021751ac* var1;
    for (signed char var2 = 0; var2 < 4; var2++) {
        var1 = (struct Struct_ov000_021751ac*)(arg0 + 0x958) + *(signed char*)(arg0 + var2 + 0x6c);
        int var3 = (var0 >= 0 && var0 <= 3) ? 1 : 0;
        if (var3) {
            if (var0 == var1->unknown_4c_) {
                continue;
            }
        }
        if (!(var1->unknown_28_ & 1)) {
            continue;
        }
        char* var4 = (char*)var1 + var1->unknown_18_;
        *(unsigned char*)(var4 + 0x10) = 0x64;
        var1->unknown_24_ = var1->unknown_24_ & ~4;
        var1->unknown_24_ = var1->unknown_24_ & ~1;
    }
}
