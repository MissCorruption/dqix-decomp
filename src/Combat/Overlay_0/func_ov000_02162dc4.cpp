#include <globaldefs.h>
#include "std_library_functions.h"
struct Struct_02032e58;

struct Struct_02010604;
extern "C" void func_02048c50(unsigned char*);
extern "C" void func_0203400c(Struct_02032e58*);
extern "C" void func_020d76d8(unsigned char* arg0, int arg1);
extern "C" int func_ov000_02159f18(void* arg0, unsigned long long arg1, unsigned int arg2);
extern "C" void func_02033b88(Struct_02010604* arg0, int arg1);
extern "C" void func_02033fec(Struct_02032e58*);
extern "C" void func_02048c38(unsigned char*);
extern "C" void func_020d7334(unsigned char*, int);
extern "C" void func_020d6f9c(void* arg0, int arg1, int arg2);

#if defined(jpn)
#define data_ov000_021838d8 data_ov000_02184a18
#endif
extern const char data_ov000_021838d8[];

enum Enum_ov000_02162dc4 { Enum_ov000_02162dc4_0, Enum_ov000_02162dc4_1, Enum_ov000_02162dc4_2, Enum_ov000_02162dc4_3, Enum_ov000_02162dc4_4, Enum_ov000_02162dc4_5 };
enum Enum_ov000_02162dc4_B { Enum_ov000_02162dc4_B_0, Enum_ov000_02162dc4_B_1, Enum_ov000_02162dc4_B_2, Enum_ov000_02162dc4_B_3, Enum_ov000_02162dc4_B_4, Enum_ov000_02162dc4_B_5 };

struct Struct_ov000_02162dc4_2 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x14 - 6];
    char* unknown_14_;
    char unknown_18_[0xc1 - 0x18];
    unsigned char unknown_c1_0_ : 4;
    unsigned char unknown_c1_4_ : 4;
};

struct Struct_ov000_02162dc4 {
#if defined(jpn)
    char unknown_0_[0x218];
    void* unknown_29c_;
    char unknown_21c_[0xe20 - 0x21c];
#else
    char unknown1_0_[0x29c];
    void* unknown_29c_;
    char unknown_2a0_[0xea4 - 0x2a0];
#endif
    unsigned char* unknown_ea4_;
};

inline int inline_ov000_02162dc4(Struct_ov000_02162dc4* arg0, unsigned long long arg1, unsigned int arg2, unsigned int arg3,
                       unsigned int arg4, unsigned int arg5) {
    return !func_ov000_02159f18(arg0->unknown_29c_, arg1, arg4) &&
           ((arg2 & arg3) || func_ov000_02159f18(arg0->unknown_29c_, arg1, arg5));
}

inline int inline_ov000_02162dc4_2(int arg0) { return (arg0 >= 0xc0 && arg0 <= 0xc7) ? 1 : 0; }

