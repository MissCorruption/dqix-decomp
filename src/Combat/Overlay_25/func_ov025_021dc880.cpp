#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_ov000_02163524(void* arg0);
extern "C" void* func_020421a0(void);
extern "C" void func_ov000_0216dbf0(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov000_021626a0(void* arg0, int arg1, int arg2);
extern "C" void func_02043124(void* arg0);
extern "C" void* func_ov000_02160f20(void* arg0);
struct Struct_ov025_021d8a40;
extern "C" void func_ov025_021d8a40(void* arg0, struct Struct_ov025_021d8a40* arg1);
extern "C" void func_ov025_021def30(unsigned char* arg0);

struct Struct_ov025_021dbe10 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};
extern "C" struct Struct_ov025_021dbe10 _ZZ21inline_ov025_021dcf14vE1s;

// USA: func_ov025_021dc880
extern "C" ARM void func_ov025_021dc880(unsigned char* arg0) {
    GetGameResources();
    func_ov000_02163524(arg0);
    void* var0 = func_020421a0();

    if (_ZZ21inline_ov025_021dcf14vE1s.unknown_8_ == 0) {
#if defined(jpn)
        func_ov000_0216dbf0(arg0 + 0xb94, 0, 0, 0);
#else
        func_ov000_0216dbf0(arg0 + 0xc18, 0, 0, 0);
#endif
        func_ov000_021626a0(arg0, 4, 1);
        func_02043124(var0);
        _ZZ21inline_ov025_021dcf14vE1s.unknown_8_ = 1;
    }

    if (_ZZ21inline_ov025_021dcf14vE1s.unknown_8_ != 1) {
        return;
    }

    if (++_ZZ21inline_ov025_021dcf14vE1s.unknown_10_ == 15) {
        func_ov025_021d8a40(arg0, (struct Struct_ov025_021d8a40*)func_ov000_02160f20(arg0));
    }
    if (_ZZ21inline_ov025_021dcf14vE1s.unknown_10_ == 60) {
        func_ov025_021def30(arg0);
    }
}
