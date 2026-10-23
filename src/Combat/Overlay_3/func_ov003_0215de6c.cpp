#include <globaldefs.h>
#if defined(jpn)
enum { kRegion3bb = 0x3d3 };
enum { kRegion3cc = 0x3e4 };
#else
enum { kRegion3bb = 0x3bb };
enum { kRegion3cc = 0x3cc };
#endif

#if defined(jpn)
struct Container020e0310;
extern "C" int func_020e0434(Container020e0310*, int);
extern "C" void func_020474a8(int, int, void*, void*);
#endif
#include "GameState/GameState.h"

struct StoreStruct;
extern "C" void func_020465c0(struct StoreStruct* base, int index, int value);
extern "C" void func_020465d8(unsigned char* base, int index, unsigned char value);
extern "C" void func_020465f0(unsigned char* base, int index, unsigned char value);
extern "C" int func_020421a0();
extern "C" void func_02046380(void* global);
extern "C" int func_020e51cc(int value);
extern "C" void func_02046608(int a, int b, void* fmt, void* dst, int p4, int p5, int p6);

// USA: func_ov003_0215de6c
extern "C" ARM void func_ov003_0215de6c(char* base, void* buf) {
    GameState* battleStruct = GameState::GetInstance();
    int field = func_020421a0();
    void* ptr = func_02010828(battleStruct);

    unsigned char flag = *(unsigned char*)(base + kRegion3bb);
    int value = *(int*)((char*)ptr + 0xf6c);
    if (flag == 2) {
        value -= *(int*)(base + kRegion3cc);
    }

    func_02046380((void*)field);

    func_020465c0((struct StoreStruct*)field, 0, value);
    func_020465f0((unsigned char*)field, 0, 7);
    func_020465d8((unsigned char*)field, 0, 1);

#if defined(jpn)
    int fmt = func_020e0434((Container020e0310*)(base + 0x7c), 0xa);
    func_020474a8(field, 8, (void*)fmt, buf);
#else
    int fmt = func_020e51cc(0x3f1);
    func_02046608(field, 8, (void*)fmt, buf, 0x100, 0, 0);
#endif
}
