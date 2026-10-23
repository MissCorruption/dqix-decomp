#include <globaldefs.h>

struct Struct_020cfaf4;
extern "C" void func_020cfaf4(struct Struct_020cfaf4* arg0, int arg1);

extern "C" void func_020cf9f4(void* arg0, int arg1);
extern "C" int _ll_mod(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);
extern "C" int _ll_sdiv(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);

// USA: func_020cfb74
extern "C" ARM void func_020cfb74(void* arg0, struct Struct_020cfaf4* arg1, long long arg2) {
    if (arg2 < 0) {
        arg2 = 0;
    } else if (arg2 > 0xbc19137fLL) {
        arg2 = 0xbc19137fLL;
    }
    unsigned int var0 = (unsigned int)arg2;
    unsigned int var1 = (unsigned int)(arg2 >> 32);
    int var2 = _ll_mod(var0, var1, 0x15180, 0);
    func_020cfaf4(arg1, var2);
    int var3 = _ll_sdiv(var0, var1, 0x15180, 0);
    func_020cf9f4(arg0, var3);
}
