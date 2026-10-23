#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov017_021cf024_30536 = 0x7938 };
#else
enum { Enum_ov017_021cf024_30536 = 0x7748 };
#endif

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void func_ov000_02163338(unsigned char* arg0, unsigned char arg1);

struct Struct_ov017_021cf024 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

struct Struct_ov017_021cf024_2 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021cf024_3 {
    unsigned char unknown_0_[Enum_ov017_021cf024_30536];
    unsigned char unknown_7748_;
};

// USA: func_ov017_021cf024
extern "C" ARM void func_ov017_021cf024(int arg0, Struct_ov017_021cf024* arg1, int arg2, GameResources* arg3) {
    void* var0 = arg3->unknown_ptr_3718;
    Struct_ov017_021cf024_2* var1 = (Struct_ov017_021cf024_2*)func_ov017_021b8478(var0);
    Struct_ov017_021cf024_3* var2 = (Struct_ov017_021cf024_3*)func_ov017_021b8468(var0);
    if (var2 == NULL) {
        return;
    }
    if (var1->unknown_8_ != arg1->unknown_4_) {
        return;
    }
    func_ov000_02163338((unsigned char*)var2, arg1->unknown_6_);
    var2->unknown_7748_ = arg1->unknown_7_;
}
