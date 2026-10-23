#include <globaldefs.h>

extern "C" void func_020d21f8(void);
extern "C" void func_020d220c(void);
void CleanCacheRange(const void* addr, unsigned int size);

// USA: func_020d2b34
extern "C" ARM void func_020d2b34(char* arg0, int arg1, char* arg2) {
    func_020d21f8();
    int var0 = (int)arg0 + arg1 * 8;
    char* var1 = *(char**)(var0 + 0x18);
    if (var1 == 0) {
        goto tail;
    }
    if (arg2 == var1) {
        func_020d220c();
        return;
    }
    {
        int var2 = (int)(arg0 + 0x18) + arg1 * 8;
        char* var3 = *(char**)(var1 + 0x18);
        if (var2 == (int)var3) {
            char* var4 = *(char**)(var0 + 0x1c);
            *(char**)(var1 + 0x18) = var4;
            char* var5 = *(char**)(var0 + 0x18);
            CleanCacheRange(var5, 0x3c);
            goto tail;
        } else {
            char* var6 = var3;
            if (var6 != 0) {
                char* var7;
                do {
                    var7 = *(char**)(var6 + 0x4);
                    if (var2 == (int)var7) break;
                    var6 = var7;
                } while (var7 != 0);
            }
            char* var8 = *(char**)((arg0 + arg1 * 8) + 0x1c);
            *(char**)(var6 + 0x4) = var8;
            CleanCacheRange(var6, 8);
        }
    }
tail:
    {
        char* var9 = (arg0 + 0x18) + arg1 * 8;
        char* var10 = *(char**)(arg2 + 0x18);
        *(char**)(arg2 + 0x18) = var9;
        *(char**)((arg0 + arg1 * 8) + 0x1c) = var10;
        *(char**)((arg0 + arg1 * 8) + 0x18) = arg2;
        func_020d220c();
        CleanCacheRange(arg0, 0x3c);
        CleanCacheRange(arg2, 0x3c);
    }
}
