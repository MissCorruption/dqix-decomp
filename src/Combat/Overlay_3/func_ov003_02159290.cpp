#include <globaldefs.h>

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02042058(char* dst, const char* src);

// USA: func_ov003_02159290
extern "C" ARM void func_ov003_02159290(void* self, unsigned short a, int b) {
    int v1 = func_020e0434((struct Container020e0310*)((char*)self + 0x64), (int)(short)a);
    func_02042058(*(char**)((char*)self + 0x7c), (const char*)v1);
    int v2 = func_020e0434((struct Container020e0310*)((char*)self + 0x64), (int)(short)b);
    func_02042058(*(char**)((char*)self + 0x7c), (const char*)v2);
}
