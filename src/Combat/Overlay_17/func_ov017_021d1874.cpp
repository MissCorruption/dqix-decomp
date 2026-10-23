#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d1874 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_, unknown_5_, unknown_6_, unknown_7_, unknown_8_, unknown_9_;
    unsigned char unknown_a_[2];
    unsigned int unknown_c_;
    unsigned char unknown_10_[4];
};

// USA: func_ov017_021d1874
extern "C" ARM void func_ov017_021d1874(int arg0, int arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5, unsigned int arg6) {
    Struct_ov017_021d1874 var0;
    void* var1 = func_0202ae24();
    unsigned char* var2 = &var0.unknown_4_;
    var0.unknown_0_ = 0xae;
    var2[0] = arg0;
    var2[1] = arg1;
    var2[2] = arg2;
    var2[3] = arg3;
    var2[4] = arg4;
    var2[5] = arg5;
    *(unsigned int*)(var2 + 8) = arg6;
    func_0205e330(var1, &var0, 0);
}
