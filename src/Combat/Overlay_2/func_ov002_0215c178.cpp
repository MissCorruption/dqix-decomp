#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void* a0);
extern "C" int func_020420e8(int a, int b);
extern "C" int func_0206dfb0(int unused, unsigned char* arr, int index);
extern "C" int func_020e51cc(int value);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_02041e70(char* dst, int palette);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" int func_02041a28(char* dst, int x);

extern short data_ov002_0216ca04[];
extern int data_ov002_0216ca58[];
extern char data_ov002_0216d26e;

#if defined(jpn)
extern int data_ov002_0216d09c[];
extern const char* data_ov002_0216d600[];
extern char data_ov002_0216d92a;

extern "C" ARM void func_ov002_0215c178(void* a0, char* dst, int flag) {
    if (dst == NULL) return;
    char* sub = (char*)a0 + 0x1a00;
    short cursor = *(short*)(sub + 0xa8);
    void* p = func_0205ec34(sub);
    int hasBit = func_0206dfb0((int)(long)p, (unsigned char*)p + 0x8c, 4506) != 0;
    if (flag != 0) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);
    for (int i = 0; i < 6; i++) {
        if (i == 3 && hasBit == 0) {
            func_02041e70(dst, 3);
        }
        int n = data_ov002_0216d09c[i];
        func_02041b70(dst, n, data_ov002_0216d600[n]);
        if (i == 1 || i == 3) {
            func_02042058(dst, &data_ov002_0216d92a);
        } else {
            func_02041a28(dst, 0x3e);
        }
        if (i == 3 && hasBit == 0) {
            func_02041e70(dst, 15);
        }
    }
}
#else
// USA: func_ov002_0215c178
extern "C" ARM void func_ov002_0215c178(void* a0, char* dst, int flag) {
    if (dst == NULL) return;
    char* sub = (char*)a0 + 0x1b00;
    short cursor = *(short*)(sub + 0xe0);
    void* p = func_0205ec34(sub);
    int hasBit = func_0206dfb0((int)(long)p, (unsigned char*)p + 0x8c, 4506) != 0;
    int maxVal = 0;
    for (int i = 0; i < 3; i++) {
        int v = func_020420e8(func_020e51cc(data_ov002_0216ca04[i]), 0);
        if (maxVal < v) maxVal = v;
    }
    if (flag != 0) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);
    for (int i = 0; i < 6; i++) {
        if (i == 3 && hasBit == 0) {
            func_02041e70(dst, 3);
        }
        int n = data_ov002_0216ca58[i];
        int name = func_020e51cc(data_ov002_0216ca04[n]);
        func_02041b70(dst, n, (const char*)(long)name);
        if (i == 1 || i == 3) {
            func_02042058(dst, &data_ov002_0216d26e);
        } else {
            func_02041a28(dst, maxVal + 0x20);
        }
        if (i == 3 && hasBit == 0) {
            func_02041e70(dst, 15);
        }
    }
}
#endif
