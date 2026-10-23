#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Resource/GameResources.h"

struct FlagWord02046708;
struct Obj020397cc;
struct Obj02033874;
struct SearchStruct0202c1a4;

struct Status02190884 {
    unsigned int flags;
};

struct Member02190884 {
    Object3D obj3D_;
    char padAC[4];
    short fieldB0;
    char padB2[2];
    short fieldB4;
    short fieldB6;
    char padB8[0xc1 - 0xb8];
    unsigned char modeC1 : 2;
    char padC2[0x130 - 0xc2];
    Status02190884* status;
#if defined(jpn)
    char pad134[0x2c6 - 0x134];
#else
    char pad134[0x2d2 - 0x134];
#endif
    unsigned char slot2d2;
};

struct Flags02190884 {
    char pad0[3];
    unsigned char active;
};

struct Init02190884 {
    int v[8];
};

extern "C" FlagWord02046708* func_020d6c00();
extern "C" int func_02046708(FlagWord02046708* flags, unsigned int mask);
extern "C" void func_020dc548(signed char id, signed char* list, signed char* count);
extern "C" int func_02039d7c(char* obj);
extern "C" SearchStruct0202c1a4* func_0202ae18();
extern "C" GameObject* func_0200fee0(GameState* battleStruct, int id);
extern "C" char* func_02012fe4();
extern "C" int func_020981e4(int obj, int id);
extern "C" GameObject* func_0200ff58(GameState* battleStruct, int id);
extern "C" int func_020546a8(void* obj);
extern "C" int func_ov017_02190818(int id);
extern "C" int func_02039888(void* obj);
extern "C" int func_02039820(void* obj);
extern "C" int func_02039828(void* obj);
extern "C" int func_02010038(GameState* battleStruct, unsigned char* out);
extern "C" int func_020535c8(signed char* obj);
extern "C" void func_020531f0(void* obj);
extern "C" int func_02039874(void* obj);
extern "C" unsigned char func_020100b0(GameState* battleStruct);
extern "C" void func_020340f4(unsigned char* obj);
extern "C" void func_02039858(unsigned char*, int);
extern "C" void func_020397c0(void* obj);
extern "C" void func_020397cc(Obj020397cc* obj, int flag);
extern "C" void func_02039d58(unsigned char* obj);
extern "C" int func_0202b7d8(int* obj);
extern "C" int func_0202c1a4(SearchStruct0202c1a4* search);
extern "C" void func_020340e4(unsigned char* obj);
extern "C" void func_02039d24(unsigned char* obj);
extern "C" void func_0203986c(unsigned char*, int);
extern "C" void func_02039880(unsigned char*, int);
extern "C" void func_020398a4(unsigned char* obj);
extern "C" void func_02033874(Obj02033874* obj, int value);
extern "C" void func_0202006c(unsigned char* obj, int value);

#if defined(jpn)
#define data_ov017_021d61dc data_ov017_021d662c
#endif
extern Init02190884 data_ov017_021d61dc;

