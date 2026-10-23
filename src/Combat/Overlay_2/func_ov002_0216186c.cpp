#include <globaldefs.h>

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" int func_02041fac(char* buf, int a, int b);
extern "C" int func_020e51cc(int value);

// USA: func_ov002_0216186c
#if defined(jpn)
extern "C" int func_02042638(char* buf, int a, int b);
extern const char data_ov002_0216da9a[];
extern const char data_ov002_0216daa3[];
extern const char data_ov002_0216daa8[];

extern "C" ARM void func_ov002_0216186c(char* base, char* dst, int flag) {
    if (dst == NULL) {
        return;
    }

    int cursor = *(short*)(base + 0x1adc);
    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    func_02042638(dst, (int)data_ov002_0216da9a, 0x10);

    func_02041b70(dst, 0, data_ov002_0216daa3);

    void* ptr = *(void**)(base + 0x1aa4);
    func_02042058(dst, (const char*)ptr);

    func_02041b70(dst, 1, data_ov002_0216daa8);
}
#else
extern "C" ARM void func_ov002_0216186c(char* base, char* dst, int flag) {
    if (dst == NULL) {
        return;
    }

    int cursor = *(short*)(base + 0x1c00 + 0x14);
    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    int field = func_020e0434((struct Container020e0310*)(base + 0x20), 0x23f0);
    func_02041fac(dst, field, 0x10);

    func_02041b70(dst, 0, (const char*)func_020e51cc(0x1b));

    void* ptr = *(void**)(base + 0x1000 + 0xbdc);
    func_02042058(dst, (const char*)ptr);

    func_02041b70(dst, 1, (const char*)func_020e51cc(0x1c));
}
#endif
