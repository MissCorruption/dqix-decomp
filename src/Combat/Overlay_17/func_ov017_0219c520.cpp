#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct Struct_0206f81c_2;
struct Struct_0206f81c_5;
struct Struct_0206f81c_3;
struct Struct_0206f81c_4;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct SafeAllocator;

extern "C" void func_ov017_021b2174(unsigned char* arg0);
extern "C" void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1);
extern "C" void func_ov017_021b2bd0(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_021b2bf4(Struct_0206f81c_3* arg0, unsigned int arg1);
extern "C" void func_ov017_021b2c0c(Struct_0206f81c_4* arg0, unsigned int arg1);
extern "C" void func_ov017_021b2bdc(Struct_0206f81c_5* arg0, unsigned int arg1);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);
extern "C" void func_ov004_021689d8(SafeAllocator* arg0, void* arg1);
extern char data_ov017_021d75d0;

// USA: func_ov017_0219c520
extern "C" ARM void func_ov017_0219c520() {
#if defined(jpn)
 enum {Enum_ov017_0219c520_15180=0x392c, Enum_ov017_0219c520_14076=0x34ec};
#else
 enum {Enum_ov017_0219c520_15180=0x3b4c, Enum_ov017_0219c520_14076=0x36fc};
#endif
    void* var0 = GetGameResources();
    Struct_0201bdac_2* var1;
    unsigned char* var2 = *(unsigned char**)((char*)var0 + Enum_ov017_0219c520_15180);
    var1 = *(Struct_0201bdac_2**)((char*)var0 + Enum_ov017_0219c520_14076);
    func_ov017_021b2174(var2);
    func_ov017_021b2ba0((Struct_0206f81c_2*)var2, &data_ov017_021d75d0);
    func_ov017_021b2bd0(var2, (int)func_ov004_021689d8, OVERLAY_ID(4));
    func_ov017_021b2bf4((Struct_0206f81c_3*)var2, 1);
    func_ov017_021b2c0c((Struct_0206f81c_4*)var2, 1);
    func_ov017_021b2bdc((Struct_0206f81c_5*)var2, 0);
    func_020469b4(var1, (Struct_0201bdac*)var2);
}
