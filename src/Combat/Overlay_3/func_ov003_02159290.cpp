#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov003_02159290
extern "C" ARM void func_ov003_02159290(void* arg0, unsigned short arg1, int arg2) {
    int var0 = func_020e0434((struct Struct_0201099c_3*)((char*)arg0 + 0x64), (int)(short)arg1);
    func_02042058(*(char**)((char*)arg0 + 0x7c), (const char*)var0);
    int var1 = func_020e0434((struct Struct_0201099c_3*)((char*)arg0 + 0x64), (int)(short)arg2);
    func_02042058(*(char**)((char*)arg0 + 0x7c), (const char*)var1);
}
