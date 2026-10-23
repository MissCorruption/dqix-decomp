#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);
extern "C" void func_ov017_0218e674(GameResources* arg0);
extern "C" void func_ov017_021a1ad0(GameResources* arg0);
extern "C" void func_ov017_02197394(GameResources*);

struct Struct_ov017_0218d06c {
    unsigned char unknown_0_[0xb];
    unsigned char unknown_b_;
};

// USA: func_ov017_0218d06c
extern "C" ARM void func_ov017_0218d06c(GameResources* arg0) {
    if (TestFlags00(arg0, 0x800) != 0) return;
    int var0 = 0;
    if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) != 0x26) {
        func_ov017_0218e674(arg0);
        var0 = 1;
    }
    if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) != 0x26 ||
        ((Struct_ov017_0218d06c*)arg0->unknown_ptr_array_3afc[13])->unknown_b_ == 0) {
        func_ov017_021a1ad0(arg0);
    }
    if (var0 != 0) {
        func_ov017_02197394(arg0);
    }
}
