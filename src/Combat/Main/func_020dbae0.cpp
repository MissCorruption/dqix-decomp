#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct Struct_020db894;
struct Struct_020db264;
struct Struct_020db3f4_3;
struct Struct_020db5ec_2;
struct Struct_020db3f4;

extern "C" void func_020db964(Struct_020db894* arg0);
extern "C" int func_020a18f4(unsigned int arg0);
extern "C" void func_020db894(void* arg0);
extern "C" int func_020db9a8(Struct_020db264* arg0);
extern "C" void func_020db3f4(Struct_020db3f4* arg0);
extern "C" void func_020d8654(void);
extern "C" void func_020db844(Struct_020db3f4_3* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020db264(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020d8694(void);
extern "C" void func_020db5ec(Struct_020db5ec_2* arg0);
extern "C" void func_020db814(void*);

// USA: func_020dbae0
extern "C" ARM void func_020dbae0(void* arg0) {
    char* var0 = (char*)arg0;
    func_020db964((Struct_020db894*)arg0);
    if (!func_020a18f4(OVERLAY_ID(17))) {
        return;
    }
    void* var1 = GetGameResources();
    if (*(unsigned char*)(var0 + 0x50) == 0 || var1 == NULL) {
        func_020db894(arg0);
        return;
    }
    if (*(unsigned char*)(var0 + 0x52) == 0) {
        short var2 = *(short*)(var0 + 0x68);
        if (var2 < 0) {
            return;
        }
        if (var2 > 0) {
            *(short*)(var0 + 0x68) = var2 - 1;
            func_020db894(arg0);
            return;
        }
    }
    int var3 = func_020db9a8((Struct_020db264*)arg0);
    if (*(unsigned char*)(var0 + 0x51) == 0) {
        *(short*)(var0 + 0x6a) = *(short*)(var0 + 0x66);
        func_020db3f4((Struct_020db3f4*)arg0);
    } else {
        if (var3 != *(unsigned char*)(var0 + 0x3c)) {
            func_020d8654();
            func_020db844((Struct_020db3f4_3*)arg0, *(unsigned char*)(var0 + 0x3c), *(short*)(var0 + 0x66), 0);
            short var4 = *(short*)(var0 + 0x6a);
            unsigned char var5 = *(unsigned char*)(var0 + 0x50);
            unsigned char var6 = *(unsigned char*)(var0 + 0x52);
            unsigned char var7 = *(unsigned char*)(var0 + 0x53);
            unsigned char var8 = *(unsigned char*)(var0 + 0x54);
            func_020db894(arg0);
            *(short*)(var0 + 0x68) = 0;
            *(unsigned char*)(var0 + 0x3c) = var3;
            *(short*)(var0 + 0x6a) = *(short*)(var0 + 0x66) = var4;
            func_020db264(arg0, var5, var6, var7, var8);
            func_020d8694();
            return;
        }
        func_020db5ec((Struct_020db5ec_2*)arg0);
    }
    func_020db814(arg0);
}
