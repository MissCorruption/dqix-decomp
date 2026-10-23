#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#include "std_library_functions.h"

struct Struct_0205d5d0;
extern "C" void func_ov008_02187278(void* arg0, char* arg1, int arg2, void* arg3);
extern "C" void func_0204b088(void* arg0, int arg1);
extern "C" void func_ov023_021eb4f4(char* arg0);
struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);
struct Struct_ov008_02184968;
extern "C" void func_ov008_021873ac(struct Struct_ov008_02184968* arg0, int arg1);

struct Struct_ov008_02184968_2 {
    char unknown_0_[0xb8];
    char* unknown_b8_;
    char unknown_bc_[0xb08 - 0xbc];
    char* unknown_b08_;
    char unknown_b0c_[0xb10 - 0xb0c];
    signed char unknown_b10_;
    char unknown_b11_[0xb18 - 0xb11];
    int unknown_b18_;
    char unknown_b1c_[0xb24 - 0xb1c];
    int unknown_b24_;
};

// USA: func_ov008_02184968
extern "C" ARM void func_ov008_02184968(struct Struct_ov008_02184968_2* arg0) {
    if (arg0->unknown_b10_ == 0 || arg0->unknown_b10_ == 1 || arg0->unknown_b10_ == 0xe) return;

    if (arg0->unknown_b24_ == 0) {
        func_0204b088((char*)arg0 + 0xd0, 0);
    }
    if (arg0->unknown_b08_ != 0) {
        func_ov023_021eb4f4(arg0->unknown_b08_);
        return;
    }

    if (arg0->unknown_b18_ & 0x800) {
        memset(arg0->unknown_b8_, 0, LOW_REGION(0x800, 0x960));
        func_ov008_02187278(arg0, arg0->unknown_b8_, 0, 0);
#if defined(jpn)
        func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x130), 1, (int)arg0->unknown_b8_, 1);
#else
        func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x130), 1, (int)arg0->unknown_b8_, 1, 0);
#endif
        arg0->unknown_b18_ &= ~0x800;
    }

    func_ov008_021873ac((struct Struct_ov008_02184968*)arg0, 1);
    func_0205d2bc((struct Struct_0205d2bc*)((char*)arg0 + 0x130));
}
