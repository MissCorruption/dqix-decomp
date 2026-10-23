#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020a35e0(unsigned char* obj, unsigned char index);
extern "C" GameObject* func_0200ff1c(GameState* battleStruct, int combatantId);
extern "C" int func_02053c6c(unsigned char* obj);
extern "C" void* func_0202ae18(void);
extern "C" void* func_02010828(GameState* battleStruct);
extern "C" int func_ov023_021f44d0(void* obj);

// USA: func_ov023_021f5150
extern "C" ARM int func_ov023_021f5150(void* p0, unsigned char* p1, int* p2, int* p3) {
#if defined(jpn)
 enum {regionalOffset=0x8b8};
#else
 enum {regionalOffset=0x950};
#endif
    GameState* bs = GameState::GetInstance();
    char* g = (char*)func_02010828(bs);
    func_0202ae18();

    int sum = 0;
    int i;
    for (i = 0; i < 4; i++) {
        if (!func_020a35e0(p1, i)) continue;
        sum += p2[i];
        GameObject* c = func_0200ff1c(bs, i);
        if (c == 0) continue;
        int fVal = func_02053c6c((unsigned char*)c);
        if (fVal == 0) continue;
        int* f = (int*)fVal;
        int idx = *(int*)((char*)f + regionalOffset);
        int* arr = (int*)((char*)f + 0x138);
        arr[idx] += p2[i];
    }

    int ratio = func_ov023_021f44d0(p0);
    *p3 = ratio;

    unsigned int cap = 0x98967f;
    if (cap - *(unsigned int*)(g + 0xf6c) < (unsigned int)ratio) {
        *(unsigned int*)(g + 0xf6c) = cap;
    } else {
        *(unsigned int*)(g + 0xf6c) += ratio;
    }

    return (sum == 0 && *p3 == 0) ? 1 : 0;
}
