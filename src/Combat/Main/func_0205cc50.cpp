#include <globaldefs.h>

#if defined(jpn)
#define func_0205cc50 func_0205dfa8
#endif

extern "C" int func_020421a0();
struct Struct_0205bd58;
extern "C" void func_0205bd58(Struct_0205bd58 *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

struct Struct_0205cc50 {
    unsigned char unknown_0_[0x58];
    short unknown_58_;
    short unknown_5a_;
    unsigned char unknown_5c_[0x20];
    int unknown_7c_;
    unsigned char unknown_80_[0x34];
    short unknown_b4_;
    short unknown_b6_;
    short unknown_b8_;
    short unknown_ba_;
    unsigned char unknown_bc_[0x14];
    int unknown_d0_;
    int unknown_d4_;
    int unknown_d8_;
    int unknown_dc_;
    unsigned short unknown_e0_[8];
    unsigned short unknown_f0_[8];
    unsigned short unknown_100_[8];
    unsigned short unknown_110_[8];
};

// USA: func_0205cc50
#if defined(jpn)
extern "C" ARM void func_0205cc50(void *arg0) {
#else
extern "C" ARM void func_0205cc50(void *arg0, int arg1, int arg2) {
#endif
    Struct_0205cc50 *var0 = static_cast<Struct_0205cc50 *>(arg0);
    func_020421a0();

    int var1       = var0->unknown_7c_;
    int var2 = var1 * 12 + 16;
    var0->unknown_b8_     = var0->unknown_d0_ + 24;
    var0->unknown_ba_    = var2 + (var1 - 1) * (var0->unknown_d8_ - 12);
#if !defined(jpn)
    if (arg1 != 0) {
        short var3 = (short) ((var0->unknown_b8_ + 7) & ~7);
        var0->unknown_b8_        = var3 + arg2;
    }
#endif
    for (int var4 = 0; var4 < var0->unknown_dc_; ++var4) {
        var0->unknown_e0_[var4]  = 12;
        var0->unknown_f0_[var4] = var0->unknown_d8_ * var4 + 8;
    }
    short var5      = var0->unknown_b4_;
    short var6      = var0->unknown_b6_;
    var0->unknown_58_ = var5;
    var0->unknown_5a_ = var6;
    func_0205bd58(reinterpret_cast<Struct_0205bd58 *>(static_cast<unsigned char *>(arg0) + 0x20), var0->unknown_dc_,
                      (int) var0->unknown_e0_, (int) var0->unknown_f0_, (int) var0->unknown_100_, (int) var0->unknown_110_);
}
