#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "GameState/GameState.h"

extern "C" int func_0201079c(char* obj);
extern "C" int func_020107d0(char* obj);
extern "C" int func_02010804(char* obj);
void SetBrightness(GameResources*, int, int);
extern "C" void func_ov017_0219bcac(unsigned char flag);
extern "C" void func_02010774(char* obj, int v);
extern "C" void func_020107a8(char* obj, int v);
extern "C" void func_020107dc(char* base, int val);

struct Obj021aa41c {
    unsigned char unk0;
    unsigned char flag1;
    unsigned char pad2[6];
    unsigned short f8;
    unsigned short fa;
    unsigned short fc;
};

// USA: func_ov017_021aa41c
extern "C" ARM void func_ov017_021aa41c(Obj021aa41c* p) {
    GameState* battleStruct = GameState::GetInstance();
    char* obj = (char*)battleStruct;
    int v0 = func_0201079c(obj);
    int v4 = func_020107d0(obj);
    int v8 = func_02010804(obj);
    if (v0 * 10000 + v4 * 100 + v8 != p->f8 * 10000 + p->fa * 100 + p->fc) {
        func_ov017_0219bcac(0);
    } else {
        GameResources* ov = GetGameResources();
        SetBrightness(ov, 0, 30);
    }
    func_02010774(obj, p->f8);
    func_020107a8(obj, p->fa);
    func_020107dc(obj, p->fc);
    p->flag1 = 1;
}
