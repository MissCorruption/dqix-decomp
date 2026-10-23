#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct Struct_02108760;
struct Struct_0206f81c_2;
struct Struct_02046a3c_2;
struct Struct_02046a3c;
struct SafeAllocator;

struct Struct_020d79e0 {
    unsigned char unknown_0_[0x4c];
    int unknown_4c_;
};

extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_ov017_021b2174(unsigned char* arg0);
extern "C" void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1);
extern "C" void func_ov017_021b2bd0(void* arg0, int arg1, int arg2);
extern "C" void func_02046a3c(Struct_02046a3c_2* arg0, Struct_02046a3c* arg1);
extern "C" void func_ov004_021633ac(SafeAllocator* arg0, void* arg1);
extern char data_02108760;
extern char data_020f233d;

// USA: func_020d79e0
extern "C" ARM void func_020d79e0(void* arg0, int arg1) {
    GameResources* var0 = GetGameResources();
    Struct_02046a3c_2* var1;
    Struct_020d79e0* var2 = static_cast<Struct_020d79e0*>(var0->unknown_ptr_array_3afc[20]);
    var1 = static_cast<Struct_02046a3c_2*>(var0->unknown_ptr_array_36fc[0]);
    func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
    func_ov017_021b2174(reinterpret_cast<unsigned char*>(var2));
    var2->unknown_4c_ = arg1;
    func_ov017_021b2ba0((Struct_0206f81c_2*)var2, &data_020f233d);
    func_ov017_021b2bd0(var2, (int)func_ov004_021633ac, OVERLAY_ID(4));
    func_02046a3c(var1, (Struct_02046a3c*)var2);
}
