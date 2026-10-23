#include <globaldefs.h>

#if defined(jpn)
enum { kRegionValue3C1_3D9 = 0x3d9 };
enum { kRegionValue64_7C = 0x7c };
enum { kRegionValue3C0_3D8 = 0x3d8 };
enum { kRegionValue3BD_3D5 = 0x3d5 };
#else
enum { kRegionValue3C1_3D9 = 0x3c1 };
enum { kRegionValue64_7C = 0x64 };
enum { kRegionValue3C0_3D8 = 0x3c0 };
enum { kRegionValue3BD_3D5 = 0x3bd };
#endif

struct Container020e0310;
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);

extern char data_ov003_0217ff3e;

// USA: func_ov003_0215e13c
extern "C" ARM void func_ov003_0215e13c(char* base, char* dst, int flag) {
    if (dst == NULL) return;

    signed char cursor = *(signed char*)(base + kRegionValue3C1_3D9);
    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    struct Container020e0310* c = (struct Container020e0310*)(base + kRegionValue64_7C);
    int i = 0;
    while (i < *(unsigned char*)(base + kRegionValue3C0_3D8)) {
        unsigned char key = *(unsigned char*)(base + i + kRegionValue3BD_3D5);
        int name = func_020e0434(c, key);
        func_02041b70(dst, i, (const char*)name);
        if (i != *(unsigned char*)(base + kRegionValue3C0_3D8) - 1) {
            func_02042058(dst, &data_ov003_0217ff3e);
        }
        i++;
    }
}
