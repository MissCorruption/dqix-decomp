#include <globaldefs.h>

struct Struct_020546c8;

extern "C" void* func_02055080(struct Struct_020546c8* arg0);
extern "C" void* func_02055090(struct Struct_020546c8* arg0);
extern "C" void* func_020550a8(struct Struct_020546c8* arg0);
extern "C" void* func_020550c0(struct Struct_020546c8* arg0);
extern "C" void* func_020550d8(struct Struct_020546c8* arg0);
extern "C" void* func_02055120(struct Struct_020546c8* arg0);
extern "C" void* func_02055138(struct Struct_020546c8* arg0);
extern "C" void* func_02055150(struct Struct_020546c8* arg0);
extern "C" void* func_02055168(struct Struct_020546c8* arg0);
extern "C" void func_020546c8(struct Struct_020546c8* arg0);

struct Struct_020546c8 {
    void* unknown_0_;
    void* unknown_4_;
};

struct Struct_02055180 {
    void* unknown_0_[9];
};

struct Struct_02055180_2 {
    void* unknown_0_[2];
};

struct Struct_02055180_3 {
    void* unknown_0_[1];
};

struct Struct_02055180_4 {
    void* unknown_0_[4];
};

struct Struct_02055180_5 {
    void* unknown_0_[3];
    void* unknown_c_[3];
    void* unknown_18_[3];
};

#define RELOCATE(slot) (slot) = (char*)arg0->unknown_4_ + (int)(slot)

// USA: func_02055180
extern "C" ARM int func_02055180(struct Struct_020546c8* arg0, void* arg1, void* arg2, void* arg3) {
    if (arg1 == 0) {
        return 0;
    }
    if (arg2 == 0) {
        return 0;
    }
    if (arg3 == 0) {
        return 0;
    }

    arg0->unknown_0_    = arg1;
    arg0->unknown_4_ = arg2;

    struct Struct_02055180* var0 = (struct Struct_02055180*)func_02055080(arg0);
    if (var0 == 0) {
        return 0;
    }
    for (int var1 = 0; var1 < 9; var1++) {
        RELOCATE(var0->unknown_0_[var1]);
    }

    struct Struct_02055180_2* var2 = (struct Struct_02055180_2*)func_02055090(arg0);
    if (var2 == 0) {
        return 0;
    }
    RELOCATE(var2->unknown_0_[0]);
    RELOCATE(var2->unknown_0_[1]);

    struct Struct_02055180_5* var3 = (struct Struct_02055180_5*)func_020550a8(arg0);
    if (var3 == 0) {
        return 0;
    }
    for (int var4 = 0; var4 < 3; var4++) {
        RELOCATE(var3->unknown_0_[var4]);
        RELOCATE(var3->unknown_c_[var4]);
        RELOCATE(var3->unknown_18_[var4]);
    }

    struct Struct_02055180_3* var5 = (struct Struct_02055180_3*)func_020550c0(arg0);
    if (var5 == 0) {
        return 0;
    }
    RELOCATE(var5->unknown_0_[0]);

    struct Struct_02055180_4* var6 = (struct Struct_02055180_4*)func_020550d8(arg0);
    if (var6 == 0) {
        return 0;
    }
    for (int var7 = 0; var7 < 4; var7++) {
        RELOCATE(var6->unknown_0_[var7]);
    }

    struct Struct_02055180_2* var8 = (struct Struct_02055180_2*)func_02055120(arg0);
    if (var8 == 0) {
        return 0;
    }
    for (int var9 = 0; var9 < 2; var9++) {
        RELOCATE(var8->unknown_0_[var9]);
    }

    struct Struct_02055180_2* var10 = (struct Struct_02055180_2*)func_02055138(arg0);
    if (var10 == 0) {
        return 0;
    }
    for (int var11 = 0; var11 < 2; var11++) {
        RELOCATE(var10->unknown_0_[var11]);
    }

    struct Struct_02055180_2* var12 = (struct Struct_02055180_2*)func_02055150(arg0);
    if (var12 == 0) {
        return 0;
    }
    RELOCATE(var12->unknown_0_[1]);

    struct Struct_02055180_4* var13 = (struct Struct_02055180_4*)func_02055168(arg0);
    if (var13 == 0) {
        return 0;
    }
    for (int var14 = 0; var14 < 4; var14++) {
        RELOCATE(var13->unknown_0_[var14]);
    }

    func_020546c8(arg0);
    return 1;
}
