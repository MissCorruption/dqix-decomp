#include <globaldefs.h>

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(struct Struct_0205d1e0* arg0);
struct Struct_0205d228;
extern "C" void func_0205d228(struct Struct_0205d228* arg0);
extern "C" void func_0205da88(void* arg0, int arg1, int arg2, int arg3);
struct Struct_0205d274;
extern "C" void func_0205d274(struct Struct_0205d274* arg0);
extern "C" void func_ov003_0217033c(char* arg0);
#if defined(jpn)
#define func_ov003_021704e8 func_ov003_0216fd3c
extern "C" void func_ov003_0216fb7c(void* arg0);
#define func_ov003_021702e4 func_ov003_0216fb7c
#else
struct Struct_ov003_0217019c;
extern "C" void func_ov003_021702e4(struct Struct_ov003_0217019c* arg0);
#endif
extern "C" void func_ov003_021704e8(char* arg0);
struct Struct_ov003_0217019c;
extern "C" void* func_02012fe4(void);
struct Struct_ov003_0216dee4;
extern "C" void func_ov003_0216dee4(struct Struct_ov003_0216dee4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov003_0217019c_2 {
    char unknown_0_[1];
    signed char unknown_1_;
    char unknown_2_[0x3a];
    void* unknown_3c_;
    char unknown_40_[0x3b0 - 0x40];
    int unknown_3b0_[8];
};

// USA: func_ov003_0217019c
extern "C" ARM void func_ov003_0217019c(struct Struct_ov003_0217019c_2* arg0) {
    if (arg0->unknown_3c_ == 0) return;
    signed char var0 = arg0->unknown_1_;
    if (var0 == 0 || var0 == 1 || var0 == 7) return;

    func_0205d1e0((struct Struct_0205d1e0*)arg0->unknown_3c_);
    func_0205d228((struct Struct_0205d228*)arg0->unknown_3c_);
    func_0205da88(arg0->unknown_3c_, 2, 1, 1);
    func_0205d274((struct Struct_0205d274*)arg0->unknown_3c_);

    func_ov003_0217033c((char*)arg0);
    func_ov003_021704e8((char*)arg0);
    func_ov003_021702e4((struct Struct_ov003_0217019c*)arg0);

#if !defined(jpn)
    signed char var1 = arg0->unknown_1_;
    switch (var1) {
        case 0:
        case 1:
            return;
    }
    func_02012fe4();

    int var2 = 0x51;
    int var3 = 0x2e;
    int var4 = 0x40;
    for (int var5 = 0; var5 < 8; var5++) {
        int var6 = arg0->unknown_3b0_[var5];
        if (var6 < 0) return;
        func_ov003_0216dee4((struct Struct_ov003_0216dee4*)((char*)arg0 + 0x68), var6 + 9, var2, var3, var4, 2, 3);
        var4 += 1;
        var3 += 0x10;
    }
#endif
}
