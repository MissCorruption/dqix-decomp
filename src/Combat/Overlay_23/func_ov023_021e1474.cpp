#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_020deb08;
extern "C" short func_020deb08(struct Struct_020deb08* arg0);

struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);

extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

struct Struct_ov023_021e1474 {
    char unknown_0_[0xc];
    int unknown_c_;
};

struct Struct_ov023_021e1474_2 {
    char unknown_0_[4];
    Struct_ov023_021e1474* unknown_4_;
    short unknown_8_;
    char unknown_a_[0xe - 0xa];
    unsigned char unknown_e_;
    char unknown_f_[0x10 - 0xf];
};

struct Struct_ov002_0215b2c8 {
    int unknown_0_;
    Struct_ov023_021e1474_2* unknown_4_;
    short unknown_8_;
};

// USA: func_ov023_021e1474
extern "C" ARM void func_ov023_021e1474(Struct_ov002_0215b2c8* arg0, struct Struct_0201099c_10* arg1) {
    if (!arg1) return;

    func_020deb08((struct Struct_020deb08*)arg1);

    Struct_ov023_021e1474_2* var0;
    Struct_ov023_021e1474_2* var1 = arg0->unknown_4_;
    short var2 = arg0->unknown_8_;
    for (short var3 = 0; var3 < var2; var3++) {
        var0 = &var1[var3];
        Struct_ov023_021e1474* var4 = (Struct_ov023_021e1474*)func_020dedd0(arg1, var0->unknown_8_);
        var0->unknown_4_ = var4;
        if (!var4) continue;

        int var5 = (unsigned short)((unsigned int)(var4->unknown_c_ << 9) >> 21);
        if (var5 <= 0) continue;

        void* var6 = func_0205ec34();
        int var7 = var5 + 0x76;
        unsigned char* var8 = (unsigned char*)var6 + 0x8c;
        if (func_0206dfb0((int)var6, var8, var7 + 0xc00)) {
            var0->unknown_e_ |= 0x2;
        }
    }

    arg0->unknown_0_ = 0;
}
