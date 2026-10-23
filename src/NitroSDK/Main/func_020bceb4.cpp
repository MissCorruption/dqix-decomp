#include <globaldefs.h>

struct Tween020c0260 { int f0; int f4; int f8; int fc; };
struct State020c0278 { char unk0[8]; int field8; int fieldC; };

extern "C" ARM void func_020c0260(struct Tween020c0260* t);
extern "C" ARM int func_020c0278(struct State020c0278* state);
extern "C" ARM int func_020c022c(struct Tween020c0260* t);
extern "C" int func_020d1ff0(int a, int b, int c);

extern "C" void func_020bcf3c(void);

extern char data_0210fd74;
extern char data_0210fdbc;

// USA: func_020bceb4
extern "C" ARM void func_020bceb4(void) {
    char* base = &data_0210fdbc;
    if (*(int*)(&data_0210fd74 + 0x48) == 0) {
        return;
    }
    if (*(int*)(base + 0x4) != 0) {
        return;
    }
    func_020c0260((struct Tween020c0260*)(base + 0x3c));
    if (*(int*)(base + 0x4c) != 0) {
        if (func_020c0278((struct State020c0278*)(base + 0x3c)) != 0) {
            func_020bcf3c();
            return;
        }
    }
    int v = func_020c022c((struct Tween020c0260*)(base + 0x3c)) >> 8;
    if (v == *(int*)(base + 0x50)) {
        return;
    }
    func_020d1ff0(*(int*)(base + 0x24), v, 0);
    *(int*)(base + 0x50) = v;
}