// USA: func_ov000_02162dc4
extern "C" ARM void func_ov000_02162dc4(Struct_ov000_02162dc4* arg0, Struct_ov000_02162dc4_2* arg1, Struct_ov000_02162dc4_2* arg2,
                                        unsigned int arg3, int arg4, int arg5, unsigned long long arg6,
                                        unsigned char arg7) {
    void* var0;
    int var1;
    unsigned char* var2;
    int var3;
    if (arg2 == NULL || (var2 = arg0->unknown_ea4_) == NULL) return;
    var3 = arg2->unknown_4_;
    func_02048c50((unsigned char*)arg2);
    func_0203400c((Struct_02032e58*)arg2);
    if (arg3 & 1) {
        func_020d76d8(var2, var3);
        return;
    }
    var0 = arg0->unknown_29c_;
    int var4 = 1;
    if (arg6 == 0 || func_ov000_02159f18(var0, arg6, 0) || func_ov000_02159f18(var0, arg6, 8) ||
        func_ov000_02159f18(var0, arg6, 0x1d) || func_ov000_02159f18(var0, arg6, 0x27)) {
        if (arg2->unknown_14_ != NULL && strcmp(arg2->unknown_14_, data_ov000_021838d8) == 0) {
            var4 = 0;
        } else if (arg4 != 0 && arg7 == 0) {
            var4 = 0;
        }
    }
    Enum_ov000_02162dc4_B var5 = Enum_ov000_02162dc4_B_0;
    Enum_ov000_02162dc4 var6 = Enum_ov000_02162dc4_5;
    if (arg4 != 0 && func_ov000_02159f18(var0, arg6, 0x17)) {
        if (arg4 == 4) var4 = 0;
    }
    var1 = 1;
    if (arg7 != 0 && func_ov000_02159f18(var0, arg6, 0xb) &&
        (func_ov000_02159f18(var0, arg6, 0x17) || func_ov000_02159f18(var0, arg6, 0x18))) {
        var1 = 0;
    }
    if (inline_ov000_02162dc4(arg0, arg6, arg3, 8, 0x1a, 0x18) && var1) {
        if (var6 == Enum_ov000_02162dc4_5) var6 = Enum_ov000_02162dc4_3;
        arg2->unknown_c1_4_ = 0;
        if (var4) func_02033b88((Struct_02010604*)arg2, 0);
        func_02033fec((Struct_02032e58*)arg2);
        func_02048c38((unsigned char*)arg2);
    }
    if (inline_ov000_02162dc4(arg0, arg6, arg3, 0x10, 0x10, 0xe)) {
        if (var5 == Enum_ov000_02162dc4_B_0) var5 = Enum_ov000_02162dc4_B_2;
        if (var6 == Enum_ov000_02162dc4_5) var6 = Enum_ov000_02162dc4_1;
        func_02048c38((unsigned char*)arg2);
        if (inline_ov000_02162dc4_2(var3)) func_02033fec((Struct_02032e58*)arg2);
    } else if (arg2->unknown_c1_4_ == 2) {
        arg2->unknown_c1_4_ = 0;
    }
    if (inline_ov000_02162dc4(arg0, arg6, arg3, 0x20, 0x19, 0x17) && var1) {
        if (var6 == Enum_ov000_02162dc4_5) var6 = Enum_ov000_02162dc4_4;
        arg2->unknown_c1_4_ = var5;
        if (var4) func_02033b88((Struct_02010604*)arg2, 0);
    }
    if (inline_ov000_02162dc4(arg0, arg6, arg3, 2, 0x11, 0xf)) {
        if (var6 == Enum_ov000_02162dc4_5) var6 = Enum_ov000_02162dc4_0;
    }
    if (func_ov000_02159f18(var0, arg6, 0x16)) {
        if (var6 == Enum_ov000_02162dc4_5) var6 = Enum_ov000_02162dc4_2;
    }
    if (arg3 & 0x80000) {
        switch (arg4) {
        case 2:
            if (var5 == Enum_ov000_02162dc4_B_0) var5 = Enum_ov000_02162dc4_B_3;
            break;
        case 3:
            if (var5 == Enum_ov000_02162dc4_B_0) var5 = Enum_ov000_02162dc4_B_4;
            break;
        case 4:
            if (var5 == Enum_ov000_02162dc4_B_0) var5 = Enum_ov000_02162dc4_B_5;
            break;
        case 6:
        case 10:
            if (var6 == Enum_ov000_02162dc4_5) var6 = Enum_ov000_02162dc4_2;
            break;
        }
        if (var5 == Enum_ov000_02162dc4_B_0) {
            arg2->unknown_c1_4_ = 0;
            if (var4) func_02033b88((Struct_02010604*)arg2, 0);
        }
        func_02048c38((unsigned char*)arg2);
    } else {
        Enum_ov000_02162dc4_B var7 = (Enum_ov000_02162dc4_B)arg2->unknown_c1_4_;
        if ((unsigned int)(var7 - Enum_ov000_02162dc4_B_3) <= Enum_ov000_02162dc4_B_5 - Enum_ov000_02162dc4_B_3) arg2->unknown_c1_4_ = 0;
    }
    if (var6 == Enum_ov000_02162dc4_5) {
        func_020d7334(var2, var3);
    } else {
        func_020d6f9c(var2, var3, var6);
    }
    if (var5 != Enum_ov000_02162dc4_B_0) arg2->unknown_c1_4_ = var5;
    if (var4) {
        if (arg1 == NULL) {
            func_02033b88((Struct_02010604*)arg2, 0);
        } else if (arg1 != arg2) {
            func_02033b88((Struct_02010604*)arg2, 0);
        }
    }
}
