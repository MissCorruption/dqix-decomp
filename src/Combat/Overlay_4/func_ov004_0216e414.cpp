#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020aba5c(int flag);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);
extern "C" void func_02043124(char* obj);
extern "C" void* func_ov004_0216ae9c(void* a, int id);
extern "C" void func_ov023_021f8960(char* base, short a, unsigned short b);
extern "C" void func_ov011_021848a0(void* obj, int val);
extern "C" void func_02012028(void* obj, unsigned char value);

// USA: func_ov004_0216e414
extern "C" ARM int func_ov004_0216e414(void* obj) {
    if (func_020aba5c(1) == 0) {
        char* g = (char*)func_020421a0();
        func_02043204(g);
        func_02043124(g);
        void* node = func_ov004_0216ae9c(obj, 0xd4);
        func_ov023_021f8960((char*)node, 0, 7);
        func_ov011_021848a0(obj, 0x1f5);
    } else {
        func_02012028((void*)GameState::GetInstance(), 1);
        func_ov011_021848a0(obj, 0x3e7);
    }
    return 0;
}
