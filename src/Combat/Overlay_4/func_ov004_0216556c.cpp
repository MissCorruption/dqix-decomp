#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov004_0216556c_2292 = 0x9f4, Enum_ov004_0216556c_2301 = 0x9fd, Enum_ov004_0216556c_6144 = 0x1900, Enum_ov004_0216556c_452 = 0x1e4 };
#else
enum { Enum_ov004_0216556c_2292 = 0x8f4, Enum_ov004_0216556c_2301 = 0x8fd, Enum_ov004_0216556c_6144 = 0x1800, Enum_ov004_0216556c_452 = 0x1c4 };
#endif

extern "C" int func_0200fb8c(int* arg0);
struct GameResources;
int IsBrightnessTransitionActive(GameResources*);
extern char* data_ov004_02171010;
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov023_021f6f10
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov024_021f6f10
#endif
struct Struct_ov004_021549e4_2;
extern "C" unsigned int func_ov023_021f9bb0(struct Struct_ov004_021549e4_2* arg0);
extern "C" void func_ov004_021636b0(void* arg0, void* arg1);

// USA: func_ov004_0216556c
extern "C" ARM int func_ov004_0216556c(void* arg0) {
    if (*(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_0216556c_2292) == 0) return 0;
    if (IsBrightnessTransitionActive((GameResources*)((int*)func_0200fb8c((int*)GameState::GetInstance()))) != 0) return 0;

    {
        char* var0 = data_ov004_02171010;
        unsigned char var1 = *(unsigned char*)(var0 + 0x1000 + Enum_ov004_0216556c_2301);
        unsigned char* var2 = (unsigned char*)(var0 + 0xfd + Enum_ov004_0216556c_6144);
        if (var1 != 0) {
            *var2 = 0;
            return 0;
        }
    }

    void* var3 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xa);
    if (var3 == NULL) return 0;
    if (NODE_KIND_CALL(var3) != 7) return 0;

    unsigned int var4 = func_ov023_021f9bb0((struct Struct_ov004_021549e4_2*)var3);
    void* var5 = (void*)(var4 * Enum_ov004_0216556c_452 + (data_ov004_02171010 + 1 + 0xb00));
    func_ov004_021636b0(arg0, var5);
    return 0;
}
