#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov023_021f6f10
#define data_ov004_0216fffa data_ov004_02170752
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" int func_ov023_021f9bc8(char* arg0);
extern "C" void func_ov023_021fbdcc(void*, int);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

extern char data_ov004_0216fffa;

// USA: func_ov004_02168290
extern "C" ARM int func_ov004_02168290(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 7);
    if (var0 && func_ov024_021f6f10(var0) == 0x10) {
        void* var1 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xe);
        if (!var1) {
            return 0;
        }
        if (func_ov024_021f6f10(var1) != 7) {
            return 0;
        }
        int var2 = func_ov023_021f9bc8((char*)var1);
        short var3 = *(short*)(&data_ov004_0216fffa + var2 * 4);
        func_ov023_021fbdcc(var0, var3);
    }
    func_ov011_021848a0(arg0, 0x68);
    return 0;
}
