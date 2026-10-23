#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/GPC.h"
#include "GameState/GameState.h"
extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
#include "Filesystem/FileIO.h"

struct Struct_02000c9c_8;
struct Struct_02012de8;
extern "C" int func_0200fb08(Struct_02000c9c_8*);
extern "C" Struct_02012de8* func_020d6c00();
extern "C" int func_02046708(Struct_02012de8*, unsigned int);
extern "C" void __clear(void*, unsigned int);

struct Struct_0207568c : GPCReadPair {
    Struct_0207568c() {
        GPCReadPair* var0 = this;
        ZeroInitGPCPointer(&var0->pGPCFile);
        var0->ZeroInitializeMachine();
    }
};

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_0207568c
extern "C" ARM void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2) {
    if (arg2 != NULL) *arg2 = 0;
    BackgroundLoader::FreeAllocationsGlobal();
    GameState* var0 = GameState::GetInstance();
    char var1[0x80];
    __clear(var1, sizeof(var1));
    StringReplaceLanguageTag(arg1, var1, func_0200fb08((Struct_02000c9c_8*)var0));
    void* var2;
    unsigned int var3;
    unsigned int var4 = 0;
    unsigned char* var5 = data_0211e33c;
    unsigned int var6 = 0x30000;
    if (func_02046708(func_020d6c00(), 0x02000000)) var6 -= 0x8000;
    Struct_0207568c var7;
    if (LoadAndDecompressGPCHeaderAndInnerFileInfo(&var7.pGPCFile, var7.machine, arg0, var5, var4, var6, false, NULL)) {
        var3 = var4;
        unsigned int var8 = 0;
        DecompressFileFromGPCByName(var7.pGPCFile, var7.machine, var5 + var3, var8, var6 - var3, var1);
        *arg2 = var8;
        var7.Reset();
        ZeroDestroyGPCPointer(&var7.pGPCFile);
        return var5 + var3;
    } else {
        var2 = NULL;
        var7.Reset();
        ZeroDestroyGPCPointer(&var7.pGPCFile);
    }
    return var2;
}
