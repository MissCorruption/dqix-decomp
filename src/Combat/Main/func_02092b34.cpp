#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_02092b34 {
    SafeAllocator unknown_0_;
    char unknown_14_[0x2c - 0x14];
    int unknown_2c_;
    short unknown_30_;
    short unknown_32_;
    unsigned char unknown_34_;
    unsigned char unknown_35_;
    unsigned char unknown_36_;
    unsigned char unknown_37_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
};

extern "C" int func_020421a0();
extern "C" void func_02043204(char* arg0);
extern "C" void func_02043124(char* arg0);
struct Struct_02092aa4;
extern "C" void func_02092aa4(Struct_02092aa4* arg0, int arg1);

// USA: func_02092b34
extern "C" ARM void func_02092b34(struct Struct_02092b34* arg0) {
    if (arg0->unknown_2c_ >= 0) {
        int var0 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_2c_));
        arg0->unknown_2c_ = -1;
    }
    void* var1 = (void*)func_020421a0();
    func_02043204((char*)var1);
    func_02043124((char*)var1);
    if (!(arg0->unknown_37_ & 8)) {
        Struct_0208cb08* var2 = func_02094a00();
        func_02094ab0(var2);
        func_02094b34(var2, 0x6f, 0x1388, 1, 1);
    }
    if (arg0->unknown_0_.GetSignedAllocator() != 0) {
        arg0->unknown_0_.Destroy();
    }
    func_02092aa4((struct Struct_02092aa4*)arg0, 0);
}
