#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct S021b2ba0;
struct S021b2bdc;
struct S021b2bf4;
struct S021b2c0c;
struct TailList020469b4;
struct TailNode020469b4;
struct SafeAllocator;

extern "C" void func_ov017_021b2174(unsigned char* obj);
extern "C" void func_ov017_021b2ba0(S021b2ba0* obj, char* name);
extern "C" void func_ov017_021b2bd0(void* obj, int handler, int overlayId);
extern "C" void func_ov017_021b2bf4(S021b2bf4* obj, unsigned int value);
extern "C" void func_ov017_021b2c0c(S021b2c0c* obj, unsigned int value);
extern "C" void func_ov017_021b2bdc(S021b2bdc* obj, unsigned int value);
extern "C" void func_020469b4(TailList020469b4* list, TailNode020469b4* node);
extern "C" void func_ov004_021689d8(SafeAllocator* allocator, void* arg);
extern char data_ov017_021d75d0;

// USA: func_ov017_0219c520
extern "C" ARM void func_ov017_0219c520() {
#if defined(jpn)
 enum {regionalOffset0=0x392c, regionalOffset1=0x34ec};
#else
 enum {regionalOffset0=0x3b4c, regionalOffset1=0x36fc};
#endif
    void* res = GetGameResources();
    TailList020469b4* list;
    unsigned char* obj = *(unsigned char**)((char*)res + regionalOffset0);
    list = *(TailList020469b4**)((char*)res + regionalOffset1);
    func_ov017_021b2174(obj);
    func_ov017_021b2ba0((S021b2ba0*)obj, &data_ov017_021d75d0);
    func_ov017_021b2bd0(obj, (int)func_ov004_021689d8, OVERLAY_ID(4));
    func_ov017_021b2bf4((S021b2bf4*)obj, 1);
    func_ov017_021b2c0c((S021b2c0c*)obj, 1);
    func_ov017_021b2bdc((S021b2bdc*)obj, 0);
    func_020469b4(list, (TailNode020469b4*)obj);
}
