#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov012_02185f04_5000 = 0x1354, Enum_ov012_02185f04_132 = 0x7c, Enum_ov012_02185f04_4932 = 0x131c };
#else
enum { Enum_ov012_02185f04_5000 = 0x1388, Enum_ov012_02185f04_132 = 0x84, Enum_ov012_02185f04_4932 = 0x1344 };
#endif

struct Struct_020dfec0;
extern "C" int func_020dfec0(Struct_020dfec0*, SafeAllocator*, void*, unsigned int);

// USA: func_ov012_02185f04
extern "C" ARM void func_ov012_02185f04(char* arg0) {
    GameState::GetInstance();
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int var1 = *(int*)(arg0 + Enum_ov012_02185f04_5000);
    void* var2;
    unsigned int var3;
    var0->GetLoadedFileByID(var1, &var2, &var3);
    ((SafeAllocator*)(arg0 + Enum_ov012_02185f04_132))->Reset();
    func_020dfec0((Struct_020dfec0*)(arg0 + Enum_ov012_02185f04_4932), (SafeAllocator*)(arg0 + Enum_ov012_02185f04_132), var2, var3);
    var0->RemoveTask(*(int*)(arg0 + Enum_ov012_02185f04_5000));
    *(int*)(arg0 + Enum_ov012_02185f04_5000) = -1;
}
