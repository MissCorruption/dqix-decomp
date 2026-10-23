#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/TextQueue.h"
#if defined(jpn)
extern "C" int sprintf(char*, const char*, ...);
extern char* data_ov017_021d87f4;
#endif

extern "C" void* func_020421a0(void);
extern "C" void func_020e4bf4(void* arg0, int arg1);
extern "C" int func_020e51cc(int arg0);
extern "C" void* func_020d7a50(void);
struct Struct_0208b494;
extern "C" Struct_0208b494* func_0208a9b4(void);
extern "C" void func_0208b494(struct Struct_0208b494* arg0);

extern "C" ARM void func_02046608(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, int arg6);

// USA: func_ov017_021c2ea4
extern "C" ARM void func_ov017_021c2ea4(unsigned char* arg0) {
    char var0[0xc];
#if defined(jpn)
    char var1[0x40];
#else
    char var2[0x80];
#endif
#if defined(jpn)
    GameState* var3 = GameState::GetInstance();
#else
    GameState::GetInstance();
#endif
    void* var4 = func_020421a0();
#if defined(jpn)
    GameObject* var5 = var3->GetPartyMemberByIndex(arg0[0x95]);
    sprintf(var1, data_ov017_021d87f4, *(char**)((char*)var5 + 0x134));
#else
    func_020e4bf4(var0, arg0[0x95]);
    *(void**)var4 = var0;
    int var6 = func_020e51cc(0x31);
    func_02046608(var4, 0xc, var6, var2, 0xe3, 0, 1);
#endif
    void* var7 = func_020d7a50();
#if defined(jpn)
    func_020d7e10(var7, var1, 0, 0, 1);
#else
    func_020d7e10(var7, var2, 0, 0, 1, 1);
#endif
    Struct_0208b494* var8 = func_0208a9b4();
    func_0208b494(var8);
    arg0[0x8c] = 3;
}
