#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020ac7b4_23752 = 0x5a68, Enum_020ac7b4_25472 = 0x6120 };
#else
enum { Enum_020ac7b4_23752 = 0x5cc8, Enum_020ac7b4_25472 = 0x6380 };
#endif

#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" int func_02075910(int arg0, void* arg1, int arg2, int arg3);
extern "C" int func_01ff85b8(void* arg0, int arg1);
extern "C" void func_02075acc(int arg0, void* arg1, int arg2, int arg3);
struct Struct_02011544;
extern "C" void func_02011544(Struct_02011544* arg0);

struct Struct_020ac7b4 {
    int unknown_0_;
    char unknown_4_[0x5c];
};

// USA: func_020ac7b4
extern "C" ARM int func_020ac7b4(int arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    if (!func_02075910(0, &var1, 1, 0)) {
        *(unsigned char*)((char*)var0 + Enum_020ac7b4_23752) = 1;
        func_02011544((Struct_02011544*)var0);
        return 0;
    }

    struct Struct_020ac7b4 var2;
    memset(&var2, 0, 0x60);
    memcpy(&var2, (char*)var0 + Enum_020ac7b4_25472, 0x54);
    var2.unknown_0_ = func_01ff85b8((char*)&var2 + 4, 0x5c);
    func_02075acc(arg0 ? 0x8024 : 0x24, &var2, 0x60, 0);
    return 1;
}
