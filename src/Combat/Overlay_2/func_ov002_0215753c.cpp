#include <globaldefs.h>

extern "C" void func_ov002_0215a658(void* arg0, int arg1);
extern "C" void func_ov002_0215a7b4(void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov002_0215753c
#if defined(jpn)
extern "C" ARM int func_ov002_0215753c(unsigned char* arg0) {
    int var0 = -1;

    if (*(short*)(arg0 + 0x1ada) != 0) {
        goto end;
    }

    if (*(short*)(arg0 + 0x1ab8) >= 0) {
        signed char var1 = *(signed char*)(arg0 + 0x1ae8);
        var0 = 0x238e;
        func_ov002_0215a658(arg0, var1);
    }

    if (*(short*)(arg0 + 0x1aea) > 0) {
        if (*(short*)(arg0 + 0x1ab2) == 2) {
            signed char var2 = *(signed char*)(arg0 + 0x1ae8);
            short var3 = *(short*)(arg0 + 0x1aea);
            short var4 = *(short*)(arg0 + 0x1ab0);
            var0 = 0x2366;
            func_ov002_0215a7b4(arg0, var2, var3, var4, 0);
        }
    }

    if (*(int*)(arg0 + 0x1a84) == 0x27) {
        var0 = 0x125d;
    }

end:
    return var0;
}
#else
extern "C" ARM int func_ov002_0215753c(unsigned char* arg0) {
    int var5 = -1;

    if (*(short*)(arg0 + 0x1c00 + 0x12) != 0) {
        goto end;
    }

    if (*(short*)(arg0 + 0x1b00 + 0xf0) >= 0) {
        signed char var6 = *(signed char*)(arg0 + 0x1c00 + 0x20);
        var5 = 0x238e;
        func_ov002_0215a658(arg0, var6);
    }

    if (*(short*)(arg0 + 0x1c00 + 0x22) > 0) {
        if (*(short*)(arg0 + 0x1b00 + 0xea) == 2) {
            signed char var7 = *(signed char*)(arg0 + 0x1c00 + 0x20);
            short var8 = *(short*)(arg0 + 0x1c00 + 0x22);
            short var9 = *(short*)(arg0 + 0x1b00 + 0xe8);
            var5 = 0x2366;
            func_ov002_0215a7b4(arg0, var7, var8, var9, 0);
        }
    }

    if (*(int*)(arg0 + 0x1000 + 0xbbc) == 0x24) {
        var5 = 0x125d;
    }

end:
    return var5;
}
#endif
