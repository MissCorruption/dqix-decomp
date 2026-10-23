#if defined(jpn)
enum {regionalOffset0=0xd48, regionalOffset1=0x38, regionalOffset2=0xc0};
#else
enum {regionalOffset0=0xd84, regionalOffset1=0x30, regionalOffset2=0xe0};
#endif
#include <globaldefs.h>

struct Container020e0310;
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_02041bac(char* dst, int a, int b, int c, int d, int e);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);

// USA: func_ov023_021da100
extern "C" ARM void func_ov023_021da100(char* obj, char* dst, int flag) {
    if (dst == NULL) return;

    signed char cursor = *(signed char*)(obj + regionalOffset0);
    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    func_02041bac(dst, 0, 0, 0, regionalOffset1, 0x28);

    struct Container020e0310* c = (struct Container020e0310*)(obj + regionalOffset2);
    for (int i = 0; i < 2; i++) {
        int name = func_020e0434(c, (short)(i + 0x465a));
        func_02041b70(dst, i, (const char*)name);
        if (i != 1) {
            int sep = func_020e0434(c, 0x4273);
            func_02042058(dst, (const char*)sep);
        }
    }
}
