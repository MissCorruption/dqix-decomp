#include <globaldefs.h>
#include "Combat/Main/BattleList.h"

#if defined(jpn)
enum { Enum_ov003_0216acf0_1439 = 0x59b };
enum { Enum_ov003_0216acf0_228 = 0xe0 };
enum { Enum_ov003_0216acf0_1240 = 0x4d4 };
enum { Enum_ov003_0216acf0_1244 = 0x4d8 };
enum { Enum_ov003_0216acf0_1152 = 0x47c };
#else
enum { Enum_ov003_0216acf0_1439 = 0x59f };
enum { Enum_ov003_0216acf0_228 = 0xe4 };
enum { Enum_ov003_0216acf0_1240 = 0x4d8 };
enum { Enum_ov003_0216acf0_1244 = 0x4dc };
enum { Enum_ov003_0216acf0_1152 = 0x480 };
#endif

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" Struct_0205d0e0* func_0205d8c4(Struct_0205d81c*);
extern "C" int func_0204c7e0(unsigned char*);

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" void func_0205a370(Struct_0205a254*, int);
extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254*, int);

struct Struct_0205a330;
extern "C" void func_0205a330(Struct_0205a330*, int);

extern "C" void func_0205ae8c(void*);

// USA: func_ov003_0216acf0
extern "C" ARM void func_ov003_0216acf0(char* arg0) {
    if (!(*(unsigned char*)(arg0 + Enum_ov003_0216acf0_1439) & 1)) return;

    Struct_0205d0e0* var0 = func_0205d8c4((Struct_0205d81c*)(arg0 + Enum_ov003_0216acf0_228));
    if (var0 == NULL) return;
    if (!func_0204c7e0((unsigned char*)var0)) return;
    if (*(unsigned char*)((char*)var0 + 0xc5) & 0x20) return;

    short var1 = *(short*)((char*)var0 + 0xac);
    short var2 = *(short*)((char*)var0 + 0xae);
    short var3 = *(short*)((char*)var0 + 0xbc);
    short var4 = *(short*)((char*)var0 + 0xbe);

    short var5 = (short)(var3 + (short)(var1 << 3));
    short var6 = (short)(var4 + (short)(var2 << 3));

    Struct_0205a254* var7 = *(Struct_0205a254**)(arg0 + Enum_ov003_0216acf0_1240);
    func_0205a370(var7, 0);

    var7 = *(Struct_0205a254**)(arg0 + Enum_ov003_0216acf0_1240);
    Struct_0205a254_2* var8 = func_0205a3d0(var7, 0);
    if (var8 != NULL) {
        *(unsigned char*)((char*)var8 + 0x15) |= 8;
    }

    var7 = *(Struct_0205a254**)(arg0 + Enum_ov003_0216acf0_1240);
    int var9 = *(int*)(arg0 + Enum_ov003_0216acf0_1244);
    func_0205a330((Struct_0205a330*)var7, var9);

    var7 = *(Struct_0205a254**)(arg0 + Enum_ov003_0216acf0_1240);
    var8 = func_0205a3d0(var7, 0);
    if (var8 != NULL) {
        *(short*)((char*)var8 + 0x4) = (short)(var5 - 8);
        *(short*)((char*)var8 + 0x6) = (short)(var6 - 2);
    }

    func_0205ae8c(arg0 + Enum_ov003_0216acf0_1152);
}
