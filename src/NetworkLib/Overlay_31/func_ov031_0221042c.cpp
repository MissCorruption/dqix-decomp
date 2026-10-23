#include <globaldefs.h>

extern void* data_ov031_0224e588;
extern "C" void func_ov031_02210358(int arg0, int arg1);
extern "C" ARM int func_ov031_02207360(int arg0, int arg1, int arg2);

// USA: func_ov031_0221042c
extern "C" ARM int func_ov031_0221042c(unsigned char* arg0) {
    int var0 = 0;
    unsigned int var1;
    if (data_ov031_0224e588 == NULL) {
        return var0 - 0x1c;
    }
    unsigned int var2 = *(unsigned int*)arg0;
    if (var2 > 0x414) {
        func_ov031_02210358(6, -0x32);
        return ~0x22;
    }
    var1 = var0;
    if (var1 < var2) {
        do {
            int var3 = *(int*)((char*)data_ov031_0224e588 + 0x1b8);
            var0 = func_ov031_02207360(var3, (int)arg0, var2 - var1);
            if (var0 > 0) {
                var1 += var0;
                arg0 += var0;
                if (var1 >= var2) {
                    return var1;
                }
            } else if (var0 < 0) {
                func_ov031_02210358(6, -0x32);
                return var0;
            }
        } while (var1 < var2);
    }
    return var0;
}
