#if defined(jpn)

#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov003_021704e8 func_ov003_0216fd3c
#endif

struct Struct_0205a254;
struct Struct_0205a254_2;
struct Struct_ov003_0216dee4;

extern "C" void func_ov003_021705d4(void* arg0, short* arg1, short* arg2);
extern "C" void func_ov003_0216dee4(struct Struct_ov003_0216dee4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254* arg0, int arg1);
extern "C" void func_ov003_0217063c(unsigned char* arg0, unsigned short* arg1, unsigned short* arg2);

#if defined(jpn)
extern "C" void func_0205b724(Struct_0205a254*, int);
extern "C" void func_020e27ec(Struct_0205a254*, int, short, short);
extern "C" void func_0205ae8c(void*);
#endif

// USA: func_ov003_021704e8
extern "C" ARM void func_ov003_021704e8(char* arg0) {
    Struct_0205a254* var0 = *(Struct_0205a254**)(arg0 + 0xa4);
    if (var0 == NULL) return;

    short var1, var2;
    func_ov003_021705d4(arg0, &var1, &var2);
    if (var1 != 0 && var2 != 0) {
#if defined(jpn)
        func_0205b724(var0, 2);
        Struct_0205a254_2* var3 = func_0205a3d0(var0, 2);
        if (var3 != NULL) *(unsigned char*)((char*)var3 + 0x15) |= 8;
        func_020e27ec(var0, 2, var1, var2);
        func_0205ae8c(arg0 + 0x68);
#else
        func_ov003_0216dee4((struct Struct_ov003_0216dee4*)(arg0 + 0x68), 8, var1, var2, -1, 1, 3);
#endif
    } else {
        Struct_0205a254_2* var4 = func_0205a3d0(var0, 2);
        if (var4 != NULL) {
            *(unsigned char*)((char*)var4 + 0x15) &= ~8;
        }
    }

    short var5, var6;
    func_ov003_0217063c((unsigned char*)arg0, (unsigned short*)&var5, (unsigned short*)&var6);
    if (var5 != 0 && var6 != 0) {
#if defined(jpn)
        func_0205b724(var0, 3);
        Struct_0205a254_2* var7 = func_0205a3d0(var0, 3);
        if (var7 != NULL) *(unsigned char*)((char*)var7 + 0x15) |= 8;
        func_020e27ec(var0, 3, var5, var6);
        func_0205ae8c(arg0 + 0x68);
#else
        func_ov003_0216dee4((struct Struct_ov003_0216dee4*)(arg0 + 0x68), 8, var5, var6, -1, 1, 3);
#endif
    } else {
        Struct_0205a254_2* var8 = func_0205a3d0(var0, 3);
        if (var8 != NULL) {
            *(unsigned char*)((char*)var8 + 0x15) &= ~8;
        }
    }
}
