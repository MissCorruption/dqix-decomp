#if defined(jpn)
enum {regionalOffset0=0xe28, regionalOffset1=0x5778};
#else
enum {regionalOffset0=0xeac, regionalOffset1=0x5588};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0209ca2c(void* obj);
extern "C" void func_ov023_021d8af8(void* obj);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" void* func_02010828(GameState*);
extern "C" void func_ov017_021cc730(int id, unsigned char arg1, unsigned char arg2, unsigned char arg3);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);
extern "C" void func_02043124(char* obj);
extern "C" void* func_020d6c00(void);
struct FlagWord020466f4;
extern "C" void func_020466f4(struct FlagWord020466f4*, unsigned int);
extern "C" void func_ov000_02160d80(void* p, int val);
struct Actor0209c678;
extern "C" void func_0209c678(struct Actor0209c678*, int);
extern "C" void func_020a1f4c(int);

extern char data_02109bf4;

// USA: func_ov023_021f3fbc
extern "C" ARM int func_ov023_021f3fbc(char* obj) {
    if (func_0209ca2c(&data_02109bf4)) {
        return *(int*)(obj + regionalOffset0);
    }

    if (*(void**)(obj + regionalOffset1) != 0) {
        func_ov023_021d8af8(*(void**)(obj + regionalOffset1));
        *(void**)(obj + regionalOffset1) = 0;
    }

    if (func_0202b7d8((int*)func_0202ae18())) {
        GameState* battleStruct = GameState::GetInstance();
        unsigned char* list = (unsigned char*)func_02010828(battleStruct);
        for (int i = 0; i < list[0xf7c]; i++) {
            unsigned char* p = list + i;
            func_ov017_021cc730(p[0xf78], 0, 0, 1);
        }
    }

    int g = func_020421a0();
    func_02043204((char*)g);
    func_02043124((char*)g);
    func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0x20000);
    func_ov000_02160d80(obj, 4);
    func_0209c678((struct Actor0209c678*)&data_02109bf4, 0);
    func_020a1f4c(1);
    return *(int*)(obj + regionalOffset0);
}
