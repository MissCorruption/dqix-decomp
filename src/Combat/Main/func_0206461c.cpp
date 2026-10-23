#include <globaldefs.h>
#if defined(jpn)
#define func_02095578 func_020971c8
#define data_020f05dc data_020f0644
#endif
#include <GameState/GameState.h>
#include <Filesystem/BackgroundLoader.h>
#include <Filesystem/FileIO.h>
#include <std_library_functions.h>
#include "Resource/GameResources.h"

struct Struct_0206461c {
    unsigned char unknown_0_[0x47c];
    int unknown_47c_;
    unsigned char unknown_480_[0x14];
    int unknown_494_;
};
struct Struct_0206461c_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[3];
    char unknown_5_[3];
};
struct Struct_02108844;
struct Struct_02013fb4;
extern Struct_02108844 data_02108844;
extern char data_020f05dc[] __attribute__((aligned(4)));
extern "C" int func_0201079c(char*);
extern "C" int func_020107d0(char*);
extern "C" void func_02064574(Struct_02108844*, int, Struct_02013fb4*, int, int, int, int);
extern "C" void* func_02094d6c();
extern "C" void func_02095578(void*);

static inline SafeAllocator* inline_0206461c(GameResources* arg0, int arg1) {
    return &arg0->allocator_array_38[arg1];
}

// USA: func_0206461c
extern "C" ARM int func_0206461c(Struct_0206461c* arg0, Struct_0206461c_2* arg1) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader::GetInstance();
    Struct_02108844* var1 = &data_02108844;
    SafeAllocator* var2 = inline_0206461c(GetGameResources(), 15);
    unsigned int var3 = 0;
    char var4[4];
    char var5[64];
    int var6 = func_0201079c((char*)var0);
    int var7 = func_020107d0((char*)var0);
    var2->Reset();
    arg0->unknown_47c_ = 0;
    arg0->unknown_494_ = 0;
    memcpy(var4, arg1->unknown_5_, 3);
    var4[3] = 0;
    if (var4[0] == 'F') var4[1] = 0;
    BackgroundLoader::AddLockGlobal();
    sprintf(var5, data_020f05dc, var4);
    Struct_02013fb4* var8 = (Struct_02013fb4*)LoadFileIntoMemory(var5, data_0211e33c, &var3);
    if (var8) func_02064574(var1, (int)var2, var8, var3, arg1->unknown_0_, var6, var7);
    BackgroundLoader::RemoveLockGlobal();
    func_02095578(func_02094d6c());
    return 1;
}
