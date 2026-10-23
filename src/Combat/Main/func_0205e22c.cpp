#include <globaldefs.h>
#include "Combat/SearchEntry.h"

extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);

struct Struct_0202c7bc_2;
extern "C" ARM void func_0205e16c(struct Struct_0202c7bc_2* arg0);

struct Struct_0205e18c_2 {
    char unknown_0_[0x18];
    struct Struct_0205e18c_2* unknown_18_;
};
struct Struct_0205e18c {
    struct Struct_0205e18c_2* unknown_0_;
    struct Struct_0205e18c_2* unknown_4_;
    int unknown_8_;
};
extern "C" void func_0205e18c(struct Struct_0205e18c* arg0, struct Struct_0205e18c_2* arg1);

extern "C" void* func_0202ae18(void);
extern "C" void func_0202c288(void);
extern "C" void* func_0202c19c(void* arg0);

struct Struct_0202b2f0;

struct Struct_0205e22c {
    unsigned char unknown_0_[0x10];
    unsigned char unknown_10_;
    unsigned char unknown_11_[0x14 - 0x11];
};

// USA: func_0205e22c
extern "C" ARM void func_0205e22c(void* arg0) {
    func_0205e16c((struct Struct_0202c7bc_2*)((char*)arg0 + 0x1500));
    func_0205e16c((struct Struct_0202c7bc_2*)((char*)arg0 + 0x150c));
    func_0205e16c((struct Struct_0202c7bc_2*)((char*)arg0 + 0x1518));

    memset(arg0, 0, 0x1500);

    struct Struct_0205e18c_2* var0 = (struct Struct_0205e18c_2*)arg0;
    for (int var1 = 0; var1 < 0xc0; var1++) {
        func_0205e18c((struct Struct_0205e18c*)((char*)arg0 + 0x1500), &var0[var1]);
    }

    void* var2 = func_0202ae18();
    func_0202c288();

    struct Struct_0205e22c* var3 = (struct Struct_0205e22c*)func_0202c19c(var2);
    memset(var3, 0, 0x74);

    for (int var4 = 0; var4 < 5; var4++) {
        var3[var4].unknown_10_ = 0xff;
    }

    int var5 = 0;
    int var6 = 0;
    int var7 = 0x74;
    for (; var5 < 4; var5++) {
        void* var8 = func_0202c178((struct Struct_0202b2f0*)var2, var5);
        if (var8 != NULL) {
            memset(var8, var6, var7);
        }
    }

    memset((char*)arg0 + 0x1524, 0xff, 0x20);
}
