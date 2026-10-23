#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { kRegionValue998_868 = 0x868 };
enum { kRegionValue9A0_870 = 0x870 };
#else
enum { kRegionValue998_868 = 0x998 };
enum { kRegionValue9A0_870 = 0x9a0 };
#endif

extern "C" void* func_020421a0(void);
struct Container020e0310;
extern "C" void* func_020e0434(Container020e0310*, int);
extern "C" void func_02042058(char*, const char*);
struct Struct_0205d81c;
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);
extern "C" void func_ov003_02159250(void*, void*);
extern "C" void func_ov003_0215b478(void*);
extern "C" void func_ov003_0215b8a0(void*);
extern "C" void func_ov003_0215b5c4(void*);

// USA: func_ov003_02159b20
extern "C" ARM void func_ov003_02159b20(void* self) {
    unsigned char* s = (unsigned char*)self;
    unsigned char* g = (unsigned char*)func_020421a0();
    unsigned char state = *(unsigned char*)(s + 0x580);

    if (state == 0) {
        if (*(unsigned char*)(s + 0x59d) != 0) return;

        int isSet = ((GameState*)((void*)GameState::GetInstance()))->IsMorningDayOrEvening();
        int key = 0x3e8;
        if (!isSet) key += 1;
        void* val = func_020e0434((Container020e0310*)(s + 0x64), key);
        func_02042058(*(char**)(s + 0x7c), (const char*)val);

        *(int*)(g + kRegionValue998_868) = 1;
        func_ov003_02159250(self, *(void**)(s + 0x7c));

        *(unsigned char*)(s + 0x580) = *(unsigned char*)(s + 0x580) + 1;
    }

    if (!(state == 1 && *(unsigned char*)(s + 0x59d) == 0 && *(int*)(g + kRegionValue9A0_870) == 3)) return;

    func_ov003_0215b478(self);
    func_ov003_0215b8a0(self);
    func_ov003_0215b5c4(self);

    func_0205deb4((Struct_0205d81c*)(s + 0xf4), 0, 0);
    func_0205deb4((Struct_0205d81c*)(s + 0xf4), 1, 0);
    func_0205deb4((Struct_0205d81c*)(s + 0xf4), 2, 0);

    *(unsigned char*)(s + 0x588) = 2;
    *(unsigned char*)(s + 0x580) = 0;
}
