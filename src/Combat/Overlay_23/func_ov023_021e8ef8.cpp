#include <globaldefs.h>
#if defined(jpn)
extern "C" void func_02042428(char*, int);
#endif

struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov023_021e8ef8
extern "C" ARM void func_ov023_021e8ef8(void* arg0) {
    struct Struct_02072a68_2* var0 = *(struct Struct_02072a68_2**)((char*)arg0 + 0x5f4);
    if (!var0) return;
    char* var1 = *(char**)((char*)arg0 + 0x5d8);
#if defined(jpn)
    func_02042428(var1, 12);
    var0 = *(struct Struct_02072a68_2**)((char*)arg0 + 0x5f4);
#endif
    void* var2 = func_02072a68(var0, 0x77);
    func_02042058(var1, (const char*)var2);
}
