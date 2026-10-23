#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_0215e2a8_962 = 0x3da };
enum { Enum_ov003_0215e2a8_152 = 0xb0 };
enum { Enum_ov003_0215e2a8_1010 = 0x40a };
enum { Enum_ov003_0215e2a8_2304 = 0x700 };
enum { Enum_ov003_0215e2a8_22 = 0xe6 };
enum { Enum_ov003_0215e2a8_916 = 0x3ac };
enum { Enum_ov003_0215e2a8_856 = 0x370 };
#else
enum { Enum_ov003_0215e2a8_962 = 0x3c2 };
enum { Enum_ov003_0215e2a8_152 = 0x98 };
enum { Enum_ov003_0215e2a8_1010 = 0x3f2 };
enum { Enum_ov003_0215e2a8_2304 = 0x900 };
enum { Enum_ov003_0215e2a8_22 = 0x16 };
enum { Enum_ov003_0215e2a8_916 = 0x394 };
enum { Enum_ov003_0215e2a8_856 = 0x358 };
#endif

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" Struct_0205d0e0* func_0205d8c4(Struct_0205d81c*);
extern "C" int func_0204c7e0(unsigned char*);
extern "C" int func_020421a0(void);

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" void func_0205a370(Struct_0205a254*, int);
extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254*, int);

struct Struct_0205a330;
extern "C" void func_0205a330(Struct_0205a330*, int);

extern "C" void func_0205a42c(Struct_0205a254*, int, int);
extern "C" void func_0205ae8c(void*);

// USA: func_ov003_0215e2a8
extern "C" ARM void func_ov003_0215e2a8(char* arg0) {
    if (*(unsigned char*)(arg0 + Enum_ov003_0215e2a8_962) == 0) return;

    Struct_0205d0e0* var0 = func_0205d8c4((Struct_0205d81c*)(arg0 + Enum_ov003_0215e2a8_152));
    if (var0 == NULL) return;
    if (*(unsigned char*)((char*)var0 + 0xc4) != 1) return;
    if (!func_0204c7e0((unsigned char*)var0)) return;
    if (*(unsigned char*)((char*)var0 + 0xc5) & 0x20) return;

    short var1 = *(short*)((char*)var0 + 0xac);
    short var2 = *(short*)((char*)var0 + 0xae);
    short var3 = *(short*)((char*)var0 + 0xbc);
    short var4 = *(short*)((char*)var0 + 0xbe);

    short var5 = (short)(var3 + (short)((var1 << 3)));
    short var6 = (short)(var4 + (short)((var2 << 3)));
    var5 = (short)(var5 - 8);
    var6 = (short)(var6 - 2);

    if (*(unsigned char*)(arg0 + Enum_ov003_0215e2a8_1010) != 0) {
        int var7 = func_020421a0();
        int var8 = *(short*)((char*)var7 + Enum_ov003_0215e2a8_2304 + Enum_ov003_0215e2a8_22);
        var5 = (short)(var5 - 2);
        var6 = (short)(var6 + (short)(var8 % 8));
    }

    GameState* var9 = GameState::GetInstance();
    Struct_0205a254* var10 = *(Struct_0205a254**)(arg0 + Enum_ov003_0215e2a8_916);
    if (var10 == NULL) return;

    func_0205a370(var10, 0);
    Struct_0205a254_2* var11 = func_0205a3d0(var10, 0);
    if (var11 != NULL) {
        *(unsigned char*)((char*)var11 + 0x15) |= 8;
    }

    int var12 = (int)var9->GetTickCount();
    func_0205a330((Struct_0205a330*)var10, var12);

    var11 = func_0205a3d0(var10, 0);
    if (var11 != NULL) {
        *(short*)((char*)var11 + 0x4) = var5;
        *(short*)((char*)var11 + 0x6) = var6;
    }

    func_0205a42c(var10, 0, 0x3f);
    func_0205ae8c(arg0 + Enum_ov003_0215e2a8_856);
}
