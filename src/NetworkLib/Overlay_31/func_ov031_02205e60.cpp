#include <globaldefs.h>

struct Struct_ov031_02205a38;
struct Struct_ov031_0220527c;
struct Struct_ov031_02205eac;
extern "C" void* func_ov031_02205134(void*, void*, int);
extern "C" int func_ov031_0220527c(Struct_ov031_0220527c*, void*);
extern "C" int func_ov031_02205eac(Struct_ov031_02205eac*);

// USA: func_ov031_02205e60
extern "C" ARM int func_ov031_02205e60(Struct_ov031_02205a38* arg0) {
    char* var0 = *(char**)((char*)arg0 + 0x64);
    if (*(int*)(var0 + 0xf8) < *(unsigned short*)(var0 + 0xfc)) return 0;
    void* var1 = func_ov031_02205134((void*)func_ov031_02205eac, arg0, 0);
    if (var1 == NULL) return -33;
    return func_ov031_0220527c((Struct_ov031_0220527c*)arg0, var1);
}
