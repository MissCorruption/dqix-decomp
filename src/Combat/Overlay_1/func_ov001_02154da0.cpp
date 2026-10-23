#include <globaldefs.h>
#include "Resource/GameResources.h"

struct EffectParam020708c8;

extern "C" int func_020421a0();
extern "C" void func_02043204(char* obj);
extern "C" void func_02043124(char* obj);
extern "C" void* func_020704fc(void);
extern "C" void func_020708c8(struct EffectParam020708c8* obj, unsigned int value);
struct GameResources;
void SetBrightness(GameResources*, int, int);

#if defined(jpn)
enum { effectCounterOffset = 0x17ee };
#else
enum { effectCounterOffset = 0x19be };
#endif

// USA: func_ov001_02154da0
extern "C" ARM void func_ov001_02154da0() {
    char* obj = (char*)func_020421a0();
    func_02043204(obj);
    func_02043124(obj);
    *(unsigned char*)(obj + effectCounterOffset) = 0;
    func_020708c8((struct EffectParam020708c8*)func_020704fc(), 0);
    SetBrightness(GetGameResources(), -16, 0);
}
