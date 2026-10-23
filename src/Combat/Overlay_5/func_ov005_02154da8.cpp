#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov005_02154da8_6636 = 0x1964 };
#else
enum { Enum_ov005_02154da8_6636 = 0x19ec };
#endif

struct Struct_ov023_021dad8c_3;
struct Struct_ov005_02154da8;
struct Struct_ov023_021dad8c_2 {
    Struct_ov023_021dad8c_3* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_ov005_02154da8_2 {
    char unknown_0_[0x26c];
    SafeAllocator unknown_26c_;
    char unknown_280_[Enum_ov005_02154da8_6636 - 0x280];
    Struct_ov023_021dad8c_2 unknown_19ec_;
};

extern "C" void func_ov023_021dad78(Struct_ov023_021dad8c_2* arg0);
extern "C" void func_ov023_021dad8c(Struct_ov023_021dad8c_2* arg0, SafeAllocator* arg1, Struct_ov005_02154da8* arg2, void* arg3);

// USA: func_ov005_02154da8
extern "C" ARM void func_ov005_02154da8(Struct_ov005_02154da8_2* arg0, int arg1, int arg2) {
    SafeAllocator* var0 = &arg0->unknown_26c_;
    var0->Reset();
    func_ov023_021dad78(&arg0->unknown_19ec_);
    func_ov023_021dad8c(&arg0->unknown_19ec_, var0, (Struct_ov005_02154da8*)arg1, (void*)arg2);
}
