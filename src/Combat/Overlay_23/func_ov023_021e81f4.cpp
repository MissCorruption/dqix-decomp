#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/TryApplyElemFields.h"
#include "Resource/CharacterCreationUI.h"

struct Struct_ov023_021e81f4 {
    unsigned char unknown_0_[0x78];
    Struct_ov023_021d9c7c unknown_78_;
    unsigned char unknown_134_[0x5d8 - 0x78 - sizeof(Struct_ov023_021d9c7c)];
    void* unknown_5d8_;
};

struct Struct_ov023_021e802c;
extern "C" void func_ov023_021e8cc0(struct Struct_ov023_021e802c* arg0);
extern "C" void func_ov023_021e8cdc(void* arg0);

// USA: func_ov023_021e81f4
// JPN: func_ov023_021e83a0
extern "C" ARM void func_ov023_021e81f4(void* arg0) {
    Struct_ov023_021e81f4* var0 = static_cast<Struct_ov023_021e81f4*>(arg0);
#if defined(jpn)
    const int var1 = 0x800;
#else
    const int var1 = 0x960;
#endif
    memset(var0->unknown_5d8_, 0, var1);
    func_ov023_021e8cc0(static_cast<Struct_ov023_021e802c*>(arg0));
    func_0205d5d0(((Struct_0205d5d0*)(&var0->unknown_78_)), 0xc, ((int)(var0->unknown_5d8_)),
#if defined(jpn)
                              1
#else
                              0, 1
#endif
    );

    memset(var0->unknown_5d8_, 0, var1);
    func_ov023_021e8cdc(arg0);
    func_0205d5d0(((Struct_0205d5d0*)(&var0->unknown_78_)), 0xd, ((int)(var0->unknown_5d8_)),
#if defined(jpn)
                              1
#else
                              0, 1
#endif
    );
}
