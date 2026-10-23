#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_0208beb4(unsigned char* arg0);
extern "C" void func_0208bb78(void* arg0, int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern AllocatorUnion data_02114e20;

struct Struct_ov001_02154e40 {
    char unknown_0_[0xa];
    unsigned short unknown_a_;
    char unknown_c_[0x13 - 0xc];
    unsigned char unknown_13_;
    char unknown_14_[0x50 - 0x14];
    unsigned short unknown_50_;
#if defined(jpn)
    char unknown_52_[0x11c - 0x52];
#else
    char unknown1_52_[0x120 - 0x52];
#endif
    void* unknown_120_;
    char unknown_124_[0x138 - 0x124];
    SafeAllocator* unknown_138_;
};

// USA: func_ov001_02154e40
extern "C" ARM int func_ov001_02154e40(struct Struct_ov001_02154e40* arg0) {
    GameState* var0 = GameState::GetInstance();

    if (!(arg0->unknown_50_ & 0x8) && arg0->unknown_138_ != 0 && arg0->unknown_120_ != 0) {
        func_0208beb4((unsigned char*)arg0->unknown_120_);
        unsigned int var1 = var0->GetTickCount();
        func_0208bb78(arg0->unknown_120_, var1);

        if (*(short*)((char*)arg0->unknown_120_ + 0xd2) >= 0) {
            return arg0->unknown_a_;
        }

        void* var2 = (void*)arg0->unknown_138_->GetSignedAllocator();
        if (var2) {
            arg0->unknown_138_->Destroy();
            func_02012da4(&data_02114e20, var2);
            arg0->unknown_138_ = 0;
        }
        arg0->unknown_120_ = 0;
    }

    Struct_0208cb08* var3 = func_02094a00();
    unsigned char var4 = 1;
    if (arg0->unknown_13_ != 0) {
        var4 = 0;
    }
    func_02094b40(var3);
    func_02094ab0(var3);
    func_02094b2c(var3, 0x6f, (char*)arg0 + 0x62, 1, var4);
    return 0xd;
}
