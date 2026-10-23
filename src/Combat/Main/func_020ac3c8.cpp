#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020ac3c8_260 = 0x2c4 };
enum { Enum_020ac3c8_29696 = 0x7000 };
#else
enum { Enum_020ac3c8_260 = 0x104 };
enum { Enum_020ac3c8_29696 = 0x7400 };
#endif

#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: func_020ac3c8
extern "C" ARM int func_020ac3c8(unsigned int* arg0, short* arg1, int arg2) {
    char* var0;
    int var1;
    memset(arg0, 0, 0x3c);
    var0 = (char*)GameState::GetInstance() + Enum_020ac3c8_260;
    memcpy(arg0, var0 + Enum_020ac3c8_29696, 0x3c);
    for (var1 = 0; var1 < arg2; var1++) {
        short var2 = arg1[var1];
        if (var2 > 0) {
            arg0[var2 / 32] |= (1 << (var2 % 32));
        }
    }
    memcpy(var0 + Enum_020ac3c8_29696, arg0, 0x3c);
    return 1;
}
