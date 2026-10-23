#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02179cfc_2164 = 0x7f0 };
enum { Enum_ov003_02179cfc_4168 = 0xfc4 };
#else
enum { Enum_ov003_02179cfc_2164 = 0x874 };
enum { Enum_ov003_02179cfc_4168 = 0x1048 };
#endif

#include "GameState/GameState.h"

struct Struct_02052df8;
struct Struct_0201099c_10;
struct Struct_0201099c_9;

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02052df8(struct Struct_02052df8* arg0, int arg1);
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);

struct Struct_ov003_0217fb68 { unsigned int unknown_0_[9]; };
extern struct Struct_ov003_0217fb68 data_ov003_0217fb68;

struct Struct_ov003_02179cfc {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
};

// USA: func_ov003_02179cfc
extern "C" ARM void* func_ov003_02179cfc(char* arg0, int arg1, struct Struct_ov003_02179cfc* arg2) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (var0 == NULL) return arg2;

    struct Struct_ov003_0217fb68 var1 = data_ov003_0217fb68;

    int var2 = func_02052df8((struct Struct_02052df8*)var0, var1.unknown_0_[arg2->unknown_8_0_]);
    if (var2 == -1) return arg2;

    struct Struct_0201099c_9* var3 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + Enum_ov003_02179cfc_2164), var2);
    if (var3 == NULL) return arg2;

    *(unsigned short*)(arg0 + Enum_ov003_02179cfc_4168) = var2;
    return var3;
}
