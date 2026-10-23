#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_021696f4_1263 = 0x4eb };
enum { Enum_ov003_021696f4_1276 = 0x4f8 };
enum { Enum_ov003_021696f4_1271 = 0x4f3 };
#else
enum { Enum_ov003_021696f4_1263 = 0x4ef };
enum { Enum_ov003_021696f4_1276 = 0x4fc };
enum { Enum_ov003_021696f4_1271 = 0x4f7 };
#endif

struct Struct_0205bef8;
extern "C" void func_0205bef8(struct Struct_0205bef8* arg0);

struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);

struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);

extern "C" void func_0205bb04(void* arg0, int arg1);

struct Struct_ov003_021696f4 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_ov003_021696f4_2 {
    char unknown_0_[Enum_ov003_021696f4_1263];
    signed char unknown_4ef_[4];
    signed char unknown_4f3_[4];
    char unknown_4f7_[Enum_ov003_021696f4_1276 - Enum_ov003_021696f4_1271];
    struct Struct_ov003_021696f4 unknown_4fc_;
};

// USA: func_ov003_021696f4
extern "C" ARM void func_ov003_021696f4(struct Struct_ov003_021696f4_2* arg0, int arg1) {
    int var0 = arg0->unknown_4ef_[arg1];
    int var1 = 0;
    for (int var2 = 0; var2 < arg1; var2++) {
        if (arg0->unknown_4ef_[var2] < arg0->unknown_4f3_[var2]) break;
        if (var2 == arg1 - 1) var1 = 1;
    }
    if (arg1 == 0) var1 = 1;

    int var3 = 3;
    for (int var4 = 0; var4 < 4; var4++) {
        if (arg0->unknown_4f3_[var4] > 0) {
            var3 = var4;
            break;
        }
    }
    if (arg1 <= var3) var1 = 0;

    func_0205bef8((struct Struct_0205bef8*)&arg0->unknown_4fc_);
    if (var1) {
        int var5 = arg0->unknown_4f3_[arg1];
        func_0205ba68((struct Struct_0205ba68*)&arg0->unknown_4fc_, 1, var5 + 1, 0);
        arg0->unknown_4fc_.unknown_4_ = 1;
        func_0205bacc((struct Struct_0205bacc*)&arg0->unknown_4fc_, var5 + 1);
        func_0205bb04(&arg0->unknown_4fc_, var5 - var0);
    } else {
        func_0205ba68((struct Struct_0205ba68*)&arg0->unknown_4fc_, 1, 10, 0);
        arg0->unknown_4fc_.unknown_4_ = 1;
        func_0205bacc((struct Struct_0205bacc*)&arg0->unknown_4fc_, 10);
        func_0205bb04(&arg0->unknown_4fc_, 9 - var0);
    }
}
