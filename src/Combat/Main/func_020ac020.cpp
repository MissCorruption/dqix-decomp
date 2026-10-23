#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020ac020_30192 = 0x73b0 };
#else
enum { Enum_020ac020_30192 = 0x75f0 };
#endif

#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_020ac020
extern "C" ARM int func_020ac020(void* arg0, short* arg1, int* arg2, int arg3) {
    int* var0 = (int*)((char*)GameState::GetInstance() + Enum_020ac020_30192);
    int var1;
    for (var1 = 0; var1 < arg3; var1++) {
        short var2 = arg1[var1];
        if (var2 >= 1 && var2 <= 0x134) {
            var2 = var2 - 1;
            memcpy(&arg2[var1], &var0[var2], sizeof(int));
        }
    }
    return 1;
}
