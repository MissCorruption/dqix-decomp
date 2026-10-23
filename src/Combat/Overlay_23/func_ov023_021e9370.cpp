#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void* func_ov023_021e8f28(int arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov023_021e9370
extern "C" ARM int func_ov023_021e9370(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e9370_336=0x144, Enum_ov023_021e9370_2384=0x8b8};
#else
 enum {Enum_ov023_021e9370_336=0x150, Enum_ov023_021e9370_2384=0x950};
#endif
    GameState::GetInstance();
    void* var0 = func_ov023_021e8f28(func_ov017_021d60f4(arg0));
    if (var0 == NULL) {
        return 0;
    }
    char* var1 = *(char**)((char*)var0 + Enum_ov023_021e9370_336);
    func_ov017_021d6134((char*)arg0 + 8, *(int*)(var1 + Enum_ov023_021e9370_2384));

    var1 = *(char**)((char*)var0 + Enum_ov023_021e9370_336);
    int var2 = *(int*)(var1 + Enum_ov023_021e9370_2384);
    unsigned short var3 = *(unsigned short*)(var1 + var2 * 2 + 0x100 + 0x6c);
    func_ov017_021d6134((char*)arg0 + 0x10, var3);

    var1 = *(char**)((char*)var0 + Enum_ov023_021e9370_336);
    int var4 = *(int*)(var1 + Enum_ov023_021e9370_2384);
    int var5 = *(int*)(var1 + var4 * 4 + 0x138);
    func_ov017_021d6134((char*)arg0 + 0x18, var5);

    return 1;
}
