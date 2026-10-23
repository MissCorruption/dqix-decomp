#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_020dfec0 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    void* unknown_4_;
    void* unknown_8_;
};

extern "C" int func_020dfec0(Struct_020dfec0* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);

#if defined(jpn)
extern const char data_020f143c[];
#endif
extern const char data_020f1368[];
extern const char data_020f1382[];

struct Struct_02092f80 {
    SafeAllocator unknown_0_;
    Struct_020dfec0 unknown_14_;
    unsigned char unknown_20_[0xc];
    int unknown_2c_;
    unsigned char unknown_30_[0x34 - 0x30];
    unsigned char unknown_34_;
    unsigned char unknown_35_;
    unsigned char unknown_36_;
    unsigned char unknown_37_;
};

// USA: func_02092f80
extern "C" ARM void func_02092f80(Struct_02092f80* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    unsigned char var1 = arg0->unknown_35_;

    if (var1 == 0) {
#if defined(jpn)
        arg0->unknown_2c_ = var0->QueueLoadFile(data_020f143c, NULL);
#else
        arg0->unknown_2c_ = var0->QueueLoadFileInGP2(data_020f1368, data_020f1382, NULL);
#endif
        arg0->unknown_35_++;
    } else if (var1 == 1) {
        if (var0->GetTaskStatus(arg0->unknown_2c_)) {
            void* var2;
            unsigned int var3;
            var0->GetLoadedFileByID(arg0->unknown_2c_, &var2, &var3);
            arg0->unknown_0_.Reset();
            func_020dfec0(&arg0->unknown_14_, &arg0->unknown_0_, var2, var3);
            var0->RemoveTask(arg0->unknown_2c_);
            arg0->unknown_2c_ = -1;
            arg0->unknown_35_++;
        }
    } else if (var1 == 2) {
        arg0->unknown_34_ = 3;
        arg0->unknown_35_ = 0;
        if (arg0->unknown_37_ & 0x1) arg0->unknown_34_ = 1;
        if (!(arg0->unknown_37_ & 0x8)) arg0->unknown_37_ |= 0x4;
        arg0->unknown_36_ = 0;
    }
}
