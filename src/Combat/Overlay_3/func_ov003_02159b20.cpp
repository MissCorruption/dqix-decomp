#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02159b20_2456 = 0x868 };
enum { Enum_ov003_02159b20_2464 = 0x870 };
#else
enum { Enum_ov003_02159b20_2456 = 0x998 };
enum { Enum_ov003_02159b20_2464 = 0x9a0 };
#endif

extern "C" void* func_020421a0(void);
struct Struct_0201099c_3;
extern "C" void* func_020e0434(Struct_0201099c_3*, int);
extern "C" void func_02042058(char*, const char*);
struct Struct_0205d81c;
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);
extern "C" void func_ov003_02159250(void*, void*);
extern "C" void func_ov003_0215b478(void*);
extern "C" void func_ov003_0215b8a0(void*);
extern "C" void func_ov003_0215b5c4(void*);

// USA: func_ov003_02159b20
extern "C" ARM void func_ov003_02159b20(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char* var1 = (unsigned char*)func_020421a0();
    unsigned char var2 = *(unsigned char*)(var0 + 0x580);

    if (var2 == 0) {
        if (*(unsigned char*)(var0 + 0x59d) != 0) return;

        int var3 = ((GameState*)((void*)GameState::GetInstance()))->IsMorningDayOrEvening();
        int var4 = 0x3e8;
        if (!var3) var4 += 1;
        void* var5 = func_020e0434((Struct_0201099c_3*)(var0 + 0x64), var4);
        func_02042058(*(char**)(var0 + 0x7c), (const char*)var5);

        *(int*)(var1 + Enum_ov003_02159b20_2456) = 1;
        func_ov003_02159250(arg0, *(void**)(var0 + 0x7c));

        *(unsigned char*)(var0 + 0x580) = *(unsigned char*)(var0 + 0x580) + 1;
    }

    if (!(var2 == 1 && *(unsigned char*)(var0 + 0x59d) == 0 && *(int*)(var1 + Enum_ov003_02159b20_2464) == 3)) return;

    func_ov003_0215b478(arg0);
    func_ov003_0215b8a0(arg0);
    func_ov003_0215b5c4(arg0);

    func_0205deb4((Struct_0205d81c*)(var0 + 0xf4), 0, 0);
    func_0205deb4((Struct_0205d81c*)(var0 + 0xf4), 1, 0);
    func_0205deb4((Struct_0205d81c*)(var0 + 0xf4), 2, 0);

    *(unsigned char*)(var0 + 0x588) = 2;
    *(unsigned char*)(var0 + 0x580) = 0;
}
