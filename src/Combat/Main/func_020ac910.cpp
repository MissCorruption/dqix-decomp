#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020ac910_23752 = 0x5a68 };
#else
enum { Enum_020ac910_23752 = 0x5cc8 };
#endif

#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" int func_02075910(int arg0, void* arg1, unsigned int arg2, int arg3);
extern "C" int func_02075acc(int arg0, void* arg1, unsigned int arg2, int arg3);
extern "C" void func_020abb64(void);
struct Struct_02011544;
extern "C" void func_02011544(Struct_02011544* arg0);
extern char data_020f1bf8[];

// USA: func_020ac910
extern "C" ARM int func_020ac910() {
    char var0[0x10];
    memset(var0, 0, 0x10);
    int var1 = func_02075910(0, var0, 0x10, 0);
    if (var1 == 0) {
        GameState* var2 = GameState::GetInstance();
        *(unsigned char*)((char*)var2 + Enum_020ac910_23752) = 0;
        func_02011544((Struct_02011544*)var2);
        return 0;
    }
    if (strcmp(var0, data_020f1bf8) != 0) {
        func_020abb64();
        memcpy(var0, data_020f1bf8, 0x10);
        func_02075acc(0, var0, 0x10, 0);
    }
    return 1;
}
