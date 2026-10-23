#include <globaldefs.h>
#include "World/ZoneLifecycle.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "Resource/GameResources.h"
#include "World/Zone3D.h"

struct Struct_02015438;
struct Struct_02015438_2;
extern "C" int func_02046b24(struct Struct_02015438** arg0);
extern "C" void func_02015518(void* arg0, char* arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_02013e18(Zone3D* arg0);
extern "C" void func_02017208(struct Struct_02015438_2* arg0);
extern "C" void func_020158cc(Zone3D* arg0);
extern "C" void func_020a84e0();
extern "C" void func_0201ba68(void*);
extern "C" void func_0201bdac(unsigned char*);

// USA: func_02015438
extern "C" ARM void func_02015438(Zone3D* arg0) {
#if defined(jpn)
    enum { Enum_02015438_1788 = 0x4ec };
#else
    enum { Enum_02015438_1788 = 0x6fc };
#endif
    GameState* var0 = GameState::GetInstance();
    if (*(int*)&arg0->unk_428[0] == 0)
        return;

    if (arg0->unknown_424_ != 0) {
        func_02013e18(arg0);
        return;
    }

    char* var1 = (char*)arg0->firstBMDJStruct_41c_;
    while (var1 != 0) {
        func_02015518(arg0, var1);
        var1 = *(char**)(var1 + 0x54);
    }

    unsigned char var2 = arg0->unk_830[0];
    if (var2 != 0) {
        var2--;
        arg0->unk_830[0] = var2;
        if ((arg0->unk_830[0] & 0xff) == 0) {
            void* var3 = var0->GetProtagonist();
            if (var3 != 0) {
                if (func_02046b24(
                        *(struct Struct_02015438***)((char*)GetGameResources() + 0x3000 + Enum_02015438_1788)) != 4) {
                    func_020397c0(var3);
                }
            }
            arg0->unk_830[0] = 0;
        }
    }

    func_02017208((struct Struct_02015438_2*)arg0);
    func_020158cc(arg0);
    LightingManager::GetInstance()->RecomputeAdvancedLighting();
    func_020a84e0();
    func_0201ba68(arg0);
    func_0201bdac((unsigned char*)arg0);
    func_0201bfd4(arg0);
}
