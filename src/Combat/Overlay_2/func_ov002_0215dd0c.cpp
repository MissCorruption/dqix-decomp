#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov002_0215dd0c
extern "C" ARM void func_ov002_0215dd0c(unsigned char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    int var0 = *(short*)(arg0 + RG(0x1bf2, 0x1aba));
    short var1 = 0x79f;

    if (arg2) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    for (int var2 = 0; var2 < 2; var2++) {
        int var3 = func_020e0434((Struct_0201099c_3*)(arg0 + RG(0x20, 0x8)), var1++);
        func_02041b70(arg1, var2, (const char*)var3);
        if (var2 != 1) {
            func_02042058(arg1, *(char**)(arg0 + RG(0x1bdc, 0x1aa4)));
        }
    }
}
