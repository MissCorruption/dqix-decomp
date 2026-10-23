#include <globaldefs.h>
#include <std_library_functions.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Mutex.h"
#include "NitroSDK/Timing.h"

struct Struct_ov031_02218098_2 {
    unsigned char unknown_0_[0x800];
    int unknown_800_;
    unsigned char unknown_804_[0xc];
    int (*unknown_810_)(int);
    unsigned char unknown_814_[0x1c];
};

struct Struct_ov031_02218098_3 {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    int unknown_c_;
    Mutex unknown_10_;
    int unknown_28_;
    int unknown_2c_;
};

struct Struct_ov031_02218098_4 {
    unsigned char unknown_0_[0xc];
    Struct_ov031_02218098_2* unknown_c_;
    unsigned char unknown_10_[0x54];
};

struct Struct_ov031_02218098_5 {
    unsigned char unknown_0_[0x1c];
    int unknown_1c_;
    int unknown_20_;
    unsigned char unknown_24_[0x100];
    int unknown_124_;
    unsigned char unknown_128_[4];
    unsigned int unknown_12c_;
    int unknown_130_;
    unsigned short unknown_134_;
    unsigned short unknown_136_;
    Struct_ov031_02218098_4 unknown_138_;
    Struct_ov031_02218098_2 unknown_19c_;
    unsigned char unknown_9cc_[0x2c];
    char* unknown_9f8_;
    unsigned char unknown_9fc_[0xc];
    Struct_ov031_02218098_3 unknown_a08_;
};

struct Struct_ov031_02218098 {
    unsigned char unknown_0_[0x1000];
    Struct_ov031_02218098_5 unknown_1000_;
};

extern "C" void func_ov031_02217f44(void*);
extern "C" int func_ov031_02217f9c(void*);
extern "C" void func_ov031_0220321c();
extern "C" int func_ov031_02218798(int);
extern "C" void func_ov031_02207d60(void*, void*);
extern "C" void func_ov031_0220aa68(unsigned char);
extern "C" void func_ov031_022031bc(int, unsigned short, unsigned int);
extern "C" int func_ov031_02203358();
extern "C" void func_ov031_02203250();
extern "C" void func_ov031_02203178();
extern "C" int func_ov031_02203a84(void*, int);
extern "C" void func_ov031_02203b8c();
extern "C" int func_ov031_02217ecc(char*);
extern "C" int func_ov031_02203b1c();
extern "C" int func_ov031_0220357c(unsigned int*);
extern "C" int func_ov031_02217fb0(void*);
extern "C" void func_ov031_02203670(int);
extern "C" void func_ov031_022033e8();
extern "C" void func_ov031_02203424();
extern char data_ov031_02249d84[];
extern int data_ov031_0224c9d0;

// USA: func_ov031_02218098
extern "C" ARM void func_ov031_02218098(Struct_ov031_02218098* arg0) {
    Struct_ov031_02218098_3* var0;
    int var1 = arg0->unknown_1000_.unknown_1c_;
    Struct_ov031_02218098_4* var2 = &arg0->unknown_1000_.unknown_138_;
    Struct_ov031_02218098_2* var3 = &arg0->unknown_1000_.unknown_19c_;
    var0 = &arg0->unknown_1000_.unknown_a08_;
    int var4 = 0;
    if (var1 <= 0)
        var1 = 60000;
    func_ov031_02217f44(arg0);
    unsigned int var5 = func_ov031_02217f9c(arg0);
    if (!var5) {
        arg0->unknown_1000_.unknown_20_ = 2;
        return;
    }
    arg0->unknown_1000_.unknown_12c_ = var5;
    func_ov031_0220321c();
    int var6;
    if (arg0->unknown_1000_.unknown_130_ == 1) {
        VectorizedMemset(var3, 0, 0x830);
        var3->unknown_810_ = func_ov031_02218798;
        var3->unknown_800_ = arg0->unknown_1000_.unknown_124_;
        var2->unknown_c_ = var3;
        func_ov031_02207d60(data_ov031_02249d84, (void*)12);
        func_ov031_0220aa68(1);
    }
    func_ov031_022031bc(0, arg0->unknown_1000_.unknown_134_, var5);
    if (func_ov031_02203358()) {
        arg0->unknown_1000_.unknown_20_ = 3;
        func_ov031_02203250();
        func_ov031_02203178();
        return;
    }
    char* var7 = arg0->unknown_1000_.unknown_9f8_;
    var6 = func_ov031_02203a84(var7, strlen(var7));
    if (var6 <= 0) {
        arg0->unknown_1000_.unknown_20_ = 5;
        goto cleanup;
    }
    func_ov031_02203b8c();
    if (!func_ov031_02217ecc((char*)arg0)) {
        arg0->unknown_1000_.unknown_20_ = 7;
        goto cleanup;
    }
    var0->unknown_4_ = var0->unknown_0_;
    var0->unknown_8_ = var0->unknown_0_ + var0->unknown_c_;
    unsigned long long var8 = GetCurrentTimestamp();
    while (true) {
        if (!data_ov031_0224c9d0) {
            arg0->unknown_1000_.unknown_20_ = 5;
            goto cleanup;
        }
        var6 = func_ov031_02203b1c();
        if (var6 < 0)
            break;
        if (var6 > 0) {
            var8 = GetCurrentTimestamp();
            int var9 = func_ov031_0220357c((unsigned int*)&var6);
            if (!var9)
                break;
            int var10 = var6;
            int var11 = var0->unknown_8_ - 1 - var0->unknown_4_;
            if (var10 >= var11)
                var10 = var11;
            VectorizedInvertedMemcpy((void*)var9, var0->unknown_4_, var10);
            var0->unknown_4_ += var10;
            *var0->unknown_4_ = 0;
            if (var4 == 1) {
                LockMutex(&arg0->unknown_1000_.unknown_a08_.unknown_10_);
                arg0->unknown_1000_.unknown_a08_.unknown_2c_ += var10;
                UnlockMutex(&arg0->unknown_1000_.unknown_a08_.unknown_10_);
            } else {
                var4 = func_ov031_02217fb0(arg0);
            }
            if ((unsigned int)var6 > (unsigned int)var10) {
                func_ov031_02203670(var6);
                break;
            }
            func_ov031_02203670(var10);
        }
        if (arg0->unknown_1000_.unknown_a08_.unknown_28_ >= 0 && arg0->unknown_1000_.unknown_a08_.unknown_2c_ >= arg0->unknown_1000_.unknown_a08_.unknown_28_)
            break;
        if (((GetCurrentTimestamp() - var8) << 6) / 33514 > (unsigned long long)var1) {
            arg0->unknown_1000_.unknown_20_ = 6;
            goto cleanup;
        }
        if (!func_ov031_02217ecc((char*)arg0)) {
            arg0->unknown_1000_.unknown_20_ = 7;
            goto cleanup;
        }
    }
    func_ov031_022033e8();
    func_ov031_02203424();
    func_ov031_02203250();
    func_ov031_02203178();
    arg0->unknown_1000_.unknown_20_ = 8;
    return;
cleanup:
    func_ov031_022033e8();
    func_ov031_02203424();
    func_ov031_02203250();
    func_ov031_02203178();
}
