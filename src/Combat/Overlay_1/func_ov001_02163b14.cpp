#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_02012fe4(void);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void* func_ov017_021d612c(void* arg0);
extern "C" void* func_02010768(void* arg0);
extern "C" void* func_02011584(void* arg0);
struct Struct_0201cb60_2;
struct Struct_0201cb60;
extern "C" Struct_0201cb60* func_0209998c(Struct_0201cb60_2* arg0, const char* arg1);
extern "C" void func_02013718(char* arg0, int arg1, int arg2);
extern "C" void _ZN6Zone3D10SwitchZoneEti(void* arg0, int arg1, int arg2);

struct Struct_ov001_02163b14 {
#if defined(jpn)
    char unknown_0_[0x6c];
#else
    char unknown1_0_[0x4c];
#endif
    SafeAllocator* unknown_4c_;
    int unknown_50_;
};

// USA: func_ov001_02163b14
extern "C" ARM int func_ov001_02163b14(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov001_02163b14* var1 = (struct Struct_ov001_02163b14*)func_02012fe4();
    void* var2 = func_02010768(var0);
    int var3 = *(int*)arg0;
    int var4 = -1;
    if (var3 == 0) {
        var4 = func_ov017_021d60f4(arg0);
    } else if (var3 == 2) {
        var4 = (int)func_ov017_021d612c(arg0);
        if (var4 == 0) return 0;
        void* var5 = func_02011584(var0);
        struct Struct_0201cb60* var6 = func_0209998c((struct Struct_0201cb60_2*)var5, (const char*)var4);
        if (var6 == 0) return 0;
        var4 = *(unsigned short*)var6;
    }
    if (var4 < 0) return 0;

    SafeAllocator* var7 = var1->unknown_4c_;
    int var8 = var1->unknown_50_;

#if defined(jpn)
    void* var9 = var7->Allocate(0x2864);
#else
    void* var9 = var7->Allocate(0x2824);
#endif
    if (var9 == 0) return 0;

    SafeAllocator* var10 = (SafeAllocator*)var7->Allocate(0x14);
    unsigned int var11 = var7->GetMaxPossibleAllocation();
    void* var12 = var7->Allocate(var11);
    var10->CreateTypeA(var12, var11);

    func_02013718((char*)var9, (int)var10, var8);
    _ZN6Zone3D10SwitchZoneEti(var9, var4, 0);

    *(void**)var2 = var9;
    return 1;
}
