#include <globaldefs.h>

extern "C" void DisableSubObjVRAMBanks(void);
extern "C" int DisableSubBGVRAMBanks(void);
extern "C" void func_020c3984(unsigned int arg0);
extern "C" void MapVRAMBanksToSubObj(unsigned short value);
extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void func_02020968(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_0202099c(int arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_020209d0
extern "C" ARM void func_020209d0(void* arg0) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4001000;

    DisableSubObjVRAMBanks();
    DisableSubBGVRAMBanks();
    func_020c3984(0);

    *var0 = (*var0 & ~0x1f00) | 0x1300;
    MapVRAMBanksToSubObj(0x100);

    *var0 = (*var0 & 0xffcfffef) | 0x10;
    MapVRAMBanksToSubBG(0x80);

    func_02020968(0, 0, 0xe, 0, 0);
    func_0202099c(0, 0, 0xf, 0, 0);

    unsigned short* var1 = (unsigned short*)0x4001008;
    var1[0] = (var1[0] & ~3) | 1;
    var1[1] = (var1[1] & ~3);
    var1[2] = (var1[2] & ~3) | 2;
    var1[3] = (var1[3] & ~3) | 3;
}
