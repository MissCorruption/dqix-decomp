#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_0217e100_144 = 0x8c };
enum { Enum_ov003_0217e100_120 = 0x74 };
enum { Enum_ov003_0217e100_60 = 0x38 };
#else
enum { Enum_ov003_0217e100_144 = 0x90 };
enum { Enum_ov003_0217e100_120 = 0x78 };
enum { Enum_ov003_0217e100_60 = 0x3c };
#endif

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" Struct_0205d0e0* func_0205d8c4(Struct_0205d81c*);

extern "C" int func_0204c7e0(unsigned char*);

struct Struct_0205c570;
extern "C" int func_0205d794(Struct_0205c570*);

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" void func_0205a370(Struct_0205a254*, int);
extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254*, int);

struct Struct_0205a330;
extern "C" void func_0205a330(Struct_0205a330*, int);

extern "C" void func_0205ae8c(void*);

// USA: func_ov003_0217e100
extern "C" ARM void func_ov003_0217e100(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = *(void**)((char*)arg0 + Enum_ov003_0217e100_144);
    Struct_0205d0e0* var2 = func_0205d8c4((Struct_0205d81c*)var1);
    if (var2 == NULL) return;
    if (!func_0204c7e0((unsigned char*)var2)) return;

    var1 = *(void**)((char*)arg0 + Enum_ov003_0217e100_144);
    short var3 = *(short*)((char*)var2 + 0xae);
    short var4 = *(short*)((char*)var2 + 0xac);
    int var5 = *(int*)((char*)var1 + 0x68);
    short var6 = var3 << 3;

    int var7 = func_0205d794((Struct_0205c570*)var1);
    short var8 = (short)var7 - var5 * 6;
    short var9 = (short)((int)var8 * 13 + var6);

    Struct_0205a254* var10 = *(Struct_0205a254**)((char*)arg0 + Enum_ov003_0217e100_120);
    if (var10 == NULL) return;

    func_0205a370(var10, 0);
    Struct_0205a254_2* var11 = func_0205a3d0(var10, 0);
    if (var11 != NULL) {
        *(unsigned char*)((char*)var11 + 0x15) |= 8;
    }

    int var12 = (int)var0->GetTickCount();
    func_0205a330((Struct_0205a330*)var10, var12);

    var11 = func_0205a3d0(var10, 0);
    if (var11 != NULL) {
        *(short*)((char*)var11 + 0x4) = (short)((int)var4 << 3) - 4;
        *(short*)((char*)var11 + 0x6) = var9 + 2;
    }

    func_0205ae8c((char*)arg0 + Enum_ov003_0217e100_60);
}
