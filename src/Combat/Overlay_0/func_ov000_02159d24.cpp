#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x144
#define REGION_OFFSET_1 0x8b8
#else
#define REGION_OFFSET_0 0x150
#define REGION_OFFSET_1 0x950
#endif

#include "GameState/GameState.h"

struct Struct_ov000_02182d88 { short unknown_0_; short unknown_2_; };
extern struct Struct_ov000_02182d88 data_ov000_02182d88[];

struct Struct_ov000_02182d8a { short unknown_0_; short unknown_2_; };
extern struct Struct_ov000_02182d8a data_ov000_02182d8a[];

// USA: func_ov000_02159d24
extern "C" ARM int func_ov000_02159d24(int arg0, int arg1) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (var0 == 0) {
        return 0;
    }
    int var1 = 0;
    goto test;
    do {
        short var2 = data_ov000_02182d88[var1].unknown_0_;
        int var3 = *(int*)((char*)var0 + REGION_OFFSET_0);
        int var4 = *(int*)((char*)var3 + REGION_OFFSET_1);
        if (var2 == var4) {
            return data_ov000_02182d8a[var1].unknown_0_;
        }
        var1++;
test:
        ;
    } while (data_ov000_02182d88[var1].unknown_0_ != -1);
    return 0;
}
