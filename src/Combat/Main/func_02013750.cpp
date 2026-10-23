#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "Graphics/AtmosphericEffect.h"
#include "Memory/SafeAllocator.h"
#include "World/ZoneFeatures.h"

extern "C" void func_020de848(void* arg0);
struct Struct_02013750;
extern "C" void func_02012fa4(char* arg0);

struct Struct_02013750_2 {
    char unknown_0_[(IS_JPN ? 0x74 : 0x54)];
    SafeAllocator unknown_54_;
};

struct Struct_02013750_3 {
    char unknown_0_[(IS_JPN ? 0x770 : 0x730) + 0x2000];
    SafeAllocator unknown_2730_;
};

#pragma optimize_for_size off

// USA: func_02013750
extern "C" ARM void func_02013750(void* arg0, int arg1) {
    *(int*)((char*)arg0 + (IS_JPN ? 0x858 : 0x838)) = 0;
    *(int*)((char*)arg0 + (IS_JPN ? 0x85c : 0x83c)) = 0;
    *(int*)((char*)arg0 + (IS_JPN ? 0x444 : 0x424)) = 0;
    *(int*)((char*)arg0 + (IS_JPN ? 0x43c : 0x41c)) = 0;
    *(int*)((char*)arg0 + (IS_JPN ? 0x438 : 0x418)) = 0;
    *(unsigned char*)((char*)arg0 + (IS_JPN ? 0x496 : 0x476)) = 0;
    *(unsigned char*)((char*)arg0 + (IS_JPN ? 0x497 : 0x477)) = 0;
    *(int*)((char*)arg0 + (IS_JPN ? 0x84c : 0x82c)) = 0;
    *(unsigned short*)((char*)arg0 + (IS_JPN ? 0x494 : 0x474)) = 0;
    *(int*)((char*)arg0 + (IS_JPN ? 0x84c : 0x82c)) = 0;
    *(unsigned char*)((char*)arg0 + (IS_JPN ? 0x44c : 0x42c)) = 0;
    *(int*)((char*)arg0 + (IS_JPN ? 0x450 : 0x430)) = -1;
    *(int*)((char*)arg0 + (IS_JPN ? 0x454 : 0x434)) = -1;
    *(int*)((char*)arg0 + (IS_JPN ? 0x458 : 0x438)) = -1;
    *(int*)((char*)arg0 + (IS_JPN ? 0x45c : 0x43c)) = -1;
    *(int*)((char*)arg0 + (IS_JPN ? 0x460 : 0x440)) = -1;
    *(int*)((char*)arg0 + (IS_JPN ? 0x498 : 0x478)) = 0;
    *(int*)((char*)arg0 + (IS_JPN ? 0x49c : 0x47c)) = 0;
    *(unsigned char*)((char*)arg0 + 0x2000 + (IS_JPN ? 0x3dc : 0x3bc)) = 0;
    *(unsigned char*)((char*)arg0 + 0x2000 + (IS_JPN ? 0x3dd : 0x3bd)) = 0;
    *(unsigned char*)((char*)arg0 + (IS_JPN ? 0x854 : 0x834)) = 0;
    ((Struct_020134e0*)((char*)arg0 + (IS_JPN ? 0x8c : 0x6c)))->func_0201e248();
    func_020de848((char*)arg0 + (IS_JPN ? 0x394 : 0x354) + 0x2400);
    ((AtmosphericEffectSet*)((struct Struct_02013750*)((char*)arg0 + (IS_JPN ? 0x114 : 0xf4))))->Reset();
    func_02012fa4((char*)arg0 + (IS_JPN ? 0x620 : 0x600));
    if (!arg1) {
        return;
    }
    Struct_02013750_3* var0 = (Struct_02013750_3*)arg0;
    if (var0->unknown_2730_.GetSignedAllocator() != NULL) {
        var0->unknown_2730_.Destroy();
        var0->unknown_2730_.ResetAllocatorPointer();
    }
    Struct_02013750_2* var1 = (Struct_02013750_2*)arg0;
    if (var1->unknown_54_.GetSignedAllocator() == NULL) {
        return;
    }
    var1->unknown_54_.Destroy();
    var1->unknown_54_.ResetAllocatorPointer();
}
