#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021ed44c func_ov023_021ed394
#endif
#include "std_library_functions.h"

extern "C" void func_ov023_021ed254(void* arg0, void* arg1);
struct Struct_0205d5d0;
struct Struct_ov023_021ed44c {
    char unknown_0_[0x1c];
    void* unknown_1c_;
    char unknown_20_[0x438 - 0x20];
    unsigned short unknown_438_;
};

// USA: func_ov023_021ed44c
extern "C" ARM void func_ov023_021ed44c(Struct_ov023_021ed44c* arg0) {
    if ((arg0->unknown_438_ & 1) == 0) return;
    memset(arg0->unknown_1c_, 0,
#if defined(jpn)
        0x800);
#else
        0x960);
#endif
    func_ov023_021ed254(arg0, arg0->unknown_1c_);
#if defined(jpn)
    func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0xc4), 0, (int)arg0->unknown_1c_, 0);
#else
    func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0xc4), 0, (int)arg0->unknown_1c_, 0, 1);
#endif
    arg0->unknown_438_ &= ~1;
}
