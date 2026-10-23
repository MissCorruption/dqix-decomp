#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#if defined(jpn)
#define func_ov008_0218aee4 func_ov008_0218bb50
#endif

struct Struct_0205d0e0 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    char unknown_aa_[0xac - 0xaa];
    short unknown_ac_;
    short unknown_ae_;
};

struct Struct_0205d81c;

struct Struct_ov008_0218aee4 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x28 - 0x1c];
};

struct Struct_ov008_0218aee4_2 {
    char unknown_0_[0xf0];
    Struct_ov008_0218aee4 unknown_f0_[2];
};

struct Struct_ov008_0218aee4_3 {
    char unknown_0_[0x18];
    char unknown_18_[0x1f4 - 0x18];
    void* unknown_1f4_;
    Struct_ov008_0218aee4_2* unknown_1f8_;
    char unknown_1fc_[LOW_REGION(0xe95, 0xe99) - 0x1fc];
    signed char unknown_e99_;
};

extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c* arg0, int arg1);
extern "C" void func_0205ac40(void* arg0, Struct_ov008_0218aee4* arg1);

// USA: func_ov008_0218aee4
extern "C" ARM void func_ov008_0218aee4(Struct_ov008_0218aee4_3* arg0) {
    if (arg0->unknown_e99_ != 1) {
        return;
    }
    Struct_0205d0e0* var0 = func_0205d81c((Struct_0205d81c*)arg0->unknown_18_, 0);
    if (var0 == NULL) {
        return;
    }
    short var1 = var0->unknown_ac_ * 8;
    short var2 = var0->unknown_ae_;
    Struct_ov008_0218aee4_2* var3 = arg0->unknown_1f8_;
    short var4 = var0->unknown_a8_;
    var3->unknown_f0_[0].unknown_14_ = (var1 - 1) << 12;
    short var5 = var2 * 8;
    var3->unknown_f0_[0].unknown_18_ = (var5 - 1) << 12;
    func_0205ac40(arg0->unknown_1f4_, &var3->unknown_f0_[0]);
    var3 = arg0->unknown_1f8_;
    var3->unknown_f0_[1].unknown_14_ = LOW_REGION((var1 + 0x50), (var1 + (short)(var4 * 8) - 8)) << 12;
    var3->unknown_f0_[1].unknown_18_ = (var5 - 1) << 12;
    func_0205ac40(arg0->unknown_1f4_, &var3->unknown_f0_[1]);
}
