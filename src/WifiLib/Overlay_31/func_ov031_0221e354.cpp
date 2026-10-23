#include <globaldefs.h>

extern "C" void* func_ov031_0221c49c(int);
extern "C" void func_ov031_0221c4ac(void*);
extern "C" void func_ov031_0221e3d0(int, signed char*, int, const signed char*, int);
extern "C" void func_ov031_0221e404(signed char*, unsigned char*, int);
extern "C" void func_ov031_0221e428(unsigned char*, int, unsigned char*);

// USA: func_ov031_0221e354
extern "C" THUMB int func_ov031_0221e354(unsigned char* arg0, int arg1, const signed char* arg2, int arg3) {
    signed char* var0 = (signed char*)func_ov031_0221c49c(arg1 / 2);
    if (var0 == 0) return -1;
    unsigned char* var1 = (unsigned char*)func_ov031_0221c49c(arg1);
    if (var1 == 0) {
        func_ov031_0221c4ac(var0);
        return -1;
    }
    int var2 = 0;
    do {
        func_ov031_0221e3d0(var2, var0, arg1, arg2, arg3);
        func_ov031_0221e404(var0, arg0, arg1);
        func_ov031_0221e428(arg0, arg1, var1);
        var2++;
    } while (var2 < 2);
    func_ov031_0221c4ac(var0);
    func_ov031_0221c4ac(var1);
    return 0;
}
