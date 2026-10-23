#include <globaldefs.h>

#include "GameState/GameState.h"
#include "Input/Input.h"

extern "C" int func_02046b08(void** obj);
extern "C" void func_ov017_02199e98(void* obj);
extern "C" void* func_02010828(GameState* gs);
extern "C" int func_02039750(void* obj);
extern "C" int func_0203402c(struct BitField0203402c* p);
extern "C" unsigned char func_02039820(void* obj);
extern "C" int func_020535c8(signed char* obj);
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);
extern "C" void func_ov017_021a5bac(unsigned char* base);
extern "C" void func_ov017_021996fc(unsigned char* base);
extern "C" int func_02046708(struct FlagWord02046708* word, unsigned int mask);
extern "C" void func_ov017_021999fc(unsigned char* self);

struct Entry_02199684 { unsigned char pad[0x14]; int val; unsigned char pad2[0x20 - 0x18]; };
extern "C" void func_ov017_02199684(Entry_02199684* arr, int count, int value);
extern "C" void func_ov017_021996bc(Entry_02199684* arr, int count);

struct TileMap0204bc74;
extern "C" void func_0204bc74(TileMap0204bc74* obj, unsigned short tile, int x, int y, int w, int h, unsigned short palette);
struct List0204b0e8;
extern "C" void func_0204b0e8(List0204b0e8* obj, void* buf);

struct BackgroundControlFields {
    unsigned short priority : 2;
    unsigned short tileBase : 4;
    unsigned short unused6 : 1;
    unsigned short colorMode : 1;
    unsigned short mapBase : 5;
    unsigned short wrap : 1;
    unsigned short size : 2;
};

// USA: func_ov017_02199f08
extern "C" ARM void func_ov017_02199f08(unsigned char* self) {
#if defined(jpn)
    enum {regionalOffset0 = 0x3e60, regionalOffset1 = 0x3e54, regionalOffset2 = 0x3e58, regionalOffset3 = 0x294, regionalOffset4 = 0x3800, regionalOffset5 = 0xa90, regionalOffset6 = 0x4ec, regionalOffset7 = 0x180, regionalOffset8 = 0xa88, regionalOffset9 = 0xa8c};
#else
    enum {regionalOffset0 = 0x4080, regionalOffset1 = 0x4074, regionalOffset2 = 0x4078, regionalOffset3 = 0xb4, regionalOffset4 = 0x3c00, regionalOffset5 = 0xcb0, regionalOffset6 = 0x6fc, regionalOffset7 = 0x18c, regionalOffset8 = 0xca8, regionalOffset9 = 0xcac};
#endif

    struct HeadNode02046b24;
    if (func_02046b08((void**)*(struct HeadNode02046b24***)(self + 0x3000 + regionalOffset6)) == 0) {
        func_ov017_02199e98(self);
        return;
    }

    GameState* gs = GameState::GetInstance();
    gs->GetProtagonist();
    GameObject* actor = gs->GetUnknownGameObject();
    unsigned char* party = (unsigned char*)func_02010828(gs);
    int mode = func_02039750(actor);

    if (mode == -1) {
        if (func_0203402c((BitField0203402c*)actor) == 0 &&
            *(int*)(self + regionalOffset0) == 0) {
            if (g_keyManager.TestKeysPressed(2) &&
                func_02039820(actor) &&
                (*(int*)((char*)actor + regionalOffset7) & 1) == 0 &&
                func_020535c8((signed char*)actor) == 0 &&
                *(short*)((char*)actor + 0xac) == 0) {
                func_020397cc((Obj020397cc*)actor, 1);
                *(unsigned short*)((char*)actor + 0xb2) = 0;
                func_020466e4((unsigned int*)func_020d6c00(), 0x400);
                func_ov017_021a5bac(self);

                volatile unsigned short* reg = (volatile unsigned short*)0x400000a;
                volatile short v1, v2;
                {
                    unsigned short raw = reg[0];
                    *(volatile unsigned short*)(*(BackgroundControlFields**)(self + 0x3000 + regionalOffset8)) = raw;
                    v1 = raw;
                    v1;
                }
                {
                    unsigned short raw = reg[1];
                    v2 = raw;
                    v2;
                    *(volatile unsigned short*)(*(BackgroundControlFields**)(self + 0x3000 + regionalOffset9)) = raw;
                    v2;
                }
                func_ov017_021996fc(self);
                *(int*)(self + regionalOffset0) = 1;
            }
            return;
        }
    }

    if (g_keyManager.TestKeysReleased(2) != 0 ||
        *(short*)((char*)actor + 0xac) != 0 ||
        func_0203402c((BitField0203402c*)actor) != 0) {
        func_ov017_02199e98(self);
        return;
    }

    if (mode != -1) {
        int i = 0;
        while (i < *(unsigned char*)(party + 0xf7c)) {
            unsigned char* e = party + i;
            GameObject* member = gs->GetPartyMemberByIndex(e[0xf78]);
            *(unsigned short*)((char*)member + 0xac) = 0;
            i++;
        }
    }

    if (func_02046708((FlagWord02046708*)func_020d6c00(), 4) != 0) {
        func_ov017_02199e98(self);
        return;
    }

    func_ov017_021999fc(self);

    Entry_02199684* e;
    int i;
    if (g_keyManager.TestKeysHeld(2) != 0 && mode != -1) {
        func_ov017_02199684((Entry_02199684*)(self + regionalOffset3 + regionalOffset4), 2, 0x800);
        for (i = 0; i < 2; i++) {
            e = (Entry_02199684*)(self + regionalOffset3 + regionalOffset4) + i;
            func_0204bc74((TileMap0204bc74*)e, 0, 0, 0, 0x20, 0x19, 0);
            func_0204b0e8((List0204b0e8*)e, 0);
        }
        func_ov017_021996bc((Entry_02199684*)(self + regionalOffset3 + regionalOffset4), 2);
    }
}
