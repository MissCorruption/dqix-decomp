#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02000c9c_8;
struct Struct_0204af14;

extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);
extern "C" void* func_0204af14(struct Struct_0204af14* arg0, unsigned int arg1);
extern "C" void func_0204b938(void* arg0, void* arg1, int arg2, int arg3, unsigned short arg4);
extern "C" void func_0205ac40(void* arg0, void* arg1);

// USA: func_ov000_0218124c
#if defined(jpn)
extern "C" int func_ov017_021bdbcc(void*);
extern "C" ARM void func_ov000_0218124c(unsigned char* arg0, int arg1, void* arg2, int arg3, short arg4, short arg5) {
    GameObject* var0 = GameState::GetInstance()->GetPartyMemberByIndex(arg1);
    if (var0 != 0 && *(int*)((char*)var0 + 0x1b8) != 0) {
        void* var1 = func_0204af14((Struct_0204af14*)(arg0 + 0x8c4), 28);
        func_0204b938(arg2, var1, arg4, arg5, (unsigned short)(arg1 + 2));
        return;
    }
    unsigned char var2 = arg3 + 15;
    if (func_ov017_021bdbcc(GetGameResources()) != 0) var2 = 15;
    void* var3 = func_0204af14((Struct_0204af14*)(arg0 + 0x8c4), var2);
    func_0204b938(arg2, var3, arg4, arg5, (unsigned short)(arg1 + 2));
}
#else
extern "C" ARM void func_ov000_0218124c(unsigned char* arg0, int arg1, void* arg2, int arg3, short arg4, short arg5, short arg6, short arg7) {
    GameState* var4 = GameState::GetInstance();
    unsigned int var5 = 5;
    switch (func_0200fb08((struct Struct_02000c9c_8*)var4)) {
    case 2:
        var5 = 6;
        break;
    case 3:
        var5 = 8;
        break;
    case 4:
        var5 = 7;
        break;
    case 5:
        var5 = 9;
        break;
    }
    void* var6 = func_0204af14((struct Struct_0204af14*)(arg0 + 0x8c4), var5);
    func_0204b938(arg2, var6, (short)(arg4 + 2), (short)(arg5 + 1), arg1 + 2);
    GameObject* var7 = var4->GetPartyMemberByIndex(arg1);
    if (var7 != 0 && *(int*)((char*)var7 + 0x1c4) == 0) {
        unsigned char* var8 = *(unsigned char**)(arg0 + 0x170) + (arg1 + 0x20) * 0x28;
        *(int*)(var8 + 0x14) = arg6 << 12;
        *(int*)(var8 + 0x18) = arg7 << 12;
        var8[0x22] = arg1 + 0x5c;
        var8[0x26] = 1;
        func_0205ac40(arg0 + 0x11c, var8);
    }
}
#endif
