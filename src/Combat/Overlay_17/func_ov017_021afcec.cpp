#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Resource/Brightness.h"

struct GameResources;
extern "C" int func_020421a0(void);
extern "C" void* func_020d6c00(void);
extern "C" void func_ov017_021b6c78(void);
struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);
extern "C" void func_ov017_021afb8c(char* arg0, char* arg1);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" void func_02042764(char* arg0, void* arg1, int arg2);
extern "C" void func_ov017_0218b5c0(int arg0, int arg1);
extern "C" void func_020daf9c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_0219aa5c(unsigned char* arg0);
extern "C" int func_ov017_0218d268(void* arg0);
struct Struct_020966cc;
extern "C" void func_020966cc(struct Struct_020966cc* arg0);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);

// USA: func_ov017_021afcec
extern "C" ARM int func_ov017_021afcec(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021afcec_644=0x214};
#else
 enum {Enum_ov017_021afcec_644=0x284};
#endif
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    unsigned char* var2 = (unsigned char*)func_020421a0();
    unsigned int* var3 = (unsigned int*)func_020d6c00();

    if (arg0[9] == 2) {
        func_ov017_021b6c78();
    }
    if (arg0[Enum_ov017_021afcec_644] != 0) {
        GameObject* var4 = var0->GetUnknownGameObject();
        if (var4 != NULL) {
            func_020397cc((struct Struct_02018300_3*)var4, 0);
        }
    }
    if (arg0[9] != 2) {
        func_ov017_021afb8c((char*)arg0, (char*)arg0 + 0xe);
#if defined(jpn)
        strcpy(var1->unknown_435c_[arg0[0xc]], (char*)arg0 + 0xe);

#else
        char* var5 = var1->unknown_435c_[arg0[0xc]];
        char var6[0x30];
        __clear(var6, 0x30);
        func_02042764((char*)arg0 + 0xe, var6, 1);
        strcpy(var5, var6);

#endif
    }
    SetFlags04(var1, 0x40);
    func_ov017_0218b5c0(0, -1);
    func_020daf9c(1, 1, 0, 1);
#if defined(jpn)
    var2[0x17ff] |= 4;
#else
    var2[0x1000 + 0x9d0] = 1;
#endif

    func_ov017_0219aa5c((unsigned char*)var1);
    func_020966cc((struct Struct_020966cc*)func_ov017_0218d268(var1));
    func_020466e4(var3, 0x40000);
    return 1;
}
