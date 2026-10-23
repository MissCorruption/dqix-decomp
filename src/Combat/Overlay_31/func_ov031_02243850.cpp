#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Interrupts.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define data_ov031_0224c90c data_ov031_0224d50c
#define data_ov031_0224c920 data_ov031_0224d520
#endif

#define REG_IME (*(volatile unsigned short*)0x04000208)
struct Struct_02018300_3;
extern SafeAllocator data_ov031_02291e3c;
extern char data_0211e33c;
extern char data_ov031_0224c90c[];
extern char data_ov031_0224c920[];
extern "C" void* func_0202ae18();
extern "C" int func_0202b7d8(int*);
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" unsigned int* func_020d6c00();
extern "C" void func_020466e4(unsigned int*, unsigned int);
void MarkContextStackTopUnknownSubspace(ProcessorContext*, unsigned int);

enum Enum_ov031_02243850 {
#if defined(jpn)
    Enum_ov031_02243850_183616 = 0x2d740,
#else
    Enum_ov031_02243850_183616 = 0x2cd40,
#endif
    Enum_ov031_02243850_179200 = 0x2bc00
};

// USA: func_ov031_02243850
extern "C" ARM int func_ov031_02243850(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int* var1 = (int*)func_0202ae18();
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    int var3 = 1;
    if (func_0202b7d8(var1)) return -1;
    GameObject* var4 = var0->GetUnknownGameObject();
    if (var4) func_020397cc((Struct_02018300_3*)var4, 1);
    Enum_ov031_02243850 var5 = Enum_ov031_02243850_183616;
    SafeAllocator* var6 = *(SafeAllocator**)((char*)arg0 + 0x28);
    if (!var6) return -1;
    void* var7 = var6->Allocate(var5);
    if (!var7) return -1;
    SafeAllocator* var8 = (SafeAllocator*)arg0;
    var8->CreateTypeB(var7, var5, 4);
    var8->Reset();
    var5 = Enum_ov031_02243850_179200;
    void* var9 = var8->Allocate(var5);
    if (!var9) return -1;
    data_ov031_02291e3c.CreateTypeB(var9, var5, 0x20);
    if (*(unsigned char*)((char*)arg0 + 0x374) & 0x20) {
        BackgroundLoader::AddLockGlobal();
        *(void**)((char*)arg0 + 0x388) = &data_0211e33c;
        *(int*)((char*)arg0 + 0x39c) = var2->QueueLoadFile(data_ov031_0224c90c, 0);
        *(int*)((char*)arg0 + 0x3a0) = var2->QueueLoadFile(data_ov031_0224c920, 0);
        var3 = 3;
        BackgroundLoader::RemoveLockGlobal();
    } else {
        *(void**)((char*)arg0 + 0x4c) = var8->Allocate(0x700);
        func_020466e4(func_020d6c00(), 0x80);
    }
#if defined(jpn)
    *(int*)((char*)GetGameResources() + 0x41e4) = 1;
#else
    *(int*)((char*)GetGameResources() + 0x4494) = 1;
#endif
    MarkContextStackTopUnknownSubspace(data_02111304.activeContext, 0x100);
    EnableSpecificInterrupts(0xc78);
    (void)REG_IME;
    REG_IME = 1;
    EnableIRQInterrupts();
    return var3;
}
