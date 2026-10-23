#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov014_02188bfc {
    char unknown_0_[0x14];
    short unknown_14_;
    short unknown_16_;
    int unknown_18_;
    SafeAllocator* unknown_1c_;
};

struct Struct_ov014_021845ec;
extern "C" bool func_ov014_02188d10(Struct_ov014_021845ec*);
struct Struct_ov014_021844c4;
extern "C" bool func_ov014_02188bd0(Struct_ov014_021844c4*);
extern "C" bool func_ov014_02188c34(Struct_ov014_02188bfc* arg0);

// USA: func_ov014_02188bfc
extern "C" ARM bool func_ov014_02188bfc(Struct_ov014_02188bfc* arg0, SafeAllocator* arg1, short arg2) {
    func_ov014_02188d10((Struct_ov014_021845ec*)arg0);
    func_ov014_02188bd0((Struct_ov014_021844c4*)arg0);
    arg0->unknown_14_ = arg2;
    arg0->unknown_1c_ = arg1;
    arg0->unknown_16_ = 1;
    return func_ov014_02188c34(arg0);
}
