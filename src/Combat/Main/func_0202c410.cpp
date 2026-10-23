#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0202c410_72 = 8 };
enum { Enum_0202c410_29950 = 0x72be };
#else
enum { Enum_0202c410_72 = 0x48 };
enum { Enum_0202c410_29950 = 0x74fe };
#endif

#include "GameState/GameState.h"

// USA: func_0202c410
extern "C" ARM void func_0202c410(void* arg0) {
    *((unsigned char*)arg0 + 0x1029) |= Enum_0202c410_72;
    GameState* var0 = GameState::GetInstance();
    unsigned char var1[6];
    unsigned char* var2 = var1;
    unsigned char* var3 = (unsigned char*)var0 + Enum_0202c410_29950;
    int var4 = 6;
    do {
        unsigned char* var5 = var2++;
        unsigned char var6 = *var3++;
        *var5 = var6;
    } while (--var4);
    var2 = (unsigned char*)arg0 + 0x102c;
    var3 = var1;
    var4 = 6;
    do {
        unsigned char* var7 = var2++;
        unsigned char var8 = *var3++;
        *var7 = var8;
    } while (--var4);
}
