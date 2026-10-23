#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x8b8
#else
#define REGION_OFFSET_0 0x950
#endif


extern "C" void* func_ov000_02153710(void*);
extern "C" int func_ov000_02159dbc(void*, int);

// USA: func_ov000_02159e60
extern "C" ARM signed char func_ov000_02159e60(void* arg0, int arg1) {
    int var0 = (arg1 >= 0 && arg1 <= 3);
    int var1;
    if (var0) {
        char* var2 = (char*)func_ov000_02153710(arg0);
        int var3 = *(int*)(var2 + REGION_OFFSET_0);
        var1 = *(unsigned short*)(var2 + var3 * 2 + 0x16c);
    } else {
        var1 = func_ov000_02159dbc(arg0, arg1);
    }
    return (signed char)var1;
}
