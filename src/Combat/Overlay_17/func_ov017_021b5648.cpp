#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov017_021b5648_24 = 0x14, Enum_ov017_021b5648_9196 = 0x240c };
#else
enum { Enum_ov017_021b5648_24 = 0x18, Enum_ov017_021b5648_9196 = 0x23ec };
#endif

extern "C" void* func_0202ae18(void);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
struct Struct_02039df4;
extern "C" unsigned short func_02028460(void* arg0, void* arg1);
extern "C" int func_0202c508(void* arg0);
extern "C" void* func_02012fe4(void);
extern "C" int func_ov017_021a2128(void* arg0, int arg1, int arg2, int arg3, void* arg4, int arg5, int arg6, int arg7);

struct Struct_ov017_021d6bcc { unsigned int unknown_0_, unknown_4_, unknown_8_; };
extern struct Struct_ov017_021d6bcc data_ov017_021d6bcc;

// USA: func_ov017_021b5648
extern "C" ARM void func_ov017_021b5648(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();

    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        GameObject* var3 = func_0200ff1c(var0, var2);
        if (var3 == 0) continue;
        void* var4 = *(void**)(arg0 + 0x8);
        if (*(unsigned short*)var4 != ((Object3D*)((struct Struct_02039df4*)var3))->GetField06()) continue;

        unsigned short var5 = func_02028460((char*)var4 + Enum_ov017_021b5648_24, (char*)var3 + 0x44);
        *(unsigned short*)((char*)var3 + 0xb8) = var5;
        ((unsigned char*)var3)[0xc2] |= 0x40;
    }

    if (func_0202c508(var1) != 0 && *(unsigned short*)(arg0 + 0x12) != 0) {
        GameState* var6 = GameState::GetInstance();
        void* var7 = GetGameResources();
        var6->GetGrottoStruct();
        ActiveGrottoClass* var8 = (ActiveGrottoClass*)((char*)func_02012fe4() + Enum_ov017_021b5648_9196);
        unsigned char var9 = var8->GetActiveGrottoEnviron() & 0xff;

        struct Struct_ov017_021d6bcc var10 = data_ov017_021d6bcc;
        switch (var9) {
            case 1: var10.unknown_8_ = 0xfffecccd; break;
            case 2: var10.unknown_8_ = 0xffff019a; break;
            case 3: var10.unknown_8_ = -0x13800; break;
            case 4: var10.unknown_8_ = 0xfffecccd; break;
            case 5: var10.unknown_8_ = 0xfffebb34; break;
            default: var10.unknown_8_ = 0xfffecccd; break;
        }

        unsigned char var11 = 0;
        if (((unsigned char*)arg0)[0x11] == 1) var11 |= 2;
        else if (((unsigned char*)arg0)[0x11] == 2) var11 |= 4;

        func_ov017_021a2128(var7, *(unsigned short*)(*(void**)(arg0 + 0x8)),
                             *(unsigned short*)(arg0 + 0x12), -1, &var10, 0, 0, var11);
    }

    *(unsigned short*)((char*)(*(void**)(arg0 + 0x8)) + 2) |= 0x8;
    arg0[1] = 1;
}
