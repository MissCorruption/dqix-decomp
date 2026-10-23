#include <globaldefs.h>

struct Struct_02029634_2 {
    char unknown_0_[0x34];
    struct Struct_02029634_2* unknown_34_;
};

struct Struct_02029634 {
    char unknown_0_[0x44];
    struct Struct_02029634_2* unknown_44_;
    char unknown_48_[0x12];
    unsigned short unknown_5a_;
};

extern "C" struct Struct_02029634_2* func_0202a9ac(struct Struct_02029634* arg0, int arg1);
extern "C" void* func_02029560(void* arg0);
extern "C" void* func_ov015_0218f39c(void*, void*);

struct Struct_ov015_0219015c {
    char unknown_0_[0x10];
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
};

struct Struct_ov015_0219015c_2 {
    void* unknown_0_;
    char unknown_4_[0x34];
    short unknown_38_;
};

// USA: func_ov015_0219015c
extern "C" ARM void func_ov015_0219015c(struct Struct_ov015_0219015c_2* arg0, int arg1) {
    struct Struct_02029634* var0 = (struct Struct_02029634*)((char*)arg0->unknown_0_ + 0x2c4);
    struct Struct_02029634_2* var1 = func_0202a9ac(var0, arg0->unknown_38_);
    if (var1 == 0) {
        return;
    }
    void* var2 = func_02029560(var1);
    struct Struct_ov015_0219015c* var3 = (struct Struct_ov015_0219015c*)func_ov015_0218f39c(arg0, var2);
    if (var3 == 0) {
        return;
    }
    int var4 = var3->unknown_14_ - var3->unknown_10_;
    int var5 = var3->unknown_18_ + arg1;
    var3->unknown_18_ = var5;
    if (var5 < 0) {
        var3->unknown_18_ = 0;
    }
    var5 = var3->unknown_18_;
    if (var5 > var4) {
        var3->unknown_18_ = var4;
    }
}
