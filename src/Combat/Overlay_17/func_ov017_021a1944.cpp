#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0207d78c(void);
struct Struct_0207d7f4;
extern "C" struct Struct_0207d7f4* func_0207d9bc(struct Struct_0207d7f4* arg0, unsigned short arg1);

extern unsigned char data_ov017_021d7654[4];

// USA: func_ov017_021a1944
extern "C" ARM unsigned short func_ov017_021a1944(void) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0207d78c();
    int var2, var3;
retry:
    if (*(unsigned short*)(data_ov017_021d7654) > 0x7ff7) {
        *(unsigned short*)(data_ov017_021d7654) = 1;
    }
    for (var2 = 0; var2 < 4; var2++) {
        for (var3 = 0; var3 < 0xc; var3++) {
            GameObject* var4 = var0->GetMaybeFieldMonsterByIndex(var2 * 0xc + 0x70 + var3);
            if (var4 != NULL) {
                unsigned short var5 = *(unsigned short*)((char*)var4 + 0x16a);
                if (*(unsigned short*)(data_ov017_021d7654) == var5) {
                    *(unsigned short*)(data_ov017_021d7654) = *(unsigned short*)(data_ov017_021d7654) + 1;
                    goto retry;
                }
            }
        }
    }
    if (func_0207d9bc((struct Struct_0207d7f4*)var1, *(unsigned short*)(data_ov017_021d7654)) != NULL) {
        *(unsigned short*)(data_ov017_021d7654) = *(unsigned short*)(data_ov017_021d7654) + 1;
        goto retry;
    }
    unsigned short var6 = *(unsigned short*)(data_ov017_021d7654);
    *(unsigned short*)(data_ov017_021d7654) = var6 + 1;
    return var6;
}
