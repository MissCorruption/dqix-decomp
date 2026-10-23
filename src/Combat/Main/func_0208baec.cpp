#include <globaldefs.h>

extern "C" void func_0205af38(int arg0, char* arg1, int arg2, int arg3);
extern "C" int func_0205ac40(int arg0, void* arg1);

struct Struct_0208baec {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_[0xc - 0x8];
    unsigned short unknown_c_;
};

struct Struct_0208baec_2 {
    unsigned char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned short unknown_20_;
    unsigned char unknown_22_;
};

// USA: func_0208baec
extern "C" ARM int func_0208baec(int arg0, Struct_0208baec_2* arg1, Struct_0208baec* arg2, int arg3,
                                         float arg4, int arg5, unsigned char arg6) {
    arg1->unknown_22_ = (unsigned char)arg3;
    func_0205af38(arg0, (char*)arg1, 1, 1);
    arg1->unknown_20_ = arg6;
    int var0 = arg2->unknown_0_, var1 = arg2->unknown_4_;
    int var2 = var0 - arg5;
    int var3 = var1 - arg5;
    arg1->unknown_14_ = var2 << 12;
    arg1->unknown_18_ = var3 << 12;
    arg1->unknown_c_ = (int)(arg4 * 4096.0f);
    arg1->unknown_10_ = (int)(arg4 * 4096.0f);
    arg1->unknown_1c_ = arg2->unknown_c_;
    return func_0205ac40(arg0, arg1);
}
