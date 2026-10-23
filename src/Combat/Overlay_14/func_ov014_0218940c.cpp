#include <globaldefs.h>

struct Struct_ov014_021893e4_2;
struct Struct_ov014_021893e4;
extern "C" int* func_ov014_021893e4(struct Struct_ov014_021893e4_2* arg0, struct Struct_ov014_021893e4* arg1);

// USA: func_ov014_0218940c
extern "C" ARM int* func_ov014_0218940c(struct Struct_ov014_021893e4_2* arg0, int arg1, struct Struct_ov014_021893e4* arg2) {
    if (!arg2) return 0;
    int* var0 = func_ov014_021893e4(arg0, arg2);
    return var0 + arg1;
}
