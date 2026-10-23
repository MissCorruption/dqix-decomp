#if defined(jpn)
enum { RegionOffset6fc = 0x4ec, RegionOffset18c = 0x180, RegionOffset998 = 0x868, RegionOffsetb3c = 0x91c };
#else
enum { RegionOffset6fc = 0x6fc, RegionOffset18c = 0x18c, RegionOffset998 = 0x998, RegionOffsetb3c = 0xb3c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

extern "C" void* func_020421a0(void);
extern "C" void* func_020d6c00(void);
extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int a, unsigned char* p, int bit);
extern "C" int func_02046b08(void** p);
extern "C" int func_02039820(void* obj);
extern "C" int func_020535c8(signed char* p);
struct BitField0203402c;
extern "C" int func_0203402c(BitField0203402c* p);
struct FlagWord02046708;
extern "C" int func_02046708(FlagWord02046708* w, unsigned int mask);
extern "C" int func_02039d7c(char* p);
extern "C" int func_020c39c8(volatile unsigned short* p);
struct Obj0205eaa0;
extern "C" int func_0205eaa0(Obj0205eaa0* obj, int a, int b);
extern "C" void func_02043204(char* p);
extern "C" void* func_020d7a50(void);
struct Obj020d7aa0;
extern "C" void func_020d7aa0(Obj020d7aa0* obj);
extern "C" void* func_02012fe4(void);
extern "C" void* func_02017c58(void* a);
extern "C" void func_ov017_021c0760(unsigned char* obj, unsigned char flag);
struct List02046a3c;
struct Node02046a3c;
extern "C" void func_02046a3c(List02046a3c*, Node02046a3c*);

extern Obj0205eaa0 data_02108760;

// USA: func_ov017_021c05f4
extern "C" ARM void func_ov017_021c05f4(void* p9, unsigned char p8, unsigned char p7, int p6) {
    void* g = func_020421a0();
    if (p6 != 0) {
        GameObject* combatant = GameState::GetInstance()->GetUnknownGameObject();
        void* d = func_020d6c00();
        void* f = func_0205ec34();
        if (func_0206dfb0((int)f, (unsigned char*)f + 0x8c, 0x119a) == 0) return;
        if (func_02046b08((void**)*(void**)((char*)p9 + 0x3000 + RegionOffset6fc)) == 0) return;
        if (func_02039820(combatant) == 0) return;
        if (func_020535c8((signed char*)combatant) != 0) return;
        if (*(int*)((char*)combatant + RegionOffset18c) & 1) return;
        if (func_0203402c((BitField0203402c*)combatant) != 0 ||
            *(short*)((char*)combatant + 0xac) != 0 ||
            *(int*)((char*)g + RegionOffset998) != 0) return;
        if (func_02046708((FlagWord02046708*)d, 0x800) != 0) return;
        if (func_02039d7c((char*)combatant) != 0) return;
        if (func_020c39c8((volatile unsigned short*)0x400006c) != 0) return;
        if (g_keyManager.TestKeysPressed(4) == 0) return;
        *(unsigned short*)((char*)combatant + 0xb2) = 0;
        func_0205eaa0(&data_02108760, 1, 0);
    } else {
        if (*(int*)((char*)g + RegionOffset998) != 0) func_02043204((char*)g);
    }

    void* reset = func_020d7a50();
    func_020d7aa0((Obj020d7aa0*)reset);
    func_02017c58(func_02012fe4());

    func_ov017_021c0760((unsigned char*)*(void**)((char*)p9 + 0x3000 + RegionOffsetb3c), p8);
    char* base = (char*)p9 + 0x3000;
    *((unsigned char*)*(void**)(base + RegionOffsetb3c) + 0x24) = p7;
    func_02046a3c((List02046a3c*)(*(void**)(base + RegionOffset6fc)), (Node02046a3c*)(*(void**)(base + RegionOffsetb3c)));
}
