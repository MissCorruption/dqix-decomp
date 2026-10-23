#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_020e25cc(signed char* arg0);
struct Struct_020200c0_3;
extern "C" void func_02020520(struct Struct_020200c0_3* arg0);
struct Struct_020e1568;
extern "C" void func_020e1568(struct Struct_020e1568* arg0);
extern "C" void func_020e1588(unsigned char* arg0);
extern "C" void func_020e15f8(char* arg0, int arg1, int arg2);
struct Struct_02043368;
extern "C" void func_0205a234(struct Struct_02043368* arg0);

struct Struct_020e2490 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    unsigned char* unknown_c_;
    unsigned char* unknown_10_;
    signed char unknown_14_;
    signed char unknown_15_;
    signed char unknown_16_;
    signed char unknown_17_;
    short unknown_18_;
    short unknown_1a_;
    short unknown_1c_;
    signed char unknown_1e_;
    signed char unknown_1f_;
    void* unknown_20_;
};

// USA: func_020e2490
extern "C" ARM void func_020e2490(struct Struct_020e2490* arg0, int arg1, int arg2, void* arg3, SafeAllocator* arg4, int arg5, unsigned char arg6) {
    arg0->unknown_1c_ = 0;
    arg0->unknown_1e_ = 8;
    arg0->unknown_18_ = 0;
    arg0->unknown_1a_ = 0;
    arg0->unknown_16_ = 0;
    func_020e25cc((signed char*)arg0);

    arg0->unknown_0_ = arg4->Allocate(arg5 * 0xc);
    arg0->unknown_4_ = arg4->Allocate(0xc);
    arg0->unknown_8_ = arg4->Allocate(arg5 * 0xc);
    arg0->unknown_c_ = (unsigned char*)arg4->Allocate(0x40);
    arg0->unknown_10_ = (unsigned char*)arg4->Allocate(0x4c);
    arg0->unknown_20_ = arg3;

    int var0;
    for (var0 = 0; var0 < arg5; var0++) {
        func_02020520((struct Struct_020200c0_3*)((char*)arg0->unknown_0_ + var0 * 0xc));
        func_020e1568((struct Struct_020e1568*)((char*)arg0->unknown_8_ + var0 * 0xc));
    }

    func_020e1588(arg0->unknown_c_);
    *(void**)(arg0->unknown_c_ + 0x0) = arg0->unknown_0_;
    *(void**)(arg0->unknown_c_ + 0x4) = arg0->unknown_4_;
    *(void**)(arg0->unknown_c_ + 0x8) = arg0->unknown_8_;
    arg0->unknown_c_[0x3c] = (unsigned char)arg5;
    arg0->unknown_c_[0x3d] = arg6;

    func_020e15f8((char*)arg0->unknown_10_, arg1, arg2);
    *(void**)(arg0->unknown_10_ + 0x4) = arg0->unknown_c_;

    if (arg0->unknown_20_ != NULL) {
        func_0205a234((struct Struct_02043368*)arg0->unknown_20_);
    }
}
