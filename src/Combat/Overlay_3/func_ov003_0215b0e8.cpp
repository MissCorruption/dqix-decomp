#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov003_0215b0e8_2456 = 0x868 };
enum { Enum_ov003_0215b0e8_2464 = 0x870 };
enum { Enum_ov003_0215b0e8_2478 = 0x7de };
#else
enum { Enum_ov003_0215b0e8_2456 = 0x998 };
enum { Enum_ov003_0215b0e8_2464 = 0x9a0 };
enum { Enum_ov003_0215b0e8_2478 = 0x9ae };
#endif

extern "C" void* func_020421a0(void);
struct Struct_0201099c_3;
extern "C" void* func_020e0434(Struct_0201099c_3*, int);
extern "C" void func_ov003_02159250(void*, void*);
extern "C" void func_02043124(void*);
struct Struct_02109bf4_2;
extern "C" void func_0209c830(Struct_02109bf4_2*, int);
extern "C" int func_0209ca2c(void*);

extern unsigned char data_02109bf4;

// USA: func_ov003_0215b0e8
extern "C" ARM void func_ov003_0215b0e8(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_020421a0();
    unsigned char var2 = *(unsigned char*)(var0 + 0x580);

    if (var2 == 0) {
        if (*(unsigned char*)(var0 + 0x59d) != 0) return;

        void* var3 = func_020e0434((Struct_0201099c_3*)(var0 + 0x64), 0x44c);
        if (var3 != 0 && strlen((char*)var3) != 0) {
            *(int*)(var1 + Enum_ov003_0215b0e8_2456) = 1;
            void* var4 = func_020e0434((Struct_0201099c_3*)(var0 + 0x64), 0x44c);
            func_ov003_02159250(arg0, var4);
        } else {
            func_02043124(var1);
        }
        *(unsigned char*)(var0 + 0x580) = *(unsigned char*)(var0 + 0x580) + 1;
    }

    if (var2 == 1) {
        if (*(int*)(var1 + Enum_ov003_0215b0e8_2456) != 0) return;
        func_0209c830((Struct_02109bf4_2*)&data_02109bf4, 0x3b);
        *(unsigned char*)(var0 + 0x580) = *(unsigned char*)(var0 + 0x580) + 1;
    }

    if (var2 != 2) return;

    if (*(int*)(var1 + Enum_ov003_0215b0e8_2464) == 3) {
        *(unsigned char*)(var1 + 0x1000 + Enum_ov003_0215b0e8_2478) = 0;
    }
    if (func_0209ca2c(&data_02109bf4) == 0) {
        *(unsigned char*)(var0 + 0x588) = 1;
        *(unsigned char*)(var0 + 0x580) = 0;
    }
}