// USA: func_ov017_02190884
extern "C" ARM void func_ov017_02190884(int id, int* out, int* count, int clearBit1, int cancel, int reset) {
    GameState* gs = GameState::GetInstance();

    if (func_02046708(func_020d6c00(), 0x2000) != 0) {
        unsigned char* base = (unsigned char*)func_02010828(gs);
        int i;
        for (i = 0; i < base[0xf7c]; i++) {
            out[i] = (base + i)[0xf78];
        }
        *count = base[0xf7c];
        return;
    }

    signed char nearCount;
    signed char nearList[6];
    unsigned char party[5];
    nearCount = 0;
    func_020dc548((signed char)id, nearList, &nearCount);
    for (int i = 0; i < nearCount; i++) {
        GameObject* m = gs->GetPartyMemberByIndex(nearList[i]);
        if (m != NULL && func_02039d7c((char*)m) != 0) {
            return;
        }
    }

    SearchStruct0202c1a4* search = func_0202ae18();
    GameResources* ctx = GetGameResources();
    if (ctx == NULL) {
        return;
    }
    Member02190884* self = (Member02190884*)func_0200fee0(gs, id);
    if (self == NULL) {
        return;
    }

    char* map = func_02012fe4();
    int inRange = 0;
    int restore;
    GameObject* obj;
    if (func_020981e4((int)((Zone3D*)map)->unk_840, *(unsigned short*)map)) {
        inRange = 1;
    }

    int listA[4];
    int listB[4];
    int nA = 0;
    int nB = 0;
    Flags02190884* f718 = (Flags02190884*)ctx->unknown_ptr_3718;
    Flags02190884* f734 = (Flags02190884*)ctx->unknown_ptr_array_371c[6];
    Flags02190884* fB30 = (Flags02190884*)ctx->unknown_ptr_array_3afc[13];
    if (!(self->status->flags & 1)) {
        listA[nA++] = id;
    } else {
        listB[nB++] = id;
    }

    for (int i = 3; i >= 0; i--) {
        Member02190884* m = (Member02190884*)func_0200ff58(gs, i);
        if (m != NULL && id == func_020546a8(m)) {
            if (!(m->status->flags & 1)) {
                listA[nA++] = i;
            } else {
                listB[nB++] = i;
            }
        }
    }

    Init02190884 order = data_ov017_021d61dc;
    int* p = listA;
    for (int i = 0; i < nA; i++, p++) {
        Member02190884* m = (Member02190884*)func_0200ff58(gs, *p);
        if (m != NULL) {
            order.v[m->slot2d2] = *p;
        } else {
            order.v[0] = *p;
        }
    }
    p = listB;
    for (int i = 0; i < nB; i++, p++) {
        Member02190884* m = (Member02190884*)func_0200ff58(gs, *p);
        if (m != NULL) {
            order.v[m->slot2d2 + 4] = *p;
        } else {
            order.v[4] = *p;
        }
    }

    *count = 0;
    p = order.v;
    for (int i = 0; i < 8; i++, p++) {
        if (*p >= 0) {
            out[(*count)++] = *p;
        }
    }

    if (inRange != 0 && func_ov017_02190818(out[0])) {
        for (int i = 1; i < *count; i++) {
            if (!func_ov017_02190818(out[i])) {
                int t = out[i];
                out[i] = out[0];
                out[0] = t;
                break;
            }
        }
    }

    func_02010828(gs);
    gs->GetProtagonist();
    int keep = 1;
    GameObject* leader = gs->GetPartyMemberByIndex(func_02039888(self));
    if (leader != NULL) {
        if (func_02039820(leader) == 0) {
            keep = 0;
        } else {
            keep = 1;
        }
        if (func_02039828(leader) != 0) {
            keep = 1;
        }
    }

    if (leader != NULL && out[0] != leader->obj3D_.unknown_4_) {
        GameObject* own = func_0200ff58(gs, id);
        int n;
        if (id == 0 || own != NULL) {
            n = func_02010038(gs, party);
        } else {
            party[0] = id;
            n = 1;
        }
        for (int i = 0; i < n; i++) {
            GameObject* m = gs->GetPartyMemberByIndex(party[i]);
            if (m != NULL && func_020535c8((signed char*)m)) {
                func_020531f0(m);
            }
        }
    }

    Vector3i pos[4];
    int rotY[4];
    for (int i = 0; i < *count; i++) {
        GameObject* m = gs->GetPartyMemberByIndex(out[i]);
        if (m != NULL) {
            pos[func_02039874(m)] = m->obj3D_.position_;
            rotY[func_02039874(m)] = m->obj3D_.rotation_.y;
        }
    }

    restore = 0;
    if (out[0] != func_020100b0(gs)) {
        restore = 1;
    }

    int bit;
    if (self->modeC1 & 2) {
        bit = 1;
    } else {
        bit = 0;
    }
    short shown = 0;
    int i = 0;
    for (; i < *count; i++) {
        Member02190884* m = (Member02190884*)gs->GetPartyMemberByIndex(out[i]);
        obj = gs->GetGameObjectByIndex(out[i] * 0xc + 0x14);
        if (m == NULL) {
            continue;
        }
        func_020340f4((unsigned char*)m);
        if (i == 0) {
            func_02039858((unsigned char*)m, -1);
            m->fieldB6 = 0x28;
            m->fieldB0 = 0x324;
            if (cancel != 0) {
                if (keep != 0) {
                    func_020397c0(m);
                    m->obj3D_.DisableFlag(0x1000000);
                } else {
                    func_020397cc((Obj020397cc*)m, 1);
                }
            }
            func_02039d58((unsigned char*)m);
            m->obj3D_.SetInheritedAlpha(0x1f);
            if (func_0202b7d8((int*)search) && id != func_0202c1a4(search)) {
                func_020340e4((unsigned char*)m);
            }
        } else {
            func_02039858((unsigned char*)m, out[shown - 1]);
            m->fieldB6 = 0x66;
            m->fieldB0 = 0x648;
            if (reset != 0) {
                func_02039d24((unsigned char*)m);
            }
            if (cancel != 0) {
                func_020397cc((Obj020397cc*)m, 1);
            }
            m->obj3D_.EnableFlag(0x80);
        }
        func_0203986c((unsigned char*)m, i);
        m->fieldB4 = 0x189;
        func_02039880((unsigned char*)m, out[0]);
        if (clearBit1 != 0) {
            func_020398a4((unsigned char*)m);
        }
        if (f734->active != 0) {
            if (bit != 0) {
                m->modeC1 |= 2;
            } else {
                m->modeC1 &= ~2;
            }
        }
        if (obj != NULL) {
            short kind = obj->obj3D_.unknown_2_;
            if (kind != 0x2347 && kind != 0x2348 && kind != 0x2349) {
                shown++;
            } else if (inRange != 0) {
                m->obj3D_.SetInheritedAlpha(0);
            } else {
                if (m->obj3D_.GetInheritedAlpha() == 0) {
                    func_02039d58((unsigned char*)m);
                    m->obj3D_.SetInheritedAlpha(0x1f);
                }
                shown++;
            }
        } else {
            shown++;
        }
    }

    unsigned char total = *count;
    unsigned char last = out[*count - 1];
    if (id == 0 && gs->GetPartyMemberByIndex(0xce) != NULL) {
        Member02190884* m = (Member02190884*)gs->GetPartyMemberByIndex(0xce);
        if (m != NULL) {
            func_02039858((unsigned char*)m, last);
            m->fieldB6 = 0x66;
            m->fieldB0 = 0x648;
            func_02039d24((unsigned char*)m);
            if (cancel != 0) {
                func_020397cc((Obj020397cc*)m, 1);
            }
            func_0203986c((unsigned char*)m, total);
            m->fieldB4 = 0x189;
            func_02039880((unsigned char*)m, out[0]);
            m->obj3D_.EnableFlag(0x80);
            if (clearBit1 != 0) {
                func_020398a4((unsigned char*)m);
            }
        }
    }

    if (f718->active != 0 || f734->active != 0 || fB30->active != 0) {
        restore = 0;
    }
    if (restore != 0) {
        for (int i = 0; i < *count; i++) {
            GameObject* m = gs->GetPartyMemberByIndex(out[i]);
            if (m != NULL) {
                m->obj3D_.position_ = pos[i];
                func_02033874((Obj02033874*)m, rotY[i]);
            }
        }
    }

    if (ctx->unknown_ptr_36d0 != NULL) {
        func_0202006c((unsigned char*)ctx->unknown_ptr_36d0, 1);
    }
}
