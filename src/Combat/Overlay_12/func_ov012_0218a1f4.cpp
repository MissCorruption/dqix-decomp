#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_0218a1f4 func_ov012_0218ae20
#endif

struct Struct_02072a68 {
    short unknown_0_;
    void* unknown_4_;
};

struct Struct_02072a68_2 {
    struct Struct_02072a68* unknown_0_;
    short unknown_4_;
};

struct Struct_020465c0 {
    char unknown_0_[0x8b0];
    int unknown_8b0_[0x10];
};

extern "C" int func_020421a0();
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" int func_02041d9c(char* arg0, int arg1);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" int func_02041a90(char* arg0, int arg1, int arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
#if defined(jpn)
extern "C" void func_02042428(char* arg0, int arg1);
#endif

// USA: func_ov012_0218a1f4
extern "C" ARM void func_ov012_0218a1f4(unsigned char* arg0, char* arg1) {
    if (arg1 == 0) return;

    struct Struct_020465c0* var0 = (struct Struct_020465c0*)func_020421a0();
#if defined(jpn)
    func_020465c0(var0, 0, arg0[0x1457]);
    func_020465f0((unsigned char*)var0, 0, 2);
    func_020465d8((unsigned char*)var0, 0, 1);
    func_02042428(arg1, 0xc);
    if (arg0[0x1341] == 9) {
        void* var1 = func_02072a68((struct Struct_02072a68_2*)(arg0 + 0x1314), 0x69);
        func_02041b70(arg1, 0, (const char*)var1);
    } else {
        void* var2 = func_02072a68((struct Struct_02072a68_2*)(arg0 + 0x1314), 0x66);
        func_02041b70(arg1, 0, (const char*)var2);
    }
#else
    func_020465c0(var0, 0, *(unsigned short*)(arg0 + 0x13fc));
    func_020465f0((unsigned char*)var0, 0, 4);
    func_020465d8((unsigned char*)var0, 0, 1);

    func_02041d9c(arg1, 0xc);

    int var3 = 0x64;
    if (arg0[0x1371] == 7) var3 = 0x67;
    void* var4 = func_02072a68((struct Struct_02072a68_2*)(arg0 + 0x133c), var3);
    func_02041b70(arg1, 0, (const char*)var4);

    void* var5 = func_02072a68((struct Struct_02072a68_2*)(arg0 + 0x133c), 0x2a);
    int var6 = func_020420e8((char*)var5, 0);
    func_02041a90(arg1, (0x60 - var6) >> 1, 1);
    func_02042058(arg1, (const char*)var5);
#endif
}
