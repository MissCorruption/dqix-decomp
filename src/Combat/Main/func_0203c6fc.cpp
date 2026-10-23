#include <globaldefs.h>

struct Struct_0203c6fc {
#if defined(jpn)
    short unknown1_0_;
    short unknown_2_;
    char unknown_4_[10];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
#else
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[3];
#endif
};

struct Struct_0203c108_2 {
#if defined(jpn)
    void* unknown_0_;
    Struct_0203c6fc unknown_4_[96];
    int unknown_604_;
    char* unknown_608_;
    unsigned int unknown_60c_;
    unsigned short unknown_610_;
    unsigned short unknown_612_;
    unsigned char unknown_614_[256];
#else
    int unknown1_0_;
    struct Struct_0203c6fc unknown1_4_[32];
    char unknown_504_[0xE];
    unsigned short unknown_512_;
#endif
};

// USA: func_0203c6fc
#if defined(jpn)
extern "C" ARM void func_0203cbe4(struct Struct_0203c108_2* arg0, const short* arg1)
#else
extern "C" ARM void func_0203c6fc(struct Struct_0203c108_2* arg0, short arg1)
#endif
{
#if defined(jpn)
    if (arg1 == NULL) return;
    for (int var0 = 0; var0 < 10; ++var0) {
        short var1 = arg1[var0];
        if (var1 < 0) continue;
        Struct_0203c6fc* var2 = &arg0->unknown_4_[var1];
        Struct_0203c6fc* var3 = &arg0->unknown_4_[var1 + 1];
        if (var2->unknown_e_ != 0 && var3->unknown_e_ != 0) {
            --var2->unknown_e_;
            --var3->unknown_e_;
            if (var2->unknown_e_ == 0 && var3->unknown_e_ == 0) {
                arg0->unknown_612_ -= 2;
            }
        }
    }
#else
    struct Struct_0203c6fc* var0;
    int var1;
    if (arg1 < 0) {
        return;
    }
    var0 = &arg0->unknown1_4_[arg1];
    var1 = var0->unknown_24_;
    if (var1 == 0) {
        return;
    }
    var0->unknown_24_ = var1 - 1;
    if (((var1 - 1) & 0xff) == 0) {
        arg0->unknown_512_--;
    }
#endif
}
