#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/LightingInfo.h"
#include "World/ZoneFeatures.h"
#include "Graphics/AtmosphericEffect.h"
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_020134e0_0 = 0x20, Enum_020134e0_0_2 = 0x40 };
#else
enum { Enum_020134e0_0 = 0, Enum_020134e0_0_2 = 0 };
#endif

struct Struct_020134e0_2;
extern "C" void func_02094d00(Struct_020134e0_2*);
extern "C" void func_02012fa4(char* arg0);
extern "C" void func_020982b4(void* arg0);
extern "C" unsigned char func_0200fb9c(char* arg0);
extern "C" int func_0201201c(void* arg0);
struct Struct_02000c9c_12;
extern "C" unsigned char func_020115a8(Struct_02000c9c_12*);

// USA: func_020134e0
extern "C" ARM void func_020134e0(char* arg0) {
    void* var0 = GameState::GetInstance();

    *(short*)(arg0 + 0x0) = 0;
    *(short*)(arg0 + 0x2) = 0;
    *(short*)(arg0 + 0x4) = 0;
    *(int*)(arg0 + 0x424 + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x8) = 0;
    *(int*)(arg0 + 0x4c + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x68 + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x50 + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x476 + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x477 + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x82c + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x830 + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x428 + Enum_020134e0_0) = 1;
    *(int*)(arg0 + 0x838 + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x83c + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x42c + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x41c + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x418 + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x478 + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x47c + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x834 + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x23b8 + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x23b9 + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x420 + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x23bc + Enum_020134e0_0) = 0;
    *(int*)(arg0 + 0x276c + Enum_020134e0_0_2) = -1;
    *(int*)(arg0 + 0x2770 + Enum_020134e0_0_2) = 0;
    *(char*)(arg0 + 0x831 + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x832 + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x833 + Enum_020134e0_0) = 0;
    *(char*)(arg0 + 0x281f + Enum_020134e0_0_2) = 0;
    *(char*)(arg0 + 0x2820 + Enum_020134e0_0_2) = 0;
    *(short*)(arg0 + 0x27d6 + Enum_020134e0_0_2) = 0;
    *(char*)(arg0 + 0x23bb + Enum_020134e0_0) = -1;

    ((Struct_020134e0*)(arg0 + 0x6c + Enum_020134e0_0))->func_0201e248();
    ((AtmosphericEffectSet*)(arg0 + 0xf4 + Enum_020134e0_0))->Reset();
    ((LightingInfo*)(arg0 + 0x10c + Enum_020134e0_0))->Initialize();
    ((SafeAllocator*)(arg0 + 0x54 + Enum_020134e0_0))->ResetAllocatorPointer();
    ((SafeAllocator*)(arg0 + 0x2730 + Enum_020134e0_0_2))->ResetAllocatorPointer();
    ((Model3D*)(arg0 + 0x498 + Enum_020134e0_0))->Clear();
    ((Model3D*)(arg0 + 0x544 + Enum_020134e0_0))->Clear();
    func_02094d00((Struct_020134e0_2*)(arg0 + 0x2724 + Enum_020134e0_0_2));

    *(int*)(arg0 + 0x27c4 + Enum_020134e0_0_2) = 0;
    *(int*)(arg0 + 0x27b8 + Enum_020134e0_0_2) = 0;
    *(int*)(arg0 + 0x27bc + Enum_020134e0_0_2) = 0xa000;
    *(int*)(arg0 + 0x27c0 + Enum_020134e0_0_2) = 0;
    *(int*)(arg0 + 0x820 + Enum_020134e0_0) = 0;
    func_02012fa4(arg0 + 0x600 + Enum_020134e0_0);
    memset(arg0 + 0x27dc + Enum_020134e0_0_2, 0, 0x40);

    *(char*)(arg0 + 0x281c + Enum_020134e0_0_2) = 0;
    *(char*)(arg0 + 0x2744 + Enum_020134e0_0_2) = 0;
    *(char*)(arg0 + 0x2745 + Enum_020134e0_0_2) = 1;
    *(char*)(arg0 + 0x2746 + Enum_020134e0_0_2) = 0;
    *(short*)(arg0 + 0x2748 + Enum_020134e0_0_2) = 0;
    *(int*)(arg0 + 0x274c + Enum_020134e0_0_2) = 1;
    *(int*)(arg0 + 0x2750 + Enum_020134e0_0_2) = 1;

    if (func_0200fb9c((char*)var0) != 5) {
        *(short*)(arg0 + 0x27d8 + Enum_020134e0_0_2) = 0;
        *(short*)(arg0 + 0x27da + Enum_020134e0_0_2) = 0;
    }
    *(char*)(arg0 + 0x281d + Enum_020134e0_0_2) = 0;
    *(char*)(arg0 + 0x281e + Enum_020134e0_0_2) = 0;
    if (func_020115a8((Struct_02000c9c_12*)var0) != 0) {
        return;
    }

    if (func_0201201c(var0) == 5 || func_0200fb9c((char*)var0) == 4 ||
        func_0200fb9c((char*)var0) == 2) {
        func_020982b4(arg0 + 0x840 + Enum_020134e0_0);
        *(short*)(arg0 + 0x27b4 + Enum_020134e0_0_2) = 2;
        *(short*)(arg0 + 0x27b6 + Enum_020134e0_0_2) = 0;
        *(short*)(arg0 + 0x2784 + Enum_020134e0_0_2) = 0;
        *(short*)(arg0 + 0x2786 + Enum_020134e0_0_2) = 0x76c;
        *(char*)(arg0 + 0x2788 + Enum_020134e0_0_2) = 0;
        *(int*)(arg0 + 0x2780 + Enum_020134e0_0_2) = 0;
        *(int*)(arg0 + 0x2794 + Enum_020134e0_0_2) = 0x50;
        *(char*)(arg0 + 0x27d0 + Enum_020134e0_0_2) = 0;
        *(int*)(arg0 + 0x2774 + Enum_020134e0_0_2) = 0x19000;
        *(int*)(arg0 + 0x2778 + Enum_020134e0_0_2) = 0x199;
        *(int*)(arg0 + 0x277c + Enum_020134e0_0_2) = 0x38ccc;
    }
}
