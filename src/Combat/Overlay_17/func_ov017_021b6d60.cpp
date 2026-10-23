#if defined(jpn)
enum { RegionOffset154 = 0x148, RegionOffset2f = 0xb, RegionOffset35c = 0x13c };
#else
enum { RegionOffset154 = 0x154, RegionOffset2f = 0x2f, RegionOffset35c = 0x35c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Field150Holder02052e2c;

struct Entry021b6d60 {
    unsigned char b0;
    unsigned char pad[RegionOffset2f];
};

extern "C" void func_02086404(void* p);
extern "C" int func_02053c6c(unsigned char* obj);
extern "C" short* func_02052e2c(struct Field150Holder02052e2c* obj);
extern "C" void func_020830cc(void* field150, void* b);
extern "C" int func_0200fb8c(int* obj);
extern "C" void func_02082828(void* field150);
extern "C" void func_020545ac(short* obj);
extern "C" void func_ov017_02190264(int val, int a);
extern "C" void func_ov017_02191108(int, int, int, int, int);
extern "C" void func_ov017_02191234(int a);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" int func_0202c508(void* obj);
extern "C" void func_ov017_021cc68c(int a);

// USA: func_ov017_021b6d60
extern "C" ARM int func_ov017_021b6d60(int a, void* b) {
    func_02086404(b);
    GameState* bs = GameState::GetInstance();
    GameObject* c = func_0200ff1c(bs, a);
    if (c == NULL) {
        return 0;
    }
    void* field150 = (void*)func_02053c6c((unsigned char*)c);
    short* p488 = func_02052e2c((struct Field150Holder02052e2c*)c);
    if (field150 == NULL) {
        return 0;
    }
    if (p488 == NULL) {
        return 0;
    }
    func_020830cc(field150, b);
    int val = func_0200fb8c((int*)bs);
    func_02082828(field150);
    short* f154 = *(short**)((char*)c + RegionOffset154);
    if (f154 != NULL) {
        func_020545ac(f154);
    }
    func_ov017_02190264(val, a);
    func_ov017_02191108(val, 1, 1, 1, 1);
    func_ov017_02191234(val);
    struct Entry021b6d60* arr = (struct Entry021b6d60*)(((char*)val + RegionOffset35c) + 0x4000);
    arr += a;
    arr->b0 = 0;
    void* search = func_0202ae18();
    if (func_0202b7d8((int*)search)) {
        if (func_0202c508(search)) {
            func_ov017_021cc68c(a);
        }
    }
    return b != NULL;
}
