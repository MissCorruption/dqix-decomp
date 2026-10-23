#include <globaldefs.h>

struct Struct_ov016_0218edac;
struct Struct_ov016_0218edac_3 {
    void (*unknown_0_)(Struct_ov016_0218edac*);
    void (*unknown_4_)(Struct_ov016_0218edac*);
    void (*unknown_8_[4])(Struct_ov016_0218edac*);
    void (*unknown_18_)(Struct_ov016_0218edac*);
};
struct Struct_ov016_0218edac {
    Struct_ov016_0218edac_3* unknown_0_;
};
struct Struct_ov016_0218edac_2 {
    Struct_ov016_0218edac* unknown_0_;
    unsigned char unknown_4_[0x30];
    void* unknown_34_;
    unsigned char unknown_38_[0x20];
    void* unknown_58_;
    void** unknown_5c_;
    void** unknown_60_;
    void* unknown_64_;
    void* unknown_68_;
    void* unknown_6c_;
    void* unknown_70_[2];
    unsigned char unknown_78_[0x1c];
    void* unknown_94_;
    #if defined(jpn)
    unsigned char unknown_98_[0xc];
#else
    unsigned char unknown1_98_[0x10];
#endif
    unsigned int unknown_a8_;
};
extern "C" void func_ov016_0218bca8(void*);

// USA: func_ov016_0218edac
extern "C" ARM void func_ov016_0218edac(Struct_ov016_0218edac_2* arg0) {
    if (arg0->unknown_0_) {
        arg0->unknown_0_->unknown_0_->unknown_18_(arg0->unknown_0_);
        if (arg0->unknown_0_) arg0->unknown_0_->unknown_0_->unknown_4_(arg0->unknown_0_);
    }
    func_ov016_0218bca8(arg0->unknown_34_);
    if (arg0->unknown_5c_) {
        unsigned int var0 = 0;
        if (var0 < arg0->unknown_a8_) do {
            func_ov016_0218bca8(arg0->unknown_5c_[var0]);
            var0++;
        } while (var0 < arg0->unknown_a8_);
        func_ov016_0218bca8(arg0->unknown_5c_);
    }
    if (arg0->unknown_60_) {
        unsigned int var1 = 0;
        if (var1 < arg0->unknown_a8_) do {
            func_ov016_0218bca8(arg0->unknown_60_[var1]);
            var1++;
        } while (var1 < arg0->unknown_a8_);
        func_ov016_0218bca8(arg0->unknown_60_);
    }
    if (arg0->unknown_64_) func_ov016_0218bca8(arg0->unknown_64_);
    if (arg0->unknown_68_) func_ov016_0218bca8(arg0->unknown_68_);
    if (arg0->unknown_6c_) func_ov016_0218bca8(arg0->unknown_6c_);
    int var2 = 0;
    do {
        if (arg0->unknown_70_[var2]) func_ov016_0218bca8(arg0->unknown_70_[var2]);
        arg0->unknown_70_[var2] = 0;
        var2++;
    } while (var2 < 2);
    if (arg0->unknown_94_) func_ov016_0218bca8(arg0->unknown_94_);
    if (arg0->unknown_58_) func_ov016_0218bca8(arg0->unknown_58_);
    arg0->unknown_0_ = 0;
    arg0->unknown_5c_ = 0;
    arg0->unknown_60_ = 0;
    arg0->unknown_68_ = 0;
    arg0->unknown_6c_ = 0;
    arg0->unknown_64_ = 0;
    arg0->unknown_58_ = 0;
    arg0->unknown_94_ = 0;
}
