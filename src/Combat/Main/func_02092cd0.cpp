#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02092cd0_32630 = 0x7ca2 };
#else
enum { Enum_02092cd0_32630 = 0x7f76 };
#endif

#include "GameState/GameState.h"

struct Struct_02092cd0;

// USA: func_02092cd0
extern "C" ARM unsigned int func_02092cd0(Struct_02092cd0*, int arg1) {
    unsigned char* var0 = (unsigned char*)GameState::GetInstance();
    unsigned char var1 = 0;
    unsigned char var2;
    for (var2 = 0; var2 < 4; var2++) {
        if (arg1 == (var0 + var2)[Enum_02092cd0_32630]) {
            var1++;
        }
    }
    return var1;
}
