#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" int func_020ab7a8(void* obj, int flag);
extern "C" void func_0200fb94(char* obj, unsigned char value);
extern "C" void* func_020d6c00(void);
struct FlagWord020466f4;
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);
extern "C" void func_ov011_021848a0(void* obj, int val);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);
extern "C" void func_02043124(char* obj);
extern "C" void* func_ov004_0216ae9c(void* a, int id);
extern "C" void func_ov023_021f8960(char* base, short a, unsigned short b);

struct FieldGroup02171034 {
#if defined(jpn)
#else
    unsigned char pad0[2];
#endif
    unsigned char flag2;
#if defined(jpn)
    unsigned char pad1[4];
#else
#endif
    unsigned char state3;
#if defined(jpn)
    unsigned char pad4[6];
#else
    unsigned char pad4[0xc];
#endif
    unsigned char* ptr10;
};
extern struct FieldGroup02171034 data_ov004_02171034;

// USA: func_ov004_0216e258
extern "C" ARM int func_ov004_0216e258(void* a) {
    GameState* battle = GameState::GetInstance();
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    int state = func_020ab7a8((void*)data_ov004_02171034.ptr10, 0);
    int ret = 1;
    if (state == 5) {
        func_0200fb94((char*)battle, 5);
        func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0x80);
        data_ov004_02171034.flag2 = 0;
        data_ov004_02171034.ptr10[1] = 0;
        func_ov011_021848a0(a, 0x3e7);
        ret = 0;
    } else if (state == 1) {
        char* g = (char*)func_020421a0();
        func_02043204(g);
        func_02043124(g);
        func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0x80);
        void* node = func_ov004_0216ae9c(a, 0xd4);
        func_ov023_021f8960((char*)node, 0, 7);
        data_ov004_02171034.ptr10[1] = 0;
        func_ov011_021848a0(a, 0x1f4);
        ret = 0;
    } else if (state == 2) {
        char* g = (char*)func_020421a0();
        func_02043204(g);
        func_02043124(g);
        func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0x80);
        void* node = func_ov004_0216ae9c(a, 0xd4);
        func_ov023_021f8960((char*)node, 0, 7);
        data_ov004_02171034.ptr10[1] = 0;
        func_ov011_021848a0(a, 0x1f5);
        ret = 0;
    } else if (state == 3) {
        char* g = (char*)func_020421a0();
        func_02043204(g);
        func_02043124(g);
        data_ov004_02171034.state3 = 4;
        data_ov004_02171034.ptr10[1] = 0;
        func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0x80);
        func_ov011_021848a0(a, 0x190);
        ret = 0;
    }
    BackgroundLoader::RemoveLockGlobal();
    return ret;
}
