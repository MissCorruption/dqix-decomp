#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02013e18_956 = 0x3dc };
#else
enum { Enum_02013e18_956 = 0x3bc };
#endif

#include "World/Zone3D.h"
#include "World/ZoneChest.h"
#include "Graphics/LightingManager.h"
#include "Resource/GameResources.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" {
    int func_02013fb4(void*);
    int _ZN6Zone3D13func_020146fcEv(void*);
    int func_0201498c(void*);
    int func_0201a600(void*);
    void func_02017a94(Zone3D*);
    int func_0201b5b0(int);
    int func_0201b5d8(int);
    void func_020c5588(int, int, int, int, int);
    void func_02018f30(unsigned char*);
    void func_020181fc(void*);
    int func_020100f8(char const*);
}

// USA: func_02013e18
extern "C" ARM int func_02013e18(Zone3D* arg0)
{
    if (arg0->unknown_424_ == 0)
        return 1;

    if (!func_02013fb4(arg0))
        return 0;

    if (!arg0->func_02014108())
        return 0;

    if (!arg0->func_02014c04())
        return 0;

    if (!_ZN6Zone3D13func_020146fcEv(arg0))
        return 0;

    if (!func_0201498c(arg0))
        return 0;

    int var0 = arg0->pUnknownStruct_8_->unknown_0_;

    if (func_0201b5b0(var0))
    {
        func_02019728(arg0, var0 % 20, 0, 0, 0);
        func_0201a600(arg0);
    }
    else if (func_0201b5d8(var0))
    {
        func_0201a600(arg0);
    }

    LightingManager* var1 = LightingManager::GetInstance();
    var1->ProcessZoneChange(arg0);

    int var2 = var1->lightingIndexOverride_;
    int var3 = var1->timeOfDayIndex_;
    if (var2)
        var3 = var2;

    int var4;
    if (arg0->lighting_.maybeMode_ == 1)
        var4 = arg0->lighting_.basic_.backgroundColor[var3];
    else
        var4 = arg0->lighting_.advanced_.backgroundColor[var3];

    func_020c5588(var4, 0x10, 0x7fff, 0, 0);

    GameResources* var5 = GetGameResources();
    int var6 = (unsigned int)((unsigned char*)arg0->pUnknownStruct_8_)[0xe] << 24 >> 31;
    if (!var6)
        SetFlags04(var5, 0x800);
    else
        ClearFlags04(var5, 0x800);

    func_02018f30((unsigned char*)arg0);
    func_020181fc(arg0);
    (void)func_020100f8((char const*)GameState::GetInstance());

    arg0->unk_830[1] = (char)var1->timeOfDayIndex_;
    arg0->unk_830[2] = 0;
    arg0->unknown_424_ = 0;

    unsigned char* var7 = (unsigned char*)arg0 + 0x2000;
    var7[Enum_02013e18_956] = 1;
    func_02018ab8(arg0);
    func_02017a94(arg0);
    return 1;
}
