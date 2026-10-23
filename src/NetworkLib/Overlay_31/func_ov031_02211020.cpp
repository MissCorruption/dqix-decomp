#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02211020 {
    int unknown_0_;
    int unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    unsigned char unknown_10_[0x38];
};
extern Struct_ov031_02211020* data_ov031_0224e590;
extern "C" int func_ov031_02211410();
extern "C" void* func_ov031_02211b64(void*, void*, int);
extern "C" void func_ov031_02211864(int, int);
extern "C" int func_ov031_02210044();
extern "C" int func_ov031_0220f3f4();
extern "C" void func_ov031_0220f400(void*);
extern "C" void func_ov031_02210050(void*, void*, int);
extern "C" void func_ov031_022101ac(int);
extern "C" void func_ov031_02211440(void*);

// USA: func_ov031_02211020
extern "C" ARM void func_ov031_02211020(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)func_ov031_02211b64((void*)0x53574300, (void*)func_ov031_02211410(), 32);
    if (!var0) {
        func_ov031_02211864(9, 9 - 10);
        return;
    }
    int var1 = 0;
    data_ov031_0224e590 = (Struct_ov031_02211020*)var0;
    VectorizedMemset(var0, var1, 0x48);
    var1 += 0x60;
    data_ov031_0224e590->unknown_8_ = var0 + var1;
    var1 += ((unsigned int)(func_ov031_02210044() + 31) >> 5) << 5;
    data_ov031_0224e590->unknown_c_ = var0 + var1;
    func_ov031_0220f3f4();
    data_ov031_0224e590->unknown_4_ = arg1;
    func_ov031_0220f400(data_ov031_0224e590->unknown_c_);
    func_ov031_02210050(data_ov031_0224e590->unknown_8_, arg0, data_ov031_0224e590->unknown_4_);
    func_ov031_022101ac((int)func_ov031_02211440);
}
