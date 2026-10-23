#include <globaldefs.h>

extern "C" int func_ov031_0221e2e4(int, void*, void*, int, void*);
extern int data_ov031_0224e9a0;

// USA: func_ov031_0221e2bc
extern "C" THUMB unsigned char func_ov031_0221e2bc(void* arg0, void* arg1) {
    int var0 = func_ov031_0221e2e4(-1, arg0, arg1, 0, &data_ov031_0224e9a0);
    return (unsigned char)(var0 ^ 0xffffffffu);
}
