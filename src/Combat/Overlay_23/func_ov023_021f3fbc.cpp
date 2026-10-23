#if defined(jpn)
enum {Enum_ov023_021f3fbc_3756=0xe28, Enum_ov023_021f3fbc_21896=0x5778};
#else
enum {Enum_ov023_021f3fbc_3756=0xeac, Enum_ov023_021f3fbc_21896=0x5588};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0209ca2c(void* arg0);
extern "C" void func_ov023_021d8af8(void* arg0);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void* func_02010828(GameState*);
extern "C" void func_ov017_021cc730(int arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" void func_02043124(char* arg0);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4*, unsigned int);
extern "C" void func_ov000_02160d80(void* arg0, int arg1);
struct Struct_02109bf4_4;
extern "C" void func_0209c678(struct Struct_02109bf4_4*, int);
extern "C" void func_020a1f4c(int);

extern char data_02109bf4;

// USA: func_ov023_021f3fbc
extern "C" ARM int func_ov023_021f3fbc(char* arg0) {
    if (func_0209ca2c(&data_02109bf4)) {
        return *(int*)(arg0 + Enum_ov023_021f3fbc_3756);
    }

    if (*(void**)(arg0 + Enum_ov023_021f3fbc_21896) != 0) {
        func_ov023_021d8af8(*(void**)(arg0 + Enum_ov023_021f3fbc_21896));
        *(void**)(arg0 + Enum_ov023_021f3fbc_21896) = 0;
    }

    if (func_0202b7d8((int*)func_0202ae18())) {
        GameState* var0 = GameState::GetInstance();
        unsigned char* var1 = (unsigned char*)func_02010828(var0);
        for (int var2 = 0; var2 < var1[0xf7c]; var2++) {
            unsigned char* var3 = var1 + var2;
            func_ov017_021cc730(var3[0xf78], 0, 0, 1);
        }
    }

    int var4 = func_020421a0();
    func_02043204((char*)var4);
    func_02043124((char*)var4);
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x20000);
    func_ov000_02160d80(arg0, 4);
    func_0209c678((struct Struct_02109bf4_4*)&data_02109bf4, 0);
    func_020a1f4c(1);
    return *(int*)(arg0 + Enum_ov023_021f3fbc_3756);
}
