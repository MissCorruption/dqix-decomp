#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/CopyRecord0200fbb4.h"
#include "Resource/GameResources.h"

struct Combatant02048260;
struct Combatant020482bc;
struct Bytes02033b88;
struct TailList020469b4;
struct TailNode020469b4;

struct Warp0219ff58 {
    short mapId;
    char field2;
    char pad3[4];
    char field7;
    char pad8[8];
    int pos[3];
    short angle;
    char pad1e[0x70 - 0x1e];
};

struct Status0219ff58 {
    unsigned int flags;
};

struct Combatant0219ff58 {
    unsigned char pad0[0x130];
    Status0219ff58* status;
#if defined(jpn)
    unsigned char pad134[0x180 - 0x134];
#else
    unsigned char pad134[0x18c - 0x134];
#endif
    unsigned int flags18c;
};

extern "C" int func_02011b50(void* obj, int mask);
extern "C" void func_02011b3c(void* obj, unsigned char mask);
extern "C" int func_020100a8(GameState* battleStruct);
extern "C" void func_02048150(void* combatant, int a, int b);
extern "C" int func_02048260(struct Combatant02048260* c);
extern "C" int func_020482bc(struct Combatant020482bc* c);
extern "C" int func_02033b88(struct Bytes02033b88* p, int val);
extern "C" void func_02039858(unsigned char*, int);
extern "C" void func_0203986c(unsigned char* obj, int value);
extern "C" void func_020397c0(void* obj);
extern "C" void func_ov017_021cedf4(int a, int b, int c);
extern "C" void func_ov017_021c9e00(int id, int a, int b, int c);
extern "C" GameObject* func_0200ff58(GameState* battleStruct, int combatantId);
extern "C" int func_020546a8(void* obj);
extern "C" void func_02070378(char* obj);
extern "C" void func_ov017_0219e310(unsigned char* obj, int flag);
extern "C" void func_020469b4(struct TailList020469b4* list, struct TailNode020469b4* node);

// USA: func_ov017_0219ff58
extern "C" ARM int func_ov017_0219ff58(unsigned char* ov, int flagA, int flagB, int revive) {
#if defined(jpn)
 enum { regionalNode=0x4fc, regionalList=0x4ec };
#else
 enum { regionalNode=0x70c, regionalList=0x6fc };
#endif
    GameState* battle = GameState::GetInstance();
    if (func_02011b50(battle, 1) != 0) {
        if (revive != 0) {
            GetGameResources();
            signed char leader = func_020100a8(battle);
            Combatant0219ff58* c = (Combatant0219ff58*)battle->GetPartyMemberByIndex(leader);
            if (c != NULL) {
                func_02048150(c, 0, 1);
                func_02048260((struct Combatant02048260*)c);
                func_020482bc((struct Combatant020482bc*)c);
                c->flags18c &= ~1;
                func_02033b88((struct Bytes02033b88*)c, 0);
                if (c->status->flags & 1) {
                    func_02039858((unsigned char*)c, -1);
                    func_0203986c((unsigned char*)c, 0);
                    func_020397c0(c);
                }
                func_ov017_021cedf4(leader, 1, 0);
                func_ov017_021c9e00(leader, 0, 0, 1);
            }
            for (signed char i = 0; i < 4; i++) {
                Combatant0219ff58* m = (Combatant0219ff58*)func_0200ff58(battle, i);
                if (m != NULL && leader == func_020546a8(m)) {
                    func_02048150(m, 0, 1);
                    func_02048260((struct Combatant02048260*)m);
                    func_020482bc((struct Combatant020482bc*)m);
                    m->flags18c &= ~1;
                    func_02033b88((struct Bytes02033b88*)m, 0);
                    func_ov017_021cedf4(i, 1, 0);
                    func_ov017_021c9e00(i, 0, 0, 1);
                }
            }
        }

        if (flagA != 0) func_02011b3c(battle, 2);
        if (flagB != 0) func_02011b3c(battle, 4);
        if (revive != 0) func_02011b3c(battle, 8);

        Warp0219ff58 warp;
        func_02070378((char*)&warp);
        warp.mapId = 0x10d0;
        warp.field2 = revive == 0;
        warp.field7 = 1;
        warp.pos[0] = -0xf5;
        warp.pos[1] = 0x1199;
        warp.pos[2] = -0x30a3;
        warp.angle = 0x323d;
        func_0200fba4(battle, &warp);

        if (flagB != 0) {
            func_ov017_0219e310(*(unsigned char**)(ov + 0x3000 + regionalNode), 0);
            func_020469b4(*(struct TailList020469b4**)(ov + 0x3000 + regionalList),
                             *(struct TailNode020469b4**)(ov + 0x3000 + regionalNode));
        }
        return 1;
    }
    return 0;
}
