#include <globaldefs.h>
#include "GameState/GameState.h"

struct Container020e0310;

extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" int func_020100a8(GameState* battleStruct);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);

extern short data_ov000_021834bc[];

// USA: func_ov000_021775a4
extern "C" ARM void func_ov000_021775a4(void* base, char* dst) {
    if (dst == NULL) return;

#if defined(jpn)
    signed char cursor = *(signed char*)((char*)base + 0x1f00 + 0xa2);
#else
    signed char cursor = *(signed char*)((char*)base + 0x1d00 + 0x6a);
#endif
    int n = 0;

    if (func_ov000_0217542c(base)) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    void* p = func_0202ae18();
    int count = 3;
    if (func_0202b7d8((int*)p)) {
        if (func_020100a8(GameState::GetInstance()) == 0) count = 4;
    }

    struct Container020e0310* c = (struct Container020e0310*)((char*)base + 0xb8);
    for (int i = 0; i < count; i++) {
        int name = func_020e0434(c, data_ov000_021834bc[i]);
        func_02041b70(dst, n, (const char*)name);
        if (i != count - 1) {
            int sep = func_020e0434(c, 0);
            func_02042058(dst, (const char*)sep);
        }
        n++;
    }
}
