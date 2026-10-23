#include <globaldefs.h>

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);

// USA: func_ov002_021610c4
extern "C" ARM void func_ov002_021610c4(unsigned char* obj, char* dst, int flag) {
#if defined(jpn)
    enum { regionalOffset0 = 0x1ada, regionalOffset1 = 0x8, regionalOffset2 = 0x1aa4 };
#else
    enum { regionalOffset0 = 0x1c12, regionalOffset1 = 0x20, regionalOffset2 = 0x1bdc };
#endif
    if (dst == NULL) return;

    int cursor = *(short*)(obj + regionalOffset0);
    short id = 0x26ad;

    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    for (int i = 0; i < 2; i++) {
        int field = func_020e0434((Container020e0310*)(obj + regionalOffset1), id++);
        func_02041b70(dst, i, (const char*)field);
        if (i != 1) {
            func_02042058(dst, *(char**)(obj + regionalOffset2));
        }
    }
}
