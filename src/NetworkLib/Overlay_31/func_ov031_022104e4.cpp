#include <globaldefs.h>

extern void* data_ov031_0224e588;
extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);
extern "C" int func_ov031_0220728c(int arg0, int arg1, int arg2);
extern "C" void func_ov031_02210358(int arg0, int arg1);

// USA: func_ov031_022104e4
extern "C" ARM int func_ov031_022104e4(unsigned char* arg0) {
    int var0 = 0;
    unsigned int var1 = var0;
    unsigned char* var2 = arg0;
    unsigned char* var3 = arg0;
    if (data_ov031_0224e588 == NULL) {
        return var0 - 0x1c;
    }
    VectorizedMemset(arg0, 0, 0x414);
    do {
        int var4 = *(int*)((char*)data_ov031_0224e588 + 0x1b8);
        var0 = func_ov031_0220728c(var4, (int)var3, 4 - var1);
        if (var0 > 0) {
            var1 += var0;
            var3 += var0;
        } else {
            if ((int)var1 > 0 || var0 != 0) {
                func_ov031_02210358(6, -0x32);
            }
            return var1;
        }
    } while (var1 < 4);
    unsigned int var5 = *(unsigned int*)var2;
    if (var5 > 0x414) {
        func_ov031_02210358(6, -0x32);
        return ~0x22;
    }
    if (var1 < var5) {
        do {
            int var6 = *(int*)((char*)data_ov031_0224e588 + 0x1b8);
            var0 = func_ov031_0220728c(var6, (int)var3, var5 - var1);
            if (var0 > 0) {
                var1 += var0;
                var3 += var0;
            } else {
                func_ov031_02210358(6, -0x32);
                return var1;
            }
        } while (var1 < var5);
    }
    if (var1 < 0xc || *(unsigned int*)(var2 + 4) != 0x44535359) {
        func_ov031_02210358(6, -0x28);
        return 0;
    }
    return var1;
}
