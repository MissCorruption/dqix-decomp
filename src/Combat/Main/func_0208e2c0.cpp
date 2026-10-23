#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0208e2c0_3290 = 0xa7a };
#else
enum { Enum_0208e2c0_3290 = 0xcda };
#endif

#include "GameState/GameState.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_02108ff4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern Struct_02108ff4 data_02108ff4[];

// USA: func_0208e2c0
extern "C" ARM int func_0208e2c0(char* arg0) {
    unsigned char* var0 = (unsigned char*)GameState::GetInstance();
    Struct_02108ff4* var1 = data_02108ff4;
    int var2 = ((Script::Parameter*)((Struct_0201c1c8*)arg0))->ToInt();
    arg0 += 8;
    unsigned char var3 = (unsigned char)var2;
    var0 = var0 + 0x5000;
    for (int var4 = 0; var4 < 8; var4++) {
        unsigned short var5 = (unsigned short)((Script::Parameter*)((Struct_0201c1c8*)arg0))->ToInt();
        unsigned char var6 = (unsigned char)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 8)))->ToInt();
        char* var7 = arg0 + 0x10;
        arg0 += 0x18;
        unsigned char var8 = (unsigned char)((Script::Parameter*)((Struct_0201c1c8*)var7))->ToInt();
        if (var4 == var0[Enum_0208e2c0_3290]) {
            var1[var3].unknown_0_ = var5;
            var1[var3].unknown_2_ = var6;
            var1[var3].unknown_3_ = var8;
            return 1;
        }
    }
    return 0;
}
