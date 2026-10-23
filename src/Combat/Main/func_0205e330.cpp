#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020d8654(void);
extern "C" void func_020d84e4(void);
extern "C" void func_020d84e8(void);
extern "C" void* func_0202ae18(void);
extern "C" void func_020d8694(void);
extern "C" void func_020c9be0(void);
extern "C" int func_0202b7d8(int* arg0);

struct Struct_0205e1e4_2 {
    char unknown_0_[0x18];
    struct Struct_0205e1e4_2* unknown_18_;
};
struct Struct_0205e1e4 {
    struct Struct_0205e1e4_2* unknown_0_;
    struct Struct_0205e1e4_2* unknown_4_;
    int unknown_8_;
};
extern "C" struct Struct_0205e1e4_2* func_0205e1e4(struct Struct_0205e1e4* arg0);

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

struct Struct_0205e3ec { unsigned int unknown_0_[4]; };
struct Struct_0205e330_3 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_[2]; struct Struct_0205e3ec unknown_4_; };
extern "C" struct Struct_0205e330_3* func_0205e3ec(struct Struct_0205e330_3* arg0, struct Struct_0205e330_3* arg1);

struct Struct_0205e330 {
    char unknown_0_[0x16];
    short unknown_16_;
};

struct Struct_0205e330_2 {
    char unknown_0_[0x508];
    volatile int unknown_508_;
    char unknown_50c_[0x514 - 0x508 - 4];
    volatile int unknown_514_;
    char unknown_518_[0x520 - 0x514 - 4];
    volatile int unknown_520_;
};

// USA: func_0205e330
extern "C" ARM void func_0205e330(unsigned char* arg0, struct Struct_0205e330_3* arg1, short arg2) {
    struct Struct_0205e1e4_2* var0;

    func_020d8654();
    func_020d84e4();

    if (func_0202b7d8((int*)func_0202ae18())) {
        var0 = func_0205e1e4((struct Struct_0205e1e4*)(arg0 + 0x1500));
        if (var0 != NULL) {
            func_0205e3ec((struct Struct_0205e330_3*)var0, arg1);
            ((struct Struct_0205e330*)var0)->unknown_16_ = arg2;
            func_0205e18c((struct Struct_0205e18c*)(arg0 + 0x150c), (struct Struct_0205e18c_2*)var0);
        } else {
            for (int var1 = 0; var1 < ((struct Struct_0205e330_2*)(arg0 + 0x1000))->unknown_508_; var1++);

            for (int var2 = 0; var2 < ((struct Struct_0205e330_2*)(arg0 + 0x1000))->unknown_514_; var2++);

            for (int var3 = 0; var3 < ((struct Struct_0205e330_2*)(arg0 + 0x1000))->unknown_520_; var3++);

            func_020c9be0();
        }
    }

    func_020d84e8();
    func_020d8694();
}
