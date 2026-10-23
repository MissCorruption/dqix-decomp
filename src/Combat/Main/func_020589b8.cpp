#include <globaldefs.h>
#include <NitroSDK/Memory/SignedAllocator.h>
#include <std_library_functions.h>

struct Struct_020546c8;
struct Struct_020589b8 { char unknown_0_[0xd4]; SignedAllocatorList unknown_d4_; };
struct Struct_020589b8_2 { unsigned int unknown_0_; float unknown_4_; float unknown_8_; float unknown_c_; };
struct Struct_020589b8_3 { Struct_020589b8_2* unknown_0_; };
struct Struct_020589b8_4 { char unknown_0_[9]; unsigned char unknown_9_; };
struct Struct_020589b8_5 {
    char unknown_0_[4];
    unsigned int unknown_4_;
    char unknown_8_[0x20];
    Struct_020589b8* unknown_28_;
    char unknown_2c_[0x18];
    float unknown_44_;
    float unknown_48_;
    char unknown_4c_[0xc];
    float unknown_58_;
    float unknown_5c_;
    char unknown_60_[8];
    unsigned short unknown_68_;
};
extern "C" void* func_02055138(Struct_020546c8*);

// USA: func_020589b8
extern "C" ARM void func_020589b8(Struct_020589b8_5* arg0) {
    Struct_020589b8_4* var0 = (Struct_020589b8_4*)func_02055138((Struct_020546c8*)arg0->unknown_28_);
    if (var0->unknown_9_ <= 1 || var0->unknown_9_ <= arg0->unknown_68_) return;
    Struct_020589b8_3* var1 = (Struct_020589b8_3*)arg0->unknown_28_->unknown_d4_.GetNthElement(arg0->unknown_68_);
    if (!var1 || var1->unknown_0_->unknown_0_ >= arg0->unknown_4_) return;
    arg0->unknown_68_++;
    if (arg0->unknown_68_ >= var0->unknown_9_) {
        arg0->unknown_44_ = 0;
        arg0->unknown_48_ = 0;
        return;
    }
    Struct_020589b8_3* var2 = (Struct_020589b8_3*)arg0->unknown_28_->unknown_d4_.GetNthElement(arg0->unknown_68_);
    if (!var2) return;
    Struct_020589b8_2* var3 = var2->unknown_0_;
    int var4 = rand();
    int var5 = (int)var3->unknown_c_;
    float var6 = (float)((var4 & (var5 << 1)) - (int)var3->unknown_c_) / 100.0f;
    float var7 = arg0->unknown_58_;
    float var8 = arg0->unknown_5c_;
    arg0->unknown_58_ = var3->unknown_4_ + var3->unknown_4_ * var6;
    arg0->unknown_5c_ = var2->unknown_0_->unknown_8_ + var2->unknown_0_->unknown_8_ * var6;
    arg0->unknown_44_ = (arg0->unknown_58_ - var7) / (float)(int)(var2->unknown_0_->unknown_0_ - var1->unknown_0_->unknown_0_);
    arg0->unknown_48_ = (arg0->unknown_5c_ - var8) / (float)(int)(var2->unknown_0_->unknown_0_ - var1->unknown_0_->unknown_0_);
}
