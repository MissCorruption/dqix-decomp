// USA: func_ov006_0215fcf0
#include <globaldefs.h>

struct Struct_02081164;
struct Struct_0207fdcc_2;
extern "C" void func_0208103c(void*, int, int);
extern "C" void func_02080798(void*, int, int);
extern "C" void func_02081164(Struct_02081164*, int, int);
extern "C" int func_020813ec(void*, int);
extern "C" void func_02080c68(void*, int, int);
extern "C" void func_02080c20(Struct_0207fdcc_2*, int);

struct Struct_ov006_0215fcf0 {
#if defined(jpn)
    unsigned char unknown_0_[0xc];
    void* unknown_14_;
    unsigned char unknown_10_[0x386 - 0x10];
#else
    unsigned char unknown1_0_[0x14];
    void* unknown_14_;
    unsigned char unknown_18_[0x386 - 0x18];
#endif
    unsigned char unknown_386_;
};

extern "C" ARM void func_ov006_0215fcf0(Struct_ov006_0215fcf0* arg0) {
    void* var0 = arg0->unknown_14_;
    int var1 = (short)(arg0->unknown_386_ + 0x29);
    func_0208103c(var0, 0x5a, var1);
#if !defined(jpn)
    func_02080798(var0, 0x5a, 1);
#endif
    func_02081164((Struct_02081164*)var0, 0xf, 1);
    func_020813ec(var0, 0xf);
    func_02080c68(var0, 0xf, 2);
    func_02080c20((Struct_0207fdcc_2*)var0, 0xf);
}
