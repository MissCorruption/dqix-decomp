#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void** arg0, int arg1);
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_02156760
// KEEP-NAME
extern "C" ARM int func_ov004_02156760(void* arg0) {
    Struct_02061c04 var0;
    char* var1 = (char*)func_ov023_021f6880((void**)func_ov011_021849c8(arg0), 3);
    if (var1 == 0) {
        return 0;
    }
    if (func_ov023_021f6f10(var1) != 7) {
        return 0;
    }
    func_020ac4c0(&var0);
#if defined(jpn)
    const unsigned int var2 = 16;
#else
    const unsigned int var2 = 12;
#endif
    unsigned int var3;
    unsigned int var4 = var0.unknown_10_0_;
    var3 = var4 / var2;
    unsigned int var5 = var4 % var2;
    if (var5 != 0) {
        var3 = var3 + 1;
    }
    if (var3 != 0) {
        *(unsigned short*)(var1 + 0x5c) = 0;
        *(unsigned short*)(var1 + 0x5e) = var3;
        return 0;
    }
    func_ov011_021848a0(arg0, 0x66);
    return 0;
}
