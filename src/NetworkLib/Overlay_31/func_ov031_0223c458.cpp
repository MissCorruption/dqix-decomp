#include <globaldefs.h>

struct Struct_ov031_0223c458_2 { unsigned char unknown_0_[4]; int (*unknown_4_)(void*, int); };

struct Struct_ov031_0223c458 {
    unsigned char unknown_0_[0x14];
    Struct_ov031_0223c458_2* unknown_14_;
    unsigned char unknown_18_[0x18 - 0x14 - 4];
    void* unknown1_18_;
    void* unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    short unknown_2c_;
    unsigned char unknown_2e_[0x2e - 0x2c - 2];
    unsigned char unknown1_2e_;
    unsigned char unknown_2f_;
};

extern "C" void* func_ov031_0223bfa0(int arg0);
extern "C" int func_ov031_0223db7c(int arg0, int arg1, int arg2, int* arg3);
extern "C" int func_020b2054(int arg0, int arg1);
extern "C" int func_020b1ec0(void* arg0, int arg1, int arg2, int arg3, int arg4);

extern void* data_ov031_02290d38;

// USA: func_ov031_0223c458
extern "C" ARM void* func_ov031_0223c458(int arg0, int arg1, int arg2, int arg3, void** arg4, int arg5) {
    unsigned char* var0 = (unsigned char*)data_ov031_02290d38;
    Struct_ov031_0223c458* var1 = (Struct_ov031_0223c458*)func_ov031_0223bfa0(*(int*)(var0 + 0x670));

    var1->unknown1_2e_ = (unsigned char)arg1;
    var1->unknown_2f_ = (unsigned char)arg2;

    int var2;
    var1->unknown_28_ = func_ov031_0223db7c(arg0, arg1 * arg2, arg3, &var2);
    var1->unknown_2c_ = (short)var2;

    int var3 = func_020b2054(arg1, arg2);
    *arg4 = (void*)var3;

    int var4 = var2 << 7;
    int var5 = (arg0 == 1) ? 0x6600000 : 0x6400000;
    func_020b1ec0(var1, var5 + var4, arg1, arg2, 4);

    var1->unknown_14_->unknown_4_(var1, 0);

    void* var6 = data_ov031_02290d38;
    var1->unknown1_18_ = var1;
    var1->unknown_1c_ = (char*)var6 + arg5 * 8;
    var1->unknown_20_ = 1;
    var1->unknown_24_ = 1;
    return var1;
}
