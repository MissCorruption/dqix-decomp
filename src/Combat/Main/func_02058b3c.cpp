#include <globaldefs.h>
#include <NitroSDK/Memory/SignedAllocator.h>
#include <std_library_functions.h>
struct Struct_020546c8;
struct Struct_02058b3c { char unknown_0_[0xe0]; SignedAllocatorList unknown_e0_; };
struct Struct_02058b3c_2 { unsigned int unknown_0_; float unknown_4_, unknown_8_; };
struct Struct_02058b3c_3 { Struct_02058b3c_2* unknown_0_; };
struct Struct_02058b3c_4 { char unknown_0_[8]; unsigned char unknown_8_; };
struct Struct_02058b3c_5 { char unknown_0_[4]; unsigned int unknown_4_; char unknown_8_[0x20]; Struct_02058b3c* unknown_28_; char unknown_2c_[0x20]; float unknown_4c_; char unknown_50_[0x10]; float unknown_60_; char unknown_64_[6]; unsigned short unknown_6a_; };
extern "C" void* func_02055150(Struct_020546c8*);
// USA: func_02058b3c
extern "C" ARM void func_02058b3c(Struct_02058b3c_5* arg0) {
    Struct_02058b3c_4* var0 = (Struct_02058b3c_4*)func_02055150((Struct_020546c8*)arg0->unknown_28_);
    if (var0->unknown_8_ <= 1 || var0->unknown_8_ <= arg0->unknown_6a_) return;
    Struct_02058b3c_3* var1 = (Struct_02058b3c_3*)arg0->unknown_28_->unknown_e0_.GetNthElement(arg0->unknown_6a_);
    if (!var1 || var1->unknown_0_->unknown_0_ >= arg0->unknown_4_) return;
    arg0->unknown_6a_++;
    if (arg0->unknown_6a_ >= var0->unknown_8_) { arg0->unknown_4c_ = 0; return; }
    Struct_02058b3c_3* var2 = (Struct_02058b3c_3*)arg0->unknown_28_->unknown_e0_.GetNthElement(arg0->unknown_6a_);
    if (!var2) return;
    Struct_02058b3c_2* var3 = var2->unknown_0_;
    int var4 = rand();
    int var5 = (int)var3->unknown_8_;
    float var6 = (float)((var4 & (var5 << 1)) - (int)var3->unknown_8_) / 100.0f;
    arg0->unknown_60_ = var3->unknown_4_ + var3->unknown_4_ * var6;
    arg0->unknown_4c_ = arg0->unknown_60_ / (float)(int)(var2->unknown_0_->unknown_0_ - var1->unknown_0_->unknown_0_);
    if (arg0->unknown_4c_ < 0.0f) arg0->unknown_4c_ += 360.0f;
    if (arg0->unknown_4c_ > 360.0f) arg0->unknown_4c_ -= 360.0f;
}
