#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_0205faf4_11;
extern "C" int func_02061bd8(struct Struct_0205faf4_11* arg0);
extern "C" void func_ov017_02190264(void* arg0, int arg1);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" void* func_02010828(GameState* arg0);

// USA: func_ov017_02191484
extern "C" ARM void func_ov017_02191484(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_02191484_2976=0x980};
#else
 enum {Enum_ov017_02191484_2976=0xba0};
#endif
    GameState* var0 = GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    for (int var2 = 0; var2 < 4; var2++) {
        GameObject* var3 = func_0200ff1c(var0, var2);
        if (var3) {
            if (func_02061bd8((struct Struct_0205faf4_11*)var3)) {
                func_ov017_02190264((void*)var1, var2);
            }
        }
    }
    func_0200fd48(var0, 0xce);
    unsigned char* var4 = (unsigned char*)func_02010828(var0);
    var4[0xf7d] = 0;
    unsigned char* var5 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_02191484_2976);
    var5[0xb] = 0;
}
