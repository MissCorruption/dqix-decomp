#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x6f8
#define REGION_FIELD_1 0x114
#define REGION_FIELD_2 0x6ac
#else
#define REGION_FIELD_0 0x77c
#define REGION_FIELD_1 0x118
#define REGION_FIELD_2 0x730
#endif


struct Struct_02074bd0;
struct Struct_02074bf4;
extern "C" void func_02074bd0(struct Struct_02074bd0* arg0);
extern "C" void func_02074bf4(struct Struct_02074bf4* arg0);

// USA: func_ov023_021dcd18
#pragma optimize_for_size off
extern "C" ARM void func_ov023_021dcd18(void* arg0) {
    signed char var0 = *(signed char*)((char*)arg0 + REGION_FIELD_0);
    if (var0 == 1) {
        func_02074bf4((struct Struct_02074bf4*)((char*)arg0 + REGION_FIELD_1));
        unsigned int* var1 = (unsigned int*)0x4001000;
        *var1 = (*var1 & ~0x1f00) | (*(unsigned int*)((char*)arg0 + REGION_FIELD_2) << 8);
    } else {
        func_02074bd0((struct Struct_02074bd0*)((char*)arg0 + REGION_FIELD_1));
        unsigned int* var2 = (unsigned int*)0x4000000;
        *var2 = (*var2 & ~0x1f00) | (*(unsigned int*)((char*)arg0 + REGION_FIELD_2) << 8);
    }
}
