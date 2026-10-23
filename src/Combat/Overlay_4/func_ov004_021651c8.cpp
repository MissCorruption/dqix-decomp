#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov023_021f6f10
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov024_021f6f10
#endif
extern char* data_ov004_02171010;

// USA: func_ov004_021651c8
extern "C" ARM int func_ov004_021651c8(void* arg0) {
#if defined(jpn)
 enum { Enum_ov004_021651c8_2292 = 0x9f4, Enum_ov004_021651c8_2300 = 0x9fc };
#else
 enum { Enum_ov004_021651c8_2292 = 0x8f4, Enum_ov004_021651c8_2300 = 0x8fc };
#endif
    if (*(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_021651c8_2292) == 0) return 0;
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x1f5);
    if (var0 == NULL) return 0;
    if (NODE_KIND_CALL(var0) != 1) return 0;

    unsigned char var1 = *(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_021651c8_2300);
    if (var1 == 0) {
        *((unsigned char*)var0 + 0xc) |= 0x8;
    } else if (var1 == 1) {
        *((unsigned char*)var0 + 0xc) &= ~0x8;
    }

    void* var2 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x1f6);
    if (var2 == NULL) return 0;
    if (NODE_KIND_CALL(var2) != 1) return 0;

    unsigned char var3 = *(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_021651c8_2300);
    if (var3 == 0) {
        *((unsigned char*)var2 + 0xc) &= ~0x8;
    } else if (var3 == 1) {
        *((unsigned char*)var2 + 0xc) |= 0x8;
    }
    return 0;
}
