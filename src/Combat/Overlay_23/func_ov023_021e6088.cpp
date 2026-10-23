#include <globaldefs.h>

struct Struct_ov009_02188454 { unsigned int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void func_ov023_021e60c4(void* arg0, struct Struct_ov009_02188454* arg1);

// USA: func_ov023_021e6088
extern "C" ARM void func_ov023_021e6088(void* arg0, struct Struct_ov009_02188454* arg1) {
    func_ov023_021e60c4(arg0, arg1);
    func_ov023_021e60c4((char*)arg0 + 0x408, arg1);
    func_ov023_021e60c4((char*)arg0 + 0xac, arg1);
    func_ov023_021e60c4((char*)arg0 + 0x35c, arg1);
}
