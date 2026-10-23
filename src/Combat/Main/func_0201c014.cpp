#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0201c014_84 = 0x74, Enum_0201c014_108 = 0x8c, Enum_0201c014_244 = 0x114, Enum_0201c014_268 = 0x12c, Enum_0201c014_1176 = 0x4b8, Enum_0201c014_1536 = 0x620, Enum_0201c014_2112 = 0x860, Enum_0201c014_456 = 0x1e8, Enum_0201c014_612 = 0x2a4, Enum_0201c014_804 = 0x364, Enum_0201c014_1840 = 0x770, Enum_0201c014_852 = 0x394, Enum_0201c014_1004 = 0xc, Enum_0201c014_8192 = 0x2400 };
#else
enum { Enum_0201c014_84 = 0x54, Enum_0201c014_108 = 0x6c, Enum_0201c014_244 = 0xf4, Enum_0201c014_268 = 0x10c, Enum_0201c014_1176 = 0x498, Enum_0201c014_1536 = 0x600, Enum_0201c014_2112 = 0x840, Enum_0201c014_456 = 0x1c8, Enum_0201c014_612 = 0x264, Enum_0201c014_804 = 0x324, Enum_0201c014_1840 = 0x730, Enum_0201c014_852 = 0x354, Enum_0201c014_1004 = 0x3ec, Enum_0201c014_8192 = 0x2000 };
#endif

#include "Graphics/LightingInfo.h"
#include "Memory/SafeAllocator.h"
#include "Grotto/Main/FloorMap.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "World/ZoneFeatures.h"

extern "C" void func_0200ee94(void* arg0, int arg1, int arg2, void* arg3, void* arg4);
extern "C" void* _ZN7Model3DC1Ev(void* arg0);
extern "C" void* _ZN7Model3DD1Ev(void* arg0);
extern "C" void* func_0201c108(void* arg0);
extern "C" void* func_0201c0e8(void* arg0);

extern "C" void func_020982b4(void* arg0);

struct Struct_0201c014;
extern "C" void func_0208f7ec(struct Struct_0201c014* arg0);

struct Struct_020134e0_2;
extern "C" void func_02094d00(struct Struct_020134e0_2* arg0);

extern "C" void* func_020de824(void* arg0);

extern "C" void func_020134e0(void* arg0);

// USA: func_0201c014
extern "C" ARM void* func_0201c014(void* arg0) {
    ((SafeAllocator*)((char*)arg0 + Enum_0201c014_84))->ResetAllocatorPointer();
    ((Struct_020134e0*)((char*)arg0 + Enum_0201c014_108))->func_0201e248();
    *(int*)((char*)arg0 + Enum_0201c014_244) = 0;
    ((LightingInfo*)((char*)arg0 + Enum_0201c014_268))->Initialize();
    func_0200ee94((char*)arg0 + Enum_0201c014_1176, 2, 0xac, (void*)_ZN7Model3DC1Ev, (void*)_ZN7Model3DD1Ev);
    func_0200ee94((char*)arg0 + Enum_0201c014_1536, 4, 0x88, (void*)func_0201c0e8, (void*)func_0201c108);
    func_020982b4((char*)arg0 + Enum_0201c014_2112);
    ActiveGrottoClass* var0 = (ActiveGrottoClass*)((char*)arg0 + Enum_0201c014_1004 + Enum_0201c014_8192);
    ((FloorMap*)((char*)var0 + Enum_0201c014_456))->Clear();
    var0->Clear();
    func_0208f7ec((struct Struct_0201c014*)((char*)arg0 + Enum_0201c014_612 + 0x2400));
    func_02094d00((struct Struct_020134e0_2*)((char*)arg0 + Enum_0201c014_804 + 0x2400));
    ((SafeAllocator*)((char*)arg0 + Enum_0201c014_1840 + 0x2000))->ResetAllocatorPointer();
    func_020de824((char*)arg0 + Enum_0201c014_852 + 0x2400);
    func_020134e0(arg0);
    return arg0;
}
