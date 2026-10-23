// USA: func_ov009_02184c30
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

extern "C" void func_ov023_021e5628(void*, void*);

extern "C" ARM void func_ov009_02184c30(void* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (var0->unknown_c58_ == 0 || var0->unknown_c58_ == 12)
        return;
    *(volatile unsigned int*)0x04000444 = 0;
    func_ov023_021e5628(var0->unknown_7f8_, 0);
    if (var0->unknown_d9c_ & 0x200) {
        var0->unknown_878_.Draw(true);
        var0->unknown_cd8_.Draw(true);
    }
    *(volatile unsigned int*)0x04000448 = 1;
}
