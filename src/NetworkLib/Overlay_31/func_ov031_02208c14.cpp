#include <globaldefs.h>

struct Struct_ov031_02208c14_2 {
    int unknown_0_;
    unsigned char* unknown_4_;
};

struct Struct_ov031_02208c14 {
    Struct_ov031_02208c14_2 unknown_0_;
    Struct_ov031_02208c14_2 unknown_8_;
    Struct_ov031_02208c14_2 unknown_10_;
    Struct_ov031_02208c14_2 unknown_18_;
    Struct_ov031_02208c14_2 unknown_20_;
    Struct_ov031_02208c14_2 unknown_28_;
};

extern "C" void func_ov031_0220c8d0(unsigned short* arg0, unsigned char* arg1, int arg2, int arg3);
extern "C" void func_ov031_0220c92c(unsigned char* arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" unsigned int func_ov031_02207cf0();
extern "C" void func_ov031_02207d3c(unsigned int arg0);
extern "C" int func_ov031_0220bb4c(unsigned short* arg0, int arg1);
extern "C" void func_ov031_0220c6c4(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3, unsigned short* arg4);
extern "C" void func_ov031_0220bcbc(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3);
extern "C" void func_ov031_0220be38(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3);
extern "C" void func_ov031_0220bb7c(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3);
extern "C" void func_ov031_0220bc7c(unsigned short* arg0, int arg1);
extern "C" void func_ov031_0220c0dc(unsigned short* arg0, unsigned short* arg1,
    unsigned short* arg2, unsigned short* arg3, int arg4, unsigned short* arg5);
extern void* (*data_ov031_0224c994)(unsigned int);
extern int (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_02208c14
extern "C" ARM void func_ov031_02208c14(unsigned char* arg0, unsigned char* arg1, Struct_ov031_02208c14* arg2) {
    int var0;
    unsigned short* var1;
    unsigned short* var2;
    unsigned short* var3;
    unsigned short* var4;
    unsigned short* var5;
    unsigned short* var6;
    unsigned short* var7;
    unsigned short* var8;
    unsigned int var9;
    if (arg2 == 0 || arg2->unknown_0_.unknown_0_ == 0)
        return;
    var0 = (arg2->unknown_0_.unknown_0_ * 2) / 2 + 1;
    var1 = (unsigned short*)data_ov031_0224c994(var0 * 0x14);
    if (var1 == 0)
        return;
    var2 = var1 + var0;
    var3 = var2 + var0;
    var4 = var3 + var0;
    var5 = var4 + var0;
    var6 = var5 + var0;
    var7 = var6 + var0;
    var8 = var7 + var0;
    func_ov031_0220c8d0(var1, arg1, arg2->unknown_0_.unknown_0_, var0);
    func_ov031_0220c8d0(var2, arg2->unknown_18_.unknown_4_, arg2->unknown_18_.unknown_0_, var0);
    func_ov031_0220c8d0(var6, arg2->unknown_8_.unknown_4_, arg2->unknown_8_.unknown_0_, var0);
    var9 = func_ov031_02207cf0();
    func_ov031_0220c6c4(var4, var1, var2, var0, var6);
    func_ov031_0220c8d0(var2, arg2->unknown_20_.unknown_4_, arg2->unknown_20_.unknown_0_, var0);
    func_ov031_0220c8d0(var6, arg2->unknown_10_.unknown_4_, arg2->unknown_10_.unknown_0_, var0);
    func_ov031_0220c6c4(var5, var1, var2, var0, var6);
    func_ov031_02207d3c(var9);
    func_ov031_0220bcbc(var1, var4, var5, var0);
    func_ov031_0220c8d0(var2, arg2->unknown_28_.unknown_4_, arg2->unknown_28_.unknown_0_, var0);
    func_ov031_0220be38(var3, var1, var2, var0);
    func_ov031_0220c8d0(var2, arg2->unknown_10_.unknown_4_, arg2->unknown_10_.unknown_0_, var0);
    func_ov031_0220be38(var1, var3, var2, var0);
    func_ov031_0220bb7c(var3, var1, var5, var0);
    func_ov031_0220c8d0(var2, arg2->unknown_0_.unknown_4_, arg2->unknown_0_.unknown_0_, var0);
    if (func_ov031_0220bb4c(var3, var0) < 0) {
        func_ov031_0220bc7c(var3, var0);
        func_ov031_0220c0dc(0, var3, var2, var7, var0, var8);
        func_ov031_0220bcbc(var7, var2, var7, var0);
    } else {
        func_ov031_0220c0dc(0, var3, var2, var7, var0, var8);
    }
    func_ov031_0220c92c(arg0, var7, 0x30, var0);
    data_ov031_0224c9c0(var1);
}
