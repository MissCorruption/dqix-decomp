#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/CharacterCreationUI.h"
#include "Combat/TryApplyElemFields.h"

extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" int func_02042058(char*, const char*);

// USA: 021d9d34; JPN: 021da5d8.
extern "C" ARM void func_ov023_021d9d34(char* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (!(var0->unknown_d9c_ & 0x4000)) return;
#if defined(jpn)
    memset(var0->unknown_f8_, 0, 0x800);
    int var1 = func_020e0434(&var0->unknown_e0_, 0x4274);
    func_02042058(var0->unknown_f8_, (const char*)var1);
    func_0205d5d0((Struct_0205d5d0*)&var0->unknown_1f8_[1], 2,
                             (int)var0->unknown_f8_, 1);
#else
    char* var2 = var0->unknown_f8_;
    memset(var2, 0, 0x960);
    int var3 = func_020e0434(&var0->unknown_e0_, 0x4274);
    func_02042058(var2, (const char*)var3);
    func_0205d5d0((Struct_0205d5d0*)&var0->unknown_1f8_[1], 2, (int)var2, 1, 0);
#endif
    var0->unknown_d9c_ &= ~0x4000;
}
