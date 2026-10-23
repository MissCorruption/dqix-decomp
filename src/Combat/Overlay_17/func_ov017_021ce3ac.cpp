#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { kObjectEventFlagOffset = 0x2c6 };
#else
enum { kObjectEventFlagOffset = 0x2d2 };
#endif

extern "C" GameObject* func_0200ff58(GameState* battleStruct, int combatantId);
extern "C" void func_020546a0(void*, int);
extern "C" void func_020546b4(void*, int);
extern "C" void func_02039858(unsigned char*, int);
extern "C" void func_0203986c(unsigned char*, int);

struct LocalEvt021ce3ac {
    unsigned char pad0[4];
    unsigned short field4;
    signed char field6;
    signed char field7;
    signed char field8;
    signed char field9;
    unsigned char fielda;
};

// USA: func_ov017_021ce3ac
extern "C" ARM void func_ov017_021ce3ac(int unused0, LocalEvt021ce3ac* evt, GameState* battleStruct) {
    GameObject* c = func_0200ff58(battleStruct, evt->field4);
    if (c == NULL) {
        return;
    }
    func_020546a0(c, evt->field6);
    func_020546b4(c, evt->field7);
    func_02039858((unsigned char*)c, evt->field8);
    func_0203986c((unsigned char*)c, evt->field9);
    *((unsigned char*)c + kObjectEventFlagOffset) = evt->fielda;
}
