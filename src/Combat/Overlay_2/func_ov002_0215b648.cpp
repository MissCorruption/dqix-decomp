#include <globaldefs.h>

struct Struct_0205d81c;
struct Struct_0205d0e0;

extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_ov002_0215b9a4(unsigned char* arg0, int arg1, int arg2);
#if defined(jpn)
#define data_ov002_0216c984 data_ov002_0216cfe0
extern const unsigned char data_ov002_0216cfe0[6];
#else
extern const unsigned char data_ov002_0216c984[6];
#endif

// USA: func_ov002_0215b648
#if defined(jpn)
extern "C" ARM void func_ov002_0215b648(unsigned char* arg0) {
    if (arg0[0x1b88] == 0) {
        return;
    }
    int var0;
    for (var0 = 0; var0 < 6; var0++) {
        unsigned char var1 = data_ov002_0216c984[var0];
        struct Struct_0205d0e0* var2 = func_0205d81c((struct Struct_0205d81c*)(arg0 + 0xe20), var1);
        if (var2 == 0) {
            continue;
        }
        unsigned short var3 = *(unsigned short*)((char*)var2 + 0xc2);
        int var4 = (var3 != 0) ? 1 : 0;
        func_ov002_0215b9a4(arg0, var1, var4);
    }
}
#else
extern "C" ARM void func_ov002_0215b648(unsigned char* arg0) {
    if (arg0[0x1cc4] == 0) {
        return;
    }
    struct Struct_0205d81c* var5 = (struct Struct_0205d81c*)(arg0 + 0x2c8 + 0xc00);
    int var6;
    for (var6 = 0; var6 < 6; var6++) {
        unsigned char var7 = data_ov002_0216c984[var6];
        struct Struct_0205d0e0* var8 = func_0205d81c(var5, var7);
        if (var8 == 0) {
            continue;
        }
        unsigned short var9 = *(unsigned short*)((char*)var8 + 0xc2);
        int var10 = (var9 != 0) ? 1 : 0;
        func_ov002_0215b9a4(arg0, var7, var10);
    }
}
#endif
