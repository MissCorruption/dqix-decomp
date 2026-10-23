#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" int func_02094a00(void);
extern "C" void func_02094ab0(void);
extern "C" void func_020397c0(void* obj);
extern "C" void* func_020d6c00(void);

struct FlagWord020466f4;
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);

extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27ac(void* obj);
extern "C" void func_020e1154(void* obj);

struct Flags0xc1_020e455c {
    unsigned char a : 2;
    unsigned char rest : 6;
};

struct MainStruct020e455c {
    char pad0[0x1];
    unsigned char f1;
    char pad2[0xc - 0x2];
    short fc;
};

// USA: func_020e455c
extern "C" ARM void func_020e455c(struct MainStruct020e455c* obj) {
    GameState* battleStruct = GameState::GetInstance();
    func_02094a00();
    func_02094ab0();
    GameObject* c = battleStruct->GetUnknownGameObject();
    if (c != 0) {
        func_020397c0(c);
    }
    func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 2);

    unsigned int mask = 0x1000000;
    int i;
    for (i = 0; i < 4; i++) {
        GameObject* cc = battleStruct->GetPartyMemberByIndex(i);
        if (cc != 0) {
            ((Object3D*)((unsigned char*)cc))->DisableFlag(mask);
            ((struct Flags0xc1_020e455c*)((char*)cc + 0xc1))->a &= ~2;
        }
    }

    if (obj->fc >= 0) {
        int val = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(val))->RemoveTask((int)(obj->fc));
        obj->fc = -1;
    }

    func_020a27ac((void*)func_020100f8((char*)battleStruct));
    func_020e1154((void*)0x3e8);
    obj->f1 = 1;
}
