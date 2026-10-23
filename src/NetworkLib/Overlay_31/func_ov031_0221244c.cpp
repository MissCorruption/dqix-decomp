#include <globaldefs.h>

extern void* data_ov031_0224e688;
extern long long data_ov031_0224e68c;
extern long long data_ov031_0224e694;

extern "C" int func_020cf25c(void* arg0, void* arg1);
extern "C" long long func_020cf990(int arg0, unsigned char* arg1);
struct Struct_020cfaf4;
extern "C" void func_020cfb74(void* arg0, struct Struct_020cfaf4* arg1, long long arg2);

// USA: func_ov031_0221244c
extern "C" ARM int func_ov031_0221244c(void* arg0, void* arg1) {
    if (data_ov031_0224e688 == NULL) return 0;
    if (func_020cf25c(arg0, arg1) != 0) return 0;
    long long var0 = func_020cf990((int)arg0, (unsigned char*)arg1);
    if (var0 == -1LL) return 0;
    if (var0 < data_ov031_0224e68c) {
        var0 += 0xbc191380LL;
    }
    long long var1 = var0 - data_ov031_0224e694;
    if (var1 < 0LL || var1 > 0xbc19137fLL) return 0;
    func_020cfb74(arg0, (struct Struct_020cfaf4*)arg1, var1);
    return 1;
}
