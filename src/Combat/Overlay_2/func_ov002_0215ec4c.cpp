#include <globaldefs.h>

#if defined(jpn)
#define func_ov002_0215ece4 func_ov002_0215fe54
#endif

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);

struct Struct_0205c508;
extern "C" void func_0205c508(struct Struct_0205c508* arg0, int* arg1, int* arg2);

extern "C" void func_ov002_0215ece4(void* arg0, char* arg1, int arg2, int arg3, int arg4);

// USA: func_ov002_0215ec4c
extern "C" ARM void func_ov002_0215ec4c(void* arg0, char* arg1, int arg2) {
    int var0;
    int var1;
    if (arg1 == 0) {
        return;
    }
    int var2 = *(short*)((char*)arg0 + RG(0x1bfa, 0x1ac2)) % 8;
    if (arg2) {
        func_02041c08(arg1, var2, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var2);
    void* var3 = (void*)((char*)arg0 + RG(0x2c8 + 0xc00, 0xe20));
    func_0205c508((struct Struct_0205c508*)((unsigned char*)var3 + 0x54), &var0, &var1);
    int var4 = *(signed char*)((char*)arg0 + RG(0x1c20, 0x1ae8));
    func_ov002_0215ece4(arg0, arg1, var4, var0, var1);
}
