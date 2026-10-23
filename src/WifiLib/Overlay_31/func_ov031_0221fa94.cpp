#include <globaldefs.h>

struct Struct_ov031_0224f670_12 {
    char unknown_0_[4];
    void* (*unknown_4_)(unsigned int size);
    char unknown_8_[0x38];
    unsigned char* unknown_40_;
    char unknown_44_[0x10];
    void* unknown_54_;
    char unknown_58_[4];
    unsigned char* unknown_5c_;
    char unknown_60_[0x10];
    int unknown_70_;
};

extern Struct_ov031_0224f670_12 data_ov031_0224f670;

extern "C" void func_ov031_0221f9f8();
extern "C" int func_ov031_0221f8d8(void (*arg0)(int, int), unsigned char* arg1, unsigned int arg2);
void SleepCurrentContext(unsigned int);
extern "C" int func_ov031_0221fa20();
extern "C" void func_ov031_0221fa58(int arg0, int);

static inline unsigned long long inline_ov031_0221fa94(unsigned long long arg0) {
    return (arg0 + 0x1f) & ~0x1fULL;
}

// USA: func_ov031_0221fa94
extern "C" THUMB int func_ov031_0221fa94(int arg0) {
    int var0 = 1;
    int var1;
    data_ov031_0224f670.unknown_70_ = arg0;
    func_ov031_0221f9f8();
    unsigned int var2 = arg0 * 0xd0;
    void* var3 = data_ov031_0224f670.unknown_4_(var2 + 0x24d0 + arg0 * 0xc0);
    data_ov031_0224f670.unknown_54_ = var3;
    if (var3 == NULL) {
        return -1;
    }
    unsigned char* var4 = (unsigned char*)inline_ov031_0221fa94((unsigned int)var3);
    data_ov031_0224f670.unknown_40_ = var4;
    data_ov031_0224f670.unknown_5c_ = (unsigned char*)inline_ov031_0221fa94((unsigned int)var4 + (var2 + 0x2490));
    if (func_ov031_0221f8d8(func_ov031_0221fa58, var4, var2 + 0x2490) == 0) {
        return -2;
    }
    do {
        SleepCurrentContext(10);
        int var5 = func_ov031_0221fa20();
        while (var5 != 0) {
            switch (var5) {
            case 4:
            case 5:
                break;
            case 6:
                var0 = 0;
                var1 = 1;
                break;
            default:
                var0 = 0;
                var1 = -2;
                break;
            }
            var5 = func_ov031_0221fa20();
        }
    } while (var0);
    return var1;
}
