#include <globaldefs.h>

struct Struct_020dac40_2;
struct Struct_0201bdac_2;
struct Struct_0201bdac;

extern "C" void func_020dac68(Struct_020dac40_2*);
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);

struct Struct_020dac40 {
#if defined(jpn)
    unsigned char unknown_0_[0x34ec];
#else
    unsigned char unknown1_0_[0x36fc];
#endif
    Struct_0201bdac_2* unknown_36fc_;
#if defined(jpn)
    unsigned char unknown_34f0_[0x9a4 - 0x4ec - 4];
#else
    unsigned char unknown_3700_[0xbc4 - 0x6fc - 4];
#endif
    void* unknown_3bc4_;
};

// USA: func_020dac40
extern "C" ARM void func_020dac40(Struct_020dac40* arg0) {
    func_020dac68((Struct_020dac40_2*)arg0->unknown_3bc4_);
    func_020469b4(arg0->unknown_36fc_, (Struct_0201bdac*)arg0->unknown_3bc4_);
}
