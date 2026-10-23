#include <globaldefs.h>
#include <NitroSDK/Memory/SignedAllocator.h>
#include <NitroSDK/Interrupts.h>

struct Struct_020bc9d0;

extern "C" void func_020bcbc4(Struct_020bc9d0* arg0);
extern "C" int func_020bbeb0();
extern "C" void func_020d2038(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                   int arg7, int arg8, int arg9);
extern "C" void func_020d1f70(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020bcd20(void* arg0);
extern "C" void func_020bcd30(void* arg0, int arg1);

struct Struct_0210fcf4 {
    void* unknown_0_;
    int unknown_4_;
};

struct Struct_020bc9d0_2 {
    char unknown_0_[8];
    char unknown_8_[0xc];
    char unknown_14_[0xc];
    int unknown_20_;
    int unknown_24_0_ : 1;
    int unknown_24_1_ : 1;
    unsigned long unknown_28_;
    int unknown_2c_;
    void* unknown_30_;
    void* unknown_34_;
    int unknown_38_;
    int unknown_3c_;
    int unknown_40_;
    unsigned long unknown_44_;
    int unknown_48_;
    unsigned char unknown_4c_[16];
};

extern Struct_0210fcf4 data_0210fcf4[16];
extern SignedAllocatorList data_0210fca8;

// USA: func_020bc9d0
extern "C" ARM int func_020bc9d0(Struct_020bc9d0_2* arg0, int arg1, void* arg2, unsigned long arg3,
                                 int arg4, int arg5, void* arg6, void* arg7) {
    Struct_0210fcf4* var0;
    unsigned int var1;
    unsigned int var2;
    int var3;
    int var4;

    if (arg0->unknown_24_0_)
        func_020bcbc4((Struct_020bc9d0*)arg0);

    arg3 /= 32 * arg5 * arg0->unknown_48_;
    arg0->unknown_28_ = arg3 * arg5 * 32;

    var1 = arg0->unknown_28_;
    if (arg1 == 1)
        var1 >>= 1;
    var2 = arg4 * var1 / arg5;

    arg0->unknown_40_ = func_020bbeb0();
    if (arg0->unknown_40_ < 0)
        return 0;

    for (var4 = 0; var4 < arg0->unknown_48_; var4++) {
        var3 = arg0->unknown_4c_[var4];
        var0 = &data_0210fcf4[var3];
        var0->unknown_0_ = (unsigned char*)arg2 + arg0->unknown_28_ * var4;
        var0->unknown_4_ = 0;
        func_020d2038(var3, arg1, (int)var0->unknown_0_, 1, 0, (int)(arg0->unknown_28_ >> 2), 127, 0,
                      arg4 << 5, 64);
    }

    func_020d1f70(arg0->unknown_40_, var2, var2, (int)func_020bcd20, (int)arg0);
    data_0210fca8.InsertAtEnd((SignedAllocatorHeader*)arg0);

    arg0->unknown_20_ = arg1;
    arg0->unknown_2c_ = arg5;
    arg0->unknown_30_ = arg6;
    arg0->unknown_34_ = arg7;
    arg0->unknown_38_ = 0;
    arg0->unknown_3c_ = 0;
    arg0->unknown_24_0_ = 1;

    {
        int var5 = DisableIRQInterrupts();
        arg0->unknown_2c_ = 1;
        func_020bcd30(arg0, 0);
        arg0->unknown_2c_ = arg5;
        SetIRQInterruptState(var5);
    }
    return 1;
}
