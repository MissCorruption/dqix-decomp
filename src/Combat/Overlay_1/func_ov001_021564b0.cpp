#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { flagOffset = 0x40c2, listOffset = 0x4ec, contextOffset = 0x508, resetOffset = 0x7ee };
#else
enum { flagOffset = 0x42e2, listOffset = 0x6fc, contextOffset = 0x718, resetOffset = 0x9be };
#endif

extern "C" void func_02046a8c(int a, int b);
extern "C" void* func_020704fc(void);
struct EffectParam020708c8;
extern "C" void func_020708c8(EffectParam020708c8*, unsigned int);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);
extern "C" void* func_020421a0(void);
extern "C" void func_02043124(void* v);
extern "C" void func_ov001_02156b20(void* obj);
extern "C" void func_ov017_021bb27c(void* obj);

struct S021564b0 { char pad0; char flag1; char pad[8]; unsigned short fieldA; };

// USA: func_ov001_021564b0
extern "C" ARM unsigned short func_ov001_021564b0(struct S021564b0* obj) {
    void* ov17 = GetGameResources();
    if (*(unsigned char*)((char*)ov17 + flagOffset) != 0) {
        char* p3000 = (char*)ov17 + 0x3000;
        func_02046a8c(*(int*)(p3000 + listOffset), *(int*)(p3000 + contextOffset));
        func_020708c8((EffectParam020708c8*)func_020704fc(), 0xf);
        SetMainBrightness((GameResources*)ov17, 0, 0xf);
        void* field = func_020421a0();
        func_02043124(field);
        char* p1000 = (char*)field + 0x1000;
        p1000[resetOffset] = 0;
        func_ov001_02156b20(obj);
        func_ov017_021bb27c(obj);
        obj->flag1 = 1;
    }
    return obj->fieldA;
}
