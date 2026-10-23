#include <globaldefs.h>
#if defined(jpn)
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
extern "C" void* memset(void*, int, unsigned int);
extern "C" void* memcpy(void*, const void*, unsigned int);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void*);
extern "C" void func_ov023_021fa598(void*);
extern "C" int func_020421a0();
extern "C" void func_02012028(void*, unsigned char);
extern "C" void* func_ov011_021845f8(void*, int);
extern "C" int func_020c7170(char* arg0, unsigned long arg1, const char* arg2, ...);
extern const char data_ov004_02170fac[];
struct Struct_ov004_0216d718 { char unknown_0_[0x20]; char* unknown_20_; };
struct Struct_ov004_0216d718_2 { char unknown_0_[0x48]; unsigned long long unknown_48_; };
static inline char* inline_ov004_0216d718(GameState* arg0) { return (char*)arg0 + 0x120; }
static inline Struct_ov004_0216d718_2* inline_ov004_0216d718_2(char* arg0) { return (Struct_ov004_0216d718_2*)(arg0 + 0x6000); }
extern "C" ARM int func_ov004_0216d718(void* arg0)
{
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x192);
    if (var0 != 0 && func_ov023_021f6f10(var0) == 4)
        func_ov023_021fa598(var0);
    func_020421a0();
    GameState* var1 = GameState::GetInstance();
    func_02012028(var1, 0);
    SafeAllocator* var2 = (SafeAllocator*)((char*)func_ov011_021845f8(arg0, 5) + 4);
    char* var3 = (char*)var2->Allocate(0x400);
    memset(var3, 0, 0x400);
    Struct_ov004_0216d718* var4 = (Struct_ov004_0216d718*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x4f);
    if (var4 == 0 || func_ov023_021f6f10(var4) != 8)
        var4 = 0;
    if (var4 != 0) {
        char var5[13];
        func_020c7170(var5, 13, data_ov004_02170fac, inline_ov004_0216d718_2(inline_ov004_0216d718(var1))->unknown_48_);
        char* var6 = var5;
        char* var7 = var3;
        for (int var8 = 0; var8 < 3; var8++) {
            memcpy(var7, var6, 4);
            var7 += 4;
            var6 += 4;
            if (var8 != 2)
                *var7++ = '-';
        }
        var4->unknown_20_ = var3;
    }
    return 0;
}
#else

// USA: func_ov004_0216d718
extern "C" ARM int func_ov004_0216d718(void) {
    return 0;
}

#endif
