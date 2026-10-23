#include "Combat/TryApplyElemFields.h"
#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_02189d68 func_ov012_0218a804
#define data_ov009_0218ac04 data_ov009_0218bb6c
#define data_ov013_02187d94 data_ov013_02188cd0
#define func_ov008_02187b20 func_ov008_021888fc
#define func_ov012_0218432c func_ov012_021853a0
#define func_ov012_0218930c func_ov012_02189be8
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov013_02185900 func_ov013_02186aec
#define func_ov023_021e6de4 func_ov023_021e7148
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205d5d0;
#if defined(jpn)
#else
#endif
extern "C" void func_ov008_02187278(void* arg0, char* arg1, int arg2, void* arg3);

struct Struct_ov008_02184968 {
    char unknown_0_[0xb8];
    char* unknown_b8_;
    char unknown_bc_[0xb18 - 0xbc];
    int unknown_b18_;
};

// USA: func_ov008_021873ac
extern "C" ARM void func_ov008_021873ac(struct Struct_ov008_02184968* arg0, int arg1) {
    if (arg1 == 0) {
        if (!(arg0->unknown_b18_ & 0x800)) return;
        memset(arg0->unknown_b8_, 0, R(0x800,0x960));
        func_ov008_02187278(arg0, arg0->unknown_b8_, arg1, 0);
#if defined(jpn)
        func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x130), 1, (int)arg0->unknown_b8_, 1);
#else
        func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x130), 1, (int)arg0->unknown_b8_, 1, 0);
#endif
        arg0->unknown_b18_ &= ~0x800;
    } else if (arg1 == 1) {
        if (!(arg0->unknown_b18_ & 0x1000)) return;
        memset(arg0->unknown_b8_, 0, R(0x800,0x960));
        func_ov008_02187278(arg0, arg0->unknown_b8_, arg1, 0);
#if defined(jpn)
        func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x130), 2, (int)arg0->unknown_b8_, 1);
#else
        func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x130), 2, (int)arg0->unknown_b8_, 1, 0);
#endif
        arg0->unknown_b18_ &= ~0x1000;
    }
}
