#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xbf0
#else
#define REGION_OFFSET_0 0xaf0
#endif

#include "Memory/SafeAllocator.h"

extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void func_ov000_02172944(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov000_02172978(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void MapVRAMBanksToSubObj(unsigned short value);

struct Struct_ov000_02172850 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 4;
    unsigned short unknown_0_6_ : 1;
    unsigned short unknown_0_7_ : 1;
    unsigned short unknown_1_0_ : 5;
    unsigned short unknown_1_5_ : 1;
    unsigned short unknown_1_6_ : 2;
};

// USA: func_ov000_02172850
extern "C" ARM void func_ov000_02172850(char* arg0) {
    class SafeAllocator* var0 = *(class SafeAllocator**)(arg0 + 0x1000 + REGION_OFFSET_0);
    if (var0) var0->Reset();

    int var1 = *(int*)(arg0 + 0x184);
    if (var1) MapVRAMBanksToSubBG(var1);

    struct Struct_ov000_02172850* var2 = (struct Struct_ov000_02172850*)(arg0 + 0x180);
    struct Struct_ov000_02172850* var3 = (struct Struct_ov000_02172850*)(arg0 + 0x182);
    func_ov000_02172944(var2->unknown_1_6_, var2->unknown_0_7_, var2->unknown_1_0_, var2->unknown_0_2_, var3->unknown_1_5_);
    func_ov000_02172978(var3->unknown_1_6_, var3->unknown_0_7_, var3->unknown_1_0_, var3->unknown_0_2_, var3->unknown_1_5_);

    unsigned short* var4 = (unsigned short*)0x4001008;
    var4[0] = (var4[0] & ~3) | var2->unknown_0_0_;
    var4[1] = (var4[1] & ~3) | var3->unknown_0_0_;
    MapVRAMBanksToSubObj(0x100);
}
