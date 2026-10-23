#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void func_ov023_021f6ed8(void* arg0);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);

extern int data_ov023_021fff24;

struct Struct_ov023_021f8cf4 {
    char unknown_0_[0x4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[0x10 - 0xc];
    unsigned int unknown_10_;
    char unknown_14_[0x1c - 0x14];
    unsigned int unknown_1c_;
    void* unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
    unsigned int unknown_2c_;
    unsigned int unknown_30_;
    unsigned int unknown_34_;
    unsigned int unknown_38_;
    char unknown_3c_[0x5e - 0x3c];
    unsigned short unknown_5e_;
    unsigned char unknown_60_;
    unsigned char unknown_61_;
    unsigned char unknown_62_;
};

// USA: func_ov023_021f8cf4
extern "C" ARM int func_ov023_021f8cf4(struct Struct_ov023_021f8cf4* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 7;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_24_ = arg4;
    arg0->unknown_26_ = arg5;
    arg0->unknown_28_ = 0;
    arg0->unknown_2a_ = 0;
    arg0->unknown_2c_ = 0;
    arg0->unknown_30_ = 0;
    arg0->unknown_34_ = 0;
    arg0->unknown_38_ = 1;
    arg0->unknown_1c_ = 2;

    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    if (var0 == NULL) {
        return 0;
    }

    int var1 = arg5 * (arg4 * 2);
    SafeAllocator* var2 = (SafeAllocator*)((char*)var0 + 4);
    arg0->unknown_20_ = var2->Allocate(var1);
    if (arg0->unknown_20_ == NULL) {
        return 0;
    }
    memset(arg0->unknown_20_, 0, var1);

    unsigned short* var3 = (unsigned short*)((char*)arg0 + 0x3c);
    var3[0] = 0;
    var3[1] = 0;
    var3[2] = 0;
    var3[3] = 0;
    var3[4] = 0;
    var3[5] = 0;
    var3[6] = 0;
    var3[7] = 0;
    var3[8] = 0;
    var3[9] = 0;
    var3[10] = 0;
    var3[11] = 0;
    var3[12] = 0;
    var3[13] = 0;
    var3[14] = 0;
    var3[15] = 0;

    data_ov023_021fff24 = 0x1f4;

    var3[16] = 0;

    arg0->unknown_5e_ = 1;
    arg0->unknown_60_ = 1;
    arg0->unknown_61_ = 1;
    arg0->unknown_62_ = 0;
    return 1;
}
