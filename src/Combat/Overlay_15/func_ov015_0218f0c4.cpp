#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern AllocatorUnion data_02114e20;
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

struct Struct_ov015_0218eef0;
extern "C" void func_ov015_0218eef0(struct Struct_ov015_0218eef0* arg0);

struct Struct_ov015_0218f0c4 {
    unsigned int unknown_0_;
    void* unknown_4_;
    SafeAllocator* unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    void* unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_[3];
    void* unknown_20_;
    void* unknown_24_;
    void* unknown_28_;
};

// USA: func_ov015_0218f0c4
extern "C" ARM void func_ov015_0218f0c4(void* arg0) {
    Struct_ov015_0218f0c4* var0 = (Struct_ov015_0218f0c4*)arg0;

    if (var0->unknown_8_ != 0) {
        if (var0->unknown_1c_ == 0 || var0->unknown_1c_ == 1) {
            SafeAllocator* var1 = var0->unknown_8_;
            for (int var2 = 0; var2 < 10; var2++, var1 = (SafeAllocator*)((char*)var1 + 0x14)) {
                void* var3 = var1->GetSignedAllocator();
                var1->Destroy();
                func_02012da4(&data_02114e20, var3);
            }
        } else {
            void* var4 = var0->unknown_8_->GetSignedAllocator();
            var0->unknown_8_->Destroy();
            func_02012da4(&data_02114e20, var4);
        }
        func_02012da4(&data_02114e20, var0->unknown_8_);
    }

    if (var0->unknown_20_ != 0) func_02012da4(&data_02114e20, var0->unknown_20_);
    if (var0->unknown_14_ != 0) func_02012da4(&data_02114e20, var0->unknown_14_);
    if (var0->unknown_24_ != 0) func_02012da4(&data_02114e20, var0->unknown_24_);
    if (var0->unknown_28_ != 0) func_02012da4(&data_02114e20, var0->unknown_28_);

    if (var0->unknown_4_ != 0) {
        *((unsigned char*)var0->unknown_4_ + 4) = 0;
    }

    func_ov015_0218eef0((struct Struct_ov015_0218eef0*)var0);
}
