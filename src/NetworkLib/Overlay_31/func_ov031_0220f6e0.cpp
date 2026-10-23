#include <globaldefs.h>

extern void* data_ov031_0224e580;
extern "C" int func_020c7ea0(void* arg0, unsigned int* arg1, int arg2);


// USA: func_ov031_0220f6e0
extern "C" ARM void func_ov031_0220f6e0(void) {
    unsigned int var0;
    func_020c7ea0(data_ov031_0224e580, &var0, 0);
    void* var1 = *(void**)((char*)data_ov031_0224e580 + 0x24);
    if (var1 == NULL) return;
    *(int*)((char*)var1 + 0x1c) = 1;
    *(int*)((char*)data_ov031_0224e580 + 0x24) = 0;
}
