#include <globaldefs.h>

#if defined(jpn)
enum { kFinalSubflag = 0x3dc };
#else
enum { kFinalSubflag = 0x3bc };
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
extern "C" ARM int func_02013e18(Zone3D* zone)
{
    if (zone->unknown_424_ == 0)
        return 1;

    if (!func_02013fb4(zone))
        return 0;

    if (!zone->func_02014108())
        return 0;

    if (!zone->func_02014c04())
        return 0;

    if (!_ZN6Zone3D13func_020146fcEv(zone))
        return 0;

    if (!func_0201498c(zone))
        return 0;

    int v = zone->pUnknownStruct_8_->unknown_0_;

    if (func_0201b5b0(v))
    {
        func_02019728(zone, v % 20, 0, 0, 0);
        func_0201a600(zone);
    }
    else if (func_0201b5d8(v))
    {
        func_0201a600(zone);
    }

    LightingManager* lm = LightingManager::GetInstance();
    lm->ProcessZoneChange(zone);

    int ovr = lm->lightingIndexOverride_;
    int idx = lm->timeOfDayIndex_;
    if (ovr)
        idx = ovr;

    int color;
    if (zone->lighting_.maybeMode_ == 1)
        color = zone->lighting_.basic_.backgroundColor[idx];
    else
        color = zone->lighting_.advanced_.backgroundColor[idx];

    func_020c5588(color, 0x10, 0x7fff, 0, 0);

    GameResources* res = GetGameResources();
    int t = (unsigned int)((unsigned char*)zone->pUnknownStruct_8_)[0xe] << 24 >> 31;
    if (!t)
        SetFlags04(res, 0x800);
    else
        ClearFlags04(res, 0x800);

    func_02018f30((unsigned char*)zone);
    func_020181fc(zone);
    (void)func_020100f8((char const*)GameState::GetInstance());

    zone->unk_830[1] = (char)lm->timeOfDayIndex_;
    zone->unk_830[2] = 0;
    zone->unknown_424_ = 0;

    unsigned char* sub = (unsigned char*)zone + 0x2000;
    sub[kFinalSubflag] = 1;
    func_02018ab8(zone);
    func_02017a94(zone);
    return 1;
}
