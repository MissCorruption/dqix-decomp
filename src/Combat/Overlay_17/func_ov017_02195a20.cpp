#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "NitroSDK/Graphics.h"
#include "Resource/Brightness.h"

struct Struct_02012de8;
struct Struct_02015438;

unsigned long long GetCurrentTimestamp(void);
extern "C" Struct_02012de8* func_020d6c00();
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
extern "C" void* func_0202ae18(void);
extern "C" void func_020c52e8();
extern "C" void func_020c5414();
extern "C" void func_ov017_02195ecc(unsigned char* arg0, int arg1);
extern "C" void func_ov017_021959ec(void* arg0);
extern "C" void func_020c3a0c(int arg0);
extern "C" void func_ov017_02195bbc(unsigned char* arg0);
extern "C" int func_02046b24(struct Struct_02015438** arg0);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_0202c540(void* arg0);
extern "C" void func_020d9834(int arg0);
extern "C" void func_ov017_021960b8(unsigned char* arg0);

// USA: func_ov017_02195a20
extern "C" ARM void func_ov017_02195a20(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_02195a20_17546=0x41da,Enum_ov017_02195a20_14076=0x34ec};
#else
 enum {Enum_ov017_02195a20_17546=0x448a,Enum_ov017_02195a20_14076=0x36fc};
#endif
    GetCurrentTimestamp();
    Struct_02012de8* var0 = func_020d6c00();
    void* var1 = func_0202ae18();
    func_020c52e8();
    func_020c5414();
    RenderConfig::Reset();
    DISP3DCNT = (DISP3DCNT & ~0x3000) | 8;
    DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x10;
    if (TestFlags04((GameResources*)arg0, 0x2000)) {
        DISP3DCNT &= 0xcfdf;
    } else {
        DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x20;
    }
    if (arg0[Enum_ov017_02195a20_17546] == 0) {
        func_ov017_02195ecc(arg0, 1);
    }
    func_ov017_021959ec(arg0);
    RenderConfig::SubmitToFifo();
    SendQueuedDataToGeometryFifo();
    LightingManager::GetInstance()->SubmitToRenderConfig();

    int var2 = func_02046708(var0, 0x800000);
    if (var2) {
        func_020c3a0c(-1);
    }
    func_ov017_02195bbc(arg0);
    if (var2) {
        func_020c3a0c(0);
    }
    if (func_02046b24(*(Struct_02015438***)(arg0 + Enum_ov017_02195a20_14076)) == 0x16) {
        func_ov017_02195ecc(arg0, 2);
    }
    if (var2) {
        while (1) {
            int var3 = VCOUNT;
            if (func_0202c508(var1) && var3 < 0xd2) break;
            if (func_0202c540(var1) && (var3 < 0xbe || var3 > 0xf0)) break;
            func_020d9834(0);
        }
    }
    func_ov017_021960b8(arg0);
    if (arg0[Enum_ov017_02195a20_17546] != 0) {
        func_ov017_02195ecc(arg0, 1);
    }
}
