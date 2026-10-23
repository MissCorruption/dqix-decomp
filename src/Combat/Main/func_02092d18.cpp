#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02092d18_32630 = 0x7ca2 };
#else
enum { Enum_02092d18_32630 = 0x7f76 };
#endif

#include "GameState/GameState.h"

struct Struct_02092cd0;

// USA: func_02092d18
extern "C" ARM int func_02092d18(Struct_02092cd0*, int arg1) {
    unsigned char* var0 = (unsigned char*)GameState::GetInstance();
    unsigned char var1;
    for (var1 = 0; var1 < 4; var1++) {
        if (arg1 == (var0 + var1)[Enum_02092d18_32630]) {
            return (signed char)var1;
        }
    }
    return -1;
}
