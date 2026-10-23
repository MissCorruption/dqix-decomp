#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_0218099c_7538 = 0x1faa };
#else
enum { Enum_ov000_0218099c_7538 = 0x1d72 };
#endif

extern "C" int func_ov000_0217f62c(void* arg0);
extern "C" void func_ov000_02180594(void* arg0, int arg1, int arg2);

struct Struct_ov000_0218099c {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

// USA: func_ov000_0218099c
extern "C" ARM void func_ov000_0218099c(void* arg0, int arg1) {
    char* var0 = (char*)arg0;
    for (int var1 = 0; var1 < 4; var1++) {
        struct Struct_ov000_0218099c* var2 = (struct Struct_ov000_0218099c*)(var0 + 0x958) + *(signed char*)(var0 + var1 + 0x6c);
        if (*(int*)(var0 + 0x17c) == var2->unknown_4c_) {
            if (!(var2->unknown_24_ & 0x4)) {
                if (!func_ov000_0217f62c(var0)) {
                    return;
                }
                func_ov000_02180594(var0, arg1, 0);
                *(unsigned short*)(var0 + Enum_ov000_0218099c_7538) &= ~0x8;
                *(unsigned short*)(var0 + Enum_ov000_0218099c_7538) = (*(unsigned short*)(var0 + Enum_ov000_0218099c_7538) | 0x10) & ~0x20;
                return;
            }
            *(int*)(var0 + 0x910) = 0;
            *(int*)(var0 + 0x914) = 0;
            *(int*)(var0 + 0x918) = 0;
            *(int*)(var0 + 0x91c) = 0;
            *(unsigned short*)(var0 + Enum_ov000_0218099c_7538) &= ~0x38;
            return;
        }
    }
}
