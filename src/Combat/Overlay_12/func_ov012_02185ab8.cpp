#include <globaldefs.h>

struct Struct_ov012_02185ab8
{
#if defined(jpn)
    char unknown1_0_[0x90];
    char unknown_ac_[0xd0c - 0x90];
    char unknown_d28_[0x608];
    char unknown_1314_[0x1340 - 0x1314];
#else
    char unknown_0_[0xac];
    char unknown_ac_[0xd28 - 0xac];
    char unknown_d28_[0x60c];
    char unknown_1334_[0x1370 - 0x1334];
#endif
    unsigned char unknown_1370_;
    unsigned char unknown_1371_;
};

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(Struct_0205d2bc*);
struct Struct_ov002_02155f4c;
extern "C" void func_ov023_021e76a8(Struct_ov002_02155f4c*);
extern "C" unsigned int func_ov023_021e6b8c(Struct_ov012_02185ab8* arg0);

// USA: func_ov012_02185ab8
#if defined(jpn)
extern "C" ARM void func_ov012_02185ab8(Struct_ov012_02185ab8* arg0)
#else
extern "C" ARM unsigned int func_ov012_02185ab8(Struct_ov012_02185ab8* arg0)
#endif
{
    func_ov023_021e76a8((Struct_ov002_02155f4c*)arg0->unknown_d28_);
    if (arg0->unknown_1371_ != 0)
        func_0205d2bc((Struct_0205d2bc*)arg0->unknown_ac_);
#if !defined(jpn)
    return func_ov023_021e6b8c(arg0);
#endif
}
