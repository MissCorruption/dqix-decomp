// USA: func_ov003_02167548
#include <globaldefs.h>

struct Struct_0207fcb8;
extern "C" void func_0207fcb8(Struct_0207fcb8* arg0);
struct Struct_0207fd00;
extern "C" void func_0207fd00(Struct_0207fd00* arg0);
struct Struct_0207fd44_2;
extern "C" void func_0207fd44(Struct_0207fd44_2* arg0);

struct Struct_ov003_02160134 {
    char unknown_0_[0x10];
    void* unknown_10_;
#if defined(jpn)
    char unknown_14_[0x44 - 0x14];
#else
    char unknown1_14_[0x74 - 0x14];
#endif
    unsigned char unknown_74_;
};

extern "C" ARM void func_ov003_02167548(Struct_ov003_02160134* arg0) {
    if (arg0->unknown_74_ && arg0->unknown_10_) {
        func_0207fcb8((Struct_0207fcb8*)arg0->unknown_10_);
        func_0207fd00((Struct_0207fd00*)arg0->unknown_10_);
        func_0207fd44((Struct_0207fd44_2*)arg0->unknown_10_);
    }
}
