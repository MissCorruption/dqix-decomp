#include <globaldefs.h>

extern "C" void VectorizedInvertedMemcpy(void* src, void* dest, unsigned int len);
extern "C" void func_020c04e8(void* arg0);

// USA: func_020c0368
extern "C" ARM void func_020c0368(void* arg0, void* arg1, unsigned int arg2) {
    unsigned int var0 = *(unsigned int*)((char*)arg0 + 0x10) & 0x3f;
    *(unsigned long long*)((char*)arg0 + 0x10) += arg2;
    unsigned int var1 = 0x40 - var0;
    if (var1 > arg2) {
        if (arg2 == 0) return;
        VectorizedInvertedMemcpy(arg1, (char*)arg0 + 0x18 + var0, arg2);
        return;
    }
    VectorizedInvertedMemcpy(arg1, (char*)arg0 + 0x18 + var0, var1);
    func_020c04e8(arg0);
    arg2 -= var1;
    int var2 = arg2 >> 6;
    char* var3 = (char*)arg1 + var1;
    if (var2 > 0) {
        do {
            VectorizedInvertedMemcpy(var3, (char*)arg0 + 0x18, 0x40);
            var3 += 0x40;
            func_020c04e8(arg0);
            var2--;
        } while (var2 > 0);
    }
    unsigned int var4 = arg2 & 0x3f;
    if (var4 == 0) return;
    VectorizedInvertedMemcpy(var3, (char*)arg0 + 0x18, var4);
}
