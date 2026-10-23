#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/CharacterCreationUI.h"

extern "C" int func_020e0434(Struct_0201099c_3*, int);
struct Struct_0205d304;
extern "C" void func_0205d304(Struct_0205d304* arg0, const char* arg1, int arg2,
                            unsigned char arg3, unsigned char arg4,
                            unsigned char arg5, void* arg6
#if !defined(jpn)
                            , unsigned char arg7
#endif
);

// USA: 021d9da4; JPN: 021da63c.
extern "C" ARM void func_ov023_021d9da4(void* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
#if defined(jpn)
    var0->unknown_1f8_[1].unknown_a0_[0] = 0xa;
    var0->unknown_1f8_[1].unknown_a0_[1] = 2;
    var0->unknown_1f8_[1].unknown_a0_[2] = 0xb;
    var0->unknown_1f8_[1].unknown_a0_[3] = 4;
    var0->unknown_1f8_[1].unknown_a0_[4] = 0;
    var0->unknown_1f8_[1].unknown_a0_[5] = 2;
    var0->unknown_1f8_[1].unknown_a0_[6] = 0x11;
    var0->unknown_1f8_[1].unknown_a0_[7] = 0x10;
    var0->unknown_1f8_[1].unknown_b1_ = 3;
    var0->unknown_1f8_[1].unknown_b7_ = 0xa;
    var0->unknown_1f8_[1].unknown_b5_ = 1;
    var0->unknown_1f8_[1].unknown_b6_ = 1;
    memset(var0->unknown_f8_, 0, 0x800);
    int var1 = func_020e0434(&var0->unknown_e0_, 0x4274);
    sprintf(var0->unknown_f8_, (const char*)var1);
    func_0205d304((Struct_0205d304*)&var0->unknown_1f8_[1], var0->unknown_f8_, 0, 0, 0, 0, 0);
#else
    Struct_ov023_021d9c7c* var2 = &var0->unknown_1f8_[1];
    var2->unknown_a0_[0] = 0xa;
    var2->unknown_a0_[1] = 2;
    var2->unknown_a0_[2] = 0xb;
    var2->unknown_a0_[3] = 4;
    var2->unknown_a0_[4] = 0;
    var2->unknown_a0_[5] = 2;
    var2->unknown_a0_[6] = 0x11;
    var2->unknown_a0_[7] = 0x10;
    var2->unknown_b1_ = 3;
    var2->unknown_b7_ = 0xa;
    var2->unknown_b5_ = 1;
    var2->unknown_b6_ = 1;
    char* var3 = var0->unknown_f8_;
    memset(var3, 0, 0x960);
    int var4 = func_020e0434(&var0->unknown_e0_, 0x4274);
    sprintf(var3, (const char*)var4);
    func_0205d304((Struct_0205d304*)var2, var3, 0, 0, 0, 0, 0, 0);
#endif
}
