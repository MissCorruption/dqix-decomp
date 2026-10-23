#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Res020a654c {
#if defined(jpn)
    char pad0[0x34ec];
#else
    char pad0[0x36fc];
#endif
    void* nodeList;
};

struct List020a654c {
    char pad0[3];
    unsigned char f3;
};

struct Out020a654c {
    int f0;
    int f4;
};

extern "C" void* func_02012fe4();
extern "C" void func_0202ae18();
struct PointerField32c_ffc0;
extern "C" void* func_0200ffc0(PointerField32c_ffc0*);
struct HeadNode02046b24;
extern "C" int func_02046b24(HeadNode02046b24**);
struct S02046b1c;
extern "C" void* func_02046b1c(S02046b1c*);
struct GameResources;
int IsBrightnessTransitionActive(GameResources*);
extern "C" void func_020a75ec(void* p);
extern "C" void func_ov017_02193428(void*, void*);
extern "C" void func_020a7ce0(void* p);
extern "C" int func_020a7d74(void* p, int* out1, int* out2);
extern "C" int func_02046b08(void**);
extern "C" int func_ov017_021a93f0(void* res, int a, int b);

// USA: func_020a654c
extern "C" ARM void func_020a654c(struct Res020a654c* self) {
    void* gs = GameState::GetInstance();
    unsigned short* p;
    void* nodeList = self->nodeList;
    p = (unsigned short*)func_02012fe4();
    func_0202ae18();
    void* obj = func_0200ffc0((PointerField32c_ffc0*)gs);
    ((GameState*)gs)->GetUnknownGameObject();
    int id = func_02046b24((HeadNode02046b24**)nodeList);
    void* lst = func_02046b1c((S02046b1c*)nodeList);
    if (obj == 0) {
        return;
    }
    if (id == 10 && ((struct List020a654c*)lst)->f3 != 0) {
        return;
    }
    if (id == 3) {
        if (IsBrightnessTransitionActive((GameResources*)self) == 0) {
            return;
        }
    }
    func_020a75ec(obj);
    if (TestFlags00((GameResources*)self, 0x2020) == 0) {
        func_ov017_02193428(obj, (void*)1);
    }
    if (*p == 0x2710) {
        func_020a7ce0(obj);
    }
    if (TestFlags00((GameResources*)self, 0x2020) != 0) {
        return;
    }
    struct Out020a654c out;
    out.f4 = 0;
    out.f0 = 0;
    if (func_020a7d74(obj, &out.f4, &out.f0) == 0) {
        return;
    }
    if (out.f0 != 0 && out.f0 == 1) {
        out.f4 = 0x76c;
    }
    if (out.f4 == 0) {
        return;
    }
    if (func_02046b08((void**)self->nodeList) == 0) {
        return;
    }
    func_ov017_021a93f0(self, out.f4, 0);
}
