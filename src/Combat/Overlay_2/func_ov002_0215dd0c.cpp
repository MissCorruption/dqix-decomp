#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);

// USA: func_ov002_0215dd0c
extern "C" ARM void func_ov002_0215dd0c(unsigned char* obj, char* dst, int flag) {
    if (dst == NULL) return;

    int cursor = *(short*)(obj + RG(0x1bf2, 0x1aba));
    short id = 0x79f;

    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    for (int i = 0; i < 2; i++) {
        int field = func_020e0434((Container020e0310*)(obj + RG(0x20, 0x8)), id++);
        func_02041b70(dst, i, (const char*)field);
        if (i != 1) {
            func_02042058(dst, *(char**)(obj + RG(0x1bdc, 0x1aa4)));
        }
    }
}
