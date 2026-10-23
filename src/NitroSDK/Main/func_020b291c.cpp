#include <globaldefs.h>

// USA: func_020b291c
extern "C" ARM void func_020b291c(void* arg0) {
    char* var0 = (char*)arg0 + *(unsigned short*)((char*)arg0 + 0xc);
    unsigned short var1 = *(unsigned short*)((char*)arg0 + 0xe);
    int var2 = 0;

    if ((int)var1 <= 0)
        return;

    do {
        unsigned int var3 = *(unsigned int*)var0;
        switch (var3) {
        case 0x46494e46: {
            int* var4 = (int*)(var0 + 0x10);
            *var4 = *var4 + (int)arg0;
            int* var5 = (int*)(var0 + 0x14);
            if (*var5 != 0)
                *var5 = *var5 + (int)arg0;
            int* var6 = (int*)(var0 + 0x18);
            if (*var6 != 0)
                *var6 = *var6 + (int)arg0;
            break;
        }
        case 0x43574448: {
            int* var7 = (int*)(var0 + 0xc);
            if (*var7 != 0)
                *var7 = *var7 + (int)arg0;
            break;
        }
        case 0x434d4150: {
            int* var8 = (int*)(var0 + 0x10);
            if (*var8 != 0)
                *var8 = *var8 + (int)arg0;
            break;
        }
        case 0x43474c50:
            break;
        }

        var2 = var2 + 1;
        var0 = var0 + *(int*)(var0 + 4);
        var1 = *(unsigned short*)((char*)arg0 + 0xe);
    } while (var2 < var1);
}
