#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
extern char data_020f29cc;
#endif

extern "C" int func_ov017_021959b4(void);
extern "C" void* func_020421a0(void);
extern "C" void* func_0202ae18(void);
extern "C" char* func_020100f8(char*);
extern "C" unsigned short* func_02012fe4(void);
extern "C" void func_020d9a58(void* self);
extern "C" int func_0202b7d8(int* p);
extern "C" int func_0202c508(void* obj);
extern "C" void func_ov017_021cf730(int a, int b);
extern "C" void func_020a27b8(unsigned char* obj);
extern "C" void func_020531f0(void* obj);
struct Obj020397cc;
extern "C" void func_020397cc(Obj020397cc*, int);
extern "C" void func_020e11a4(void);
extern "C" void func_02046380(void* global);
extern "C" int func_020e51cc(int value);
#if !defined(jpn)
extern "C" void func_0204500c(void* global, void* entry, int a, int b);
#endif
extern "C" int func_020457e0(void* global);
extern "C" void func_ov017_021ab860(short value, int flag);
extern "C" void func_020e1154(void* obj);
extern "C" void func_02043204(char* obj);
extern "C" void func_020397c0(void* obj);
extern "C" void func_020d9ab0(void* self);
extern "C" int func_0201b5d8(int x);

struct Obj020d9870 {
    unsigned char byte0;
    unsigned char byte1;
    unsigned char pad2[0x8 - 0x2];
    unsigned char state;
};

// USA: func_020d9870
extern "C" ARM void func_020d9870(struct Obj020d9870* self) {
#if defined(jpn)
    enum { choiceOffset = 0x17e2, pendingOffset = 0x868 };
#else
    enum { choiceOffset = 0x19b2, pendingOffset = 0x998 };
#endif
    GameState* gs = GameState::GetInstance();
    GetGameResources();
    void* unkObj = gs->GetUnknownGameObject();
    void* g1c = func_020421a0();
    FontBankLoader* g = func_02094a00();
    void* t = func_0202ae18();
    char* f4 = func_020100f8((char*)gs);
    unsigned short* p = func_02012fe4();

    if (func_ov017_021959b4() != 0) {
        func_020d9a58(self);
        return;
    }

    if (self->state == 0) {
        if (func_0202b7d8((int*)t) != 0 && func_0202c508(t) != 0) {
            func_ov017_021cf730(-1, 0);
        }
        func_020a27b8((unsigned char*)f4);
        self->state = 1;
    } else if (self->state == 1) {
        func_02094b30(g, 0x20e, 0);
        self->state = 2;
    } else if (self->state == 2) {
        if (func_02094b4c(g) != 0) {
            self->state = 3;
        }
    } else if (self->state == 3) {
        if (unkObj != NULL) {
            func_020531f0(unkObj);
            func_020397cc((Obj020397cc*)unkObj, 1);
        }
        func_020e11a4();
        func_02046380(g1c);
#if defined(jpn)
        func_0204500c(g1c, &data_020f29cc, 0);
#else
        func_0204500c(g1c, (void*)func_020e51cc(0x3e), 0, 0xe3);
#endif
        *(unsigned char*)((char*)g1c + choiceOffset) = 0;
        *(int*)((char*)g1c + pendingOffset) = 1;
        self->state = 4;
    } else if (self->state == 4) {
        if (*(int*)((char*)g1c + pendingOffset) == 0) {
            if (func_020457e0(g1c) == 0) {
                func_ov017_021ab860(*(short*)((char*)unkObj + 4), 1);
                func_020e1154((void*)0xbb8);
            }
            func_02043204((char*)g1c);
            self->state = 5;
        }
    } else if (self->state == 5) {
        func_020397c0(unkObj);
        func_020d9ab0(self);
    }

    if (func_0201b5d8(*p) != 0) {
        return;
    }
    func_020d9ab0(self);
}
