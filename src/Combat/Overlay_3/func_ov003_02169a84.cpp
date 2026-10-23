#include <globaldefs.h>

#if defined(jpn)
enum { kRegionValue4ED_4E9 = 0x4e9 };
#else
enum { kRegionValue4ED_4E9 = 0x4ed };
#endif

struct Container020e0310;
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);

// USA: func_ov003_02169a84
extern "C" ARM void func_ov003_02169a84(char* base, char* dst, int flag) {
    if (dst == NULL) return;

    signed char cursor = *(signed char*)(base + kRegionValue4ED_4E9);
    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    struct Container020e0310* c = (struct Container020e0310*)(base + 0x64);
    int i = 0;
    while (i < 3) {
        int name = func_020e0434(c, (short)i);
        func_02041b70(dst, i, (const char*)name);
        if (i != 2) {
            int sep = func_020e0434(c, 0x64);
            func_02042058(dst, (const char*)sep);
        }
        i++;
    }
}
