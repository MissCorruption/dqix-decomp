#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct Obj0205eaa0;
struct S021b2ba0;
struct TailList020469b4;
struct TailNode020469b4;
struct SafeAllocator;

extern "C" void func_0205eaa0(Obj0205eaa0* obj, int a, int b);
extern "C" void func_ov017_021b2174(unsigned char* obj);
extern "C" void func_ov017_021b2ba0(S021b2ba0* obj, char* name);
extern "C" void func_ov017_021b2bd0(void* obj, int handler, int overlayId);
extern "C" void func_020469b4(TailList020469b4* list, TailNode020469b4* node);
extern "C" void func_ov004_02165df4(SafeAllocator* allocator, void* arg);
extern char data_02108760;
extern char data_020f2334;

// USA: func_020d7978
extern "C" ARM void func_020d7978() {
    func_0205eaa0((Obj0205eaa0*)&data_02108760, 1, 0);
    GameResources* res = GetGameResources();
    TailList020469b4* list;
    unsigned char* obj = static_cast<unsigned char*>(res->unknown_ptr_array_3afc[20]);
    list = static_cast<TailList020469b4*>(res->unknown_ptr_array_36fc[0]);
    func_ov017_021b2174(obj);
    func_ov017_021b2ba0((S021b2ba0*)obj, &data_020f2334);
    func_ov017_021b2bd0(obj, (int)func_ov004_02165df4, OVERLAY_ID(4));
    func_020469b4(list, (TailNode020469b4*)obj);
}
