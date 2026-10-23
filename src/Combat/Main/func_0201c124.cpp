#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0201c124_10020 = 0x2764, Enum_0201c124_9828 = 0x26a4, Enum_0201c124_2112 = 0x860, Enum_0201c124_1536 = 0x620 };
#else
enum { Enum_0201c124_10020 = 0x2724, Enum_0201c124_9828 = 0x2664, Enum_0201c124_2112 = 0x840, Enum_0201c124_1536 = 0x600 };
#endif
#include "Grotto/Main/FloorMap.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "World/Zone3D.h"

struct Struct_020134e0_2;
struct Struct_0201c014;

extern "C" void func_02013750(void* arg0, int arg1);
extern "C" void func_02094d00(Struct_020134e0_2* arg0);
extern "C" void func_0208f7ec(Struct_0201c014* arg0);
extern "C" void func_020984ac(void* arg0);
extern "C" void func_0201c108(void* arg0);
extern "C" void* _ZN7Model3DD1Ev(void* arg0);

extern "C" void func_0200ef44(void* arg0, int arg1, int arg2, void* arg3);

// USA: func_0201c124
extern "C" ARM void* func_0201c124(Zone3D* arg0) {
    func_02013750(arg0, 1);
    func_02094d00((Struct_020134e0_2*)((char*)arg0 + Enum_0201c124_10020));
    func_0208f7ec((Struct_0201c014*)((char*)arg0 + Enum_0201c124_9828));
    arg0->grotto_.BlankFunction2();
    arg0->grotto_.floorMap_.Clear2();
    func_020984ac((char*)arg0 + Enum_0201c124_2112);
    func_0200ef44((char*)arg0 + Enum_0201c124_1536, 4, 0x88, (void*)func_0201c108);
    func_0200ef44(arg0->models_498_, 2, 0xac, (void*)_ZN7Model3DD1Ev);
    arg0->lighting_.Initialize();
    arg0->substruct_6c_.func_0201e248();
    return arg0;
}
