#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/TryApplyElemFields.h"
#include "Resource/CharacterCreationUI.h"

struct Struct_ov023_021e7fe4 {
    unsigned char unknown_0_[0x78];
    Struct_ov023_021d9c7c unknown_78_;
    unsigned char unknown_134_[0x5d8 - 0x78 - sizeof(Struct_ov023_021d9c7c)];
    void* unknown_5d8_;
};

extern "C" void func_ov023_021e868c(void*);

// USA: func_ov023_021e7fe4
// JPN: func_ov023_021e81bc
extern "C" ARM void func_ov023_021e7fe4(void* arg0) {
    Struct_ov023_021e7fe4* var0 = static_cast<Struct_ov023_021e7fe4*>(arg0);
#if defined(jpn)
    const int var1 = 0x800;
#else
    const int var1 = 0x960;
#endif
    memset(var0->unknown_5d8_, 0, var1);
    func_ov023_021e868c(arg0);
    func_0205d5d0(((Struct_0205d5d0*)(&var0->unknown_78_)), 0xb, ((int)(var0->unknown_5d8_)), 1
#if !defined(jpn)
                              , 0
#endif
    );
}
