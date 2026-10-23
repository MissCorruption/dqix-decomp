#include <globaldefs.h>
#include "GameState/GameState.h"

#include "World/Zone3D.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct FlagWord02046708 { unsigned int flags; };

extern "C" void* func_020d6c00(void);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0205ec34(void);
extern "C" void* func_02010828(GameState* battleStruct);
extern "C" int func_02046708(struct FlagWord02046708* word, unsigned int mask);
extern "C" int func_02094b5c(void* self, int combatantId);
extern "C" unsigned char func_020100b0(GameState* battleStruct);
extern "C" void func_020a8ac8(unsigned char* obj, int bit);
extern "C" void func_020a8c4c(void* obj, unsigned char axis);
extern "C" void func_020a8b0c(void* obj, int bit);
extern "C" void func_020a8d08(void* obj, int bit);
extern "C" void func_020a87d0(void* obj);
struct Obj020a8874 {
    unsigned char byte0;
    unsigned char byte1;
    unsigned char byte2;
    unsigned char byte3_pad;
    unsigned char flag_0x4;
    unsigned char mask_0x5;
};
extern "C" void func_020a8874(struct Obj020a8874* obj);
extern "C" void func_020a88e8(void* obj);
extern "C" void func_020aeb34(void);
extern "C" int func_0206dfb0(int unused, unsigned char* arr, int index);

// USA: func_020a84e0
extern "C" ARM void func_020a84e0() {
    GameState* gs = GameState::GetInstance();
    GetGameResources();
    struct FlagWord02046708* fw = (struct FlagWord02046708*)func_020d6c00();
    Zone3D* zone = (Zone3D*)func_02012fe4();
    int ctx = (int)func_0205ec34();
    unsigned char* list;
    int j;
    GameObject* po;
    int i = 0;
    for (;;) {
        ZoneFeatures::Opcode6aEntry* entry = func_0201e664(&zone->substruct_6c_, i);
        i++;
        if (!entry) {
            break;
        }
        if (entry->maybeType != 0xc) {
            continue;
        }
        unsigned char* sub = (unsigned char*)&entry->unk_2c.type12;
        list = (unsigned char*)func_02010828(gs);
        j = 0;
        while (j < *(unsigned char*)(list + 0xf7c)) {
            po = gs->GetPartyMemberByIndex(*(unsigned char*)(list + 0xf78 + j));
            if (po) {
                if (!func_02046708(fw, 0x200000) &&
                    func_02094b5c(entry, po->obj3D_.unknown_4_) != 0) {
                    switch (sub[0]) {
                    case 2:
                        func_020a8ac8(sub, po->obj3D_.unknown_4_ & 0xff);
                        break;
                    case 3:
                        func_020a8c4c(sub, po->obj3D_.unknown_4_ & 0xff);
                        break;
                    }
                }
                switch (sub[0]) {
                case 2:
                    func_020a8b0c(sub, po->obj3D_.unknown_4_ & 0xff);
                    break;
                case 3:
                    func_020a8d08(sub, po->obj3D_.unknown_4_ & 0xff);
                    break;
                }
            }
            j++;
        }
        if (!func_02046708(fw, 0x200000) &&
            func_02094b5c(entry, func_020100b0(gs)) != 0) {
            if (sub[0] == 1) {
                func_020a87d0(sub);
            }
        } else {
            if (sub[0] == 1) {
                func_020a8874((struct Obj020a8874*)sub);
            }
        }
        if (sub[0] == 1) {
            func_020a88e8(sub);
        }
    }
    if (zone->currentZoneID_ != 0x1644) {
        return;
    }
    if (func_0206dfb0(ctx, (unsigned char*)ctx + 0x8c, 0x384) == 0) {
        return;
    }
    func_020aeb34();
}
