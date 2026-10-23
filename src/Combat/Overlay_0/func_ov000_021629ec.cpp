#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x218
#else
#define REGION_OFFSET_0 0x29c
#endif

#include "GameState/GameState.h"

struct Obj02048c90;
extern "C" void func_02048c90(struct Obj02048c90* obj);
extern "C" void func_02049ae4(unsigned char* obj);
extern "C" void func_02049458(unsigned char* obj, unsigned char value);
extern "C" void func_0204947c(unsigned char* obj, unsigned char value);
extern "C" void func_020493dc(unsigned char* obj, unsigned char value);
extern "C" int func_ov000_0215e9fc(int a, short* buf, int max, int start);
extern "C" int func_ov000_0215ec1c(int a, short* buf, int max, int start);

struct GatherObj021629ec {
    char pad[REGION_OFFSET_0];
    int field29c;
};

// USA: func_ov000_021629ec
extern "C" ARM void func_ov000_021629ec(struct GatherObj021629ec* obj) {
    GameState* bs = GameState::GetInstance();
    short buf[12];
    int n = 0;
    n = n + func_ov000_0215e9fc(obj->field29c, buf, 0xc, n);
    n = n + func_ov000_0215ec1c(obj->field29c, buf + n, 0xc - n, 0);
    for (int i = 0; i < n; i++) {
        GameObject* c = bs->GetCombatantByIndex(buf[i]);
        if (c) {
            func_02048c90((struct Obj02048c90*)c);
            func_02049ae4((unsigned char*)c);
            func_02049458((unsigned char*)c, 0xff);
            func_0204947c((unsigned char*)c, 0xff);
            func_020493dc((unsigned char*)c, 0xff);
        }
    }
}
