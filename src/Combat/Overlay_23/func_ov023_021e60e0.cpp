#include <globaldefs.h>

struct Struct_ov009_02188454 { unsigned int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void __clear(void*, int);
extern "C" void func_ov023_021e60c4(void* arg0, struct Struct_ov009_02188454* arg1);

// USA: func_ov023_021e60e0
extern "C" ARM void func_ov023_021e60e0(void* arg0, unsigned int arg1) {
    struct Struct_ov009_02188454 var0;
    __clear(&var0, 0xc);
    var0.unknown_4_ = arg1;
    func_ov023_021e60c4(arg0, &var0);
    func_ov023_021e60c4((char*)arg0 + 0x8 + 0x400, &var0);
    func_ov023_021e60c4((char*)arg0 + 0xac, &var0);
    func_ov023_021e60c4((char*)arg0 + 0x35c, &var0);
}
