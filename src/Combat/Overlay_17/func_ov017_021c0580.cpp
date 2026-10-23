#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021c0580;
struct Struct_0206f81c_2;
struct Struct_0206f81c_5;
struct Struct_020469f8;
struct Struct_020469f8_2;

extern "C" void func_ov017_021c0820(Struct_ov017_021c0580* arg0);
extern "C" void func_ov017_021b2174(unsigned char* arg0);
extern "C" void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1);
extern "C" void func_ov017_021b2bd0(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_021b2bdc(Struct_0206f81c_5* arg0, unsigned int arg1);
extern "C" void func_020469f8(Struct_020469f8* arg0, Struct_020469f8_2* arg1);

// USA: func_ov017_021c0580
extern "C" ARM void func_ov017_021c0580(Struct_ov017_021c0580* arg0, int arg1, char* arg2, int arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c0580_15180=0x392c, Enum_ov017_021c0580_14076=0x34ec};
#else
 enum {Enum_ov017_021c0580_15180=0x3b4c, Enum_ov017_021c0580_14076=0x36fc};
#endif
    void* var0 = GetGameResources();
    Struct_020469f8* var1;
    unsigned char* var2 = *(unsigned char**)((char*)var0 + Enum_ov017_021c0580_15180);
    var1 = *(Struct_020469f8**)((char*)var0 + Enum_ov017_021c0580_14076);
    func_ov017_021c0820(arg0);
    *(unsigned char*)((char*)arg0 + 0x24) = arg1;
    func_ov017_021b2174(var2);
    func_ov017_021b2ba0((Struct_0206f81c_2*)var2, arg2);
    func_ov017_021b2bd0(var2, arg3, OVERLAY_ID(4));
    func_ov017_021b2bdc((Struct_0206f81c_5*)var2, 0);
    func_020469f8(var1, (Struct_020469f8_2*)var2);
}
