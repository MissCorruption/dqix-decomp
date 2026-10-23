#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned int func_02010768(void*);
extern "C" unsigned int func_02013750(void*, int);
struct Struct_0203d028;
extern "C" unsigned int func_0207df50(Struct_0203d028*);
extern "C" unsigned int func_02012fe4();

// USA: func_ov001_02163c60
extern "C" ARM int func_ov001_02163c60(void) {
#if defined(jpn)
    enum { Enum_ov001_02163c60_76 = 0x6c, Enum_ov001_02163c60_80 = 0x70 };
#else
    enum { Enum_ov001_02163c60_76 = 0x4c, Enum_ov001_02163c60_80 = 0x50 };
#endif
    unsigned int var0;
    unsigned int var1 = (unsigned int)GameState::GetInstance();
    unsigned int var2 = func_02012fe4();
    unsigned int* var3 = (unsigned int*)func_02010768((void*)var1);
    unsigned int var4 = *var3;
    if (var4 != 0) {
        func_02013750((void*)var4, 1);
        var0 = *(unsigned int*)((char*)var4 + Enum_ov001_02163c60_76);
        if (var0 != 0) {
            ((SafeAllocator*)var0)->Destroy();
        }
    }
    *var3 = 0;
    var0 = *(unsigned int*)((char*)var2 + Enum_ov001_02163c60_76);
    unsigned int var5 = *(unsigned int*)((char*)var2 + Enum_ov001_02163c60_80);
    ((SafeAllocator*)var0)->Reset();
    func_0207df50((Struct_0203d028*)var5);
    return 1;
}
