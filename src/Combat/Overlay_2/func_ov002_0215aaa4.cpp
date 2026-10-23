#include <globaldefs.h>

#if defined(jpn)
#define REGION_VALUE(j, u) (j)
#else
#define REGION_VALUE(j, u) (u)
#endif

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_ov002_02154bcc(int arg0, int arg1, void* arg2, int arg3, unsigned char arg4, unsigned char arg5);

// USA: func_ov002_0215aaa4
// KEEP-NAME
extern "C" ARM void func_ov002_0215aaa4(char* arg0) {
    struct Struct_0205d0e0* var0 = func_0205d81c((struct Struct_0205d81c*)(arg0 + REGION_VALUE(0xe20, 0xec8)), REGION_VALUE(0x24, 0x21));
    if (var0) {
        short var1 = *(short*)((char*)var0 + 0xac);
        short var2 = var1 * 8;
        short var3 = var2 + 6;
        short var4 = *(short*)((char*)var0 + 0xae);
        short var5 = var4 * 8;
        short var6[4];
        unsigned char var7;
        var6[0] = var5 + 0x1a;
        var6[1] = var5 + 0x32;
        var6[2] = var5 + 0x4a;
        var6[3] = var5 + 0x62;
        for (var7 = 0; var7 < 4; var7++) {
            void* var8 = *(void**)(arg0 + REGION_VALUE(0x19c0, 0x1a68));
            func_ov002_02154bcc(var3, var6[var7], var8, (unsigned short)(var7 + 7), 0xff, 0xff);
        }
    }
}
