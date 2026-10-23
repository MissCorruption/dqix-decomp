#if defined(jpn)
enum { RegionOffset718 = 0x508 };
#else
enum { RegionOffset718 = 0x718 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8478(void* obj);
extern "C" void func_ov017_021b848c(void* h, void* buf, int a, int b, int c, int d, int e, int f);
extern "C" GameObject* func_ov017_021a278c(void* unused, int val);
extern "C" void func_02076ccc(void*, int);
extern "C" GameObject* func_0200ff1c(GameState* battleStruct, int combatantId);
struct Obj02053f7c;
extern "C" void func_02053f7c(struct Obj02053f7c* obj, unsigned short a, int b);
extern "C" void func_ov017_021c6034(signed char* arr);

struct EventHdr021c616c {
    unsigned char pad0[8];
    unsigned short field8;
};

struct Evt021c616c {
    unsigned short field4;
    unsigned short field6;
    signed char flags[4];
    signed char fieldc;
    signed char fieldd;
    signed short fielde;
};

// USA: func_ov017_021c616c
extern "C" ARM void func_ov017_021c616c(int unused0, unsigned char* evtRaw, GameState* battleStruct, unsigned char* base) {
    void* table = *(void**)(base + 0x3000 + RegionOffset718);
    EventHdr021c616c* hdr = (EventHdr021c616c*)func_ov017_021b8478(table);
    Evt021c616c* evt = (Evt021c616c*)(evtRaw + 4);
    if (hdr != NULL && hdr->field8 == evt->field4) {
        func_ov017_021b848c(table, evt->flags, evt->fieldc, 0, evt->field6, evt->fieldd, 1, evt->fielde);
    } else {
        void* x = GetGameResources();
        GameObject* c = func_ov017_021a278c(x, evt->field4);
        if (c != NULL) {
            func_02076ccc(c, 9);
        }
    }
    for (unsigned int i = 0; i < 4; i++) {
        if (evt->flags[i] != 0) {
            GameObject* c2 = func_0200ff1c(battleStruct, i);
            if (c2 != NULL) {
                func_02053f7c((struct Obj02053f7c*)c2, evt->field4, 1);
            }
        }
    }
    func_ov017_021c6034(evt->flags);
}
