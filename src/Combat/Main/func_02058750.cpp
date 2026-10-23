#include <globaldefs.h>
#include <NitroSDK/Memory/SignedAllocator.h>

struct Struct_020546c8;
struct Struct_02058750_5 { char unknown_0_[0xb0]; SignedAllocatorList unknown_b0_[2]; };
struct Struct_02058750 { unsigned int unknown_0_; unsigned int unknown_4_; };
struct Struct_02058750_2 { Struct_02058750* unknown_0_; };
struct Struct_02058750_3 { char unknown_0_[8]; unsigned char unknown_8_[2]; };
struct Struct_02058750_4 {
    char unknown_0_[4];
    unsigned int unknown_4_;
    char unknown_8_[0x20];
    Struct_02058750_5* unknown_28_;
    char unknown_2c_[4];
    float unknown_30_;
    float unknown_34_;
    float unknown_38_;
    float unknown_3c_;
    float unknown_40_;
    char unknown_44_[0x20];
    unsigned short unknown_64_[2];
};
extern "C" void* func_02055120(Struct_020546c8*);

// USA: func_02058750
extern "C" ARM void func_02058750(Struct_02058750_4* arg0) {
    Struct_02058750_3* var0 = (Struct_02058750_3*)func_02055120((Struct_020546c8*)arg0->unknown_28_);
    if (var0->unknown_8_[0] > 1 && var0->unknown_8_[0] > arg0->unknown_64_[0]) {
        Struct_02058750_2* var1 = (Struct_02058750_2*)arg0->unknown_28_->unknown_b0_[0].GetNthElement(arg0->unknown_64_[0]);
        if (var1 && var1->unknown_0_->unknown_0_ < arg0->unknown_4_) {
            arg0->unknown_64_[0]++;
            if (arg0->unknown_64_[0] >= var0->unknown_8_[0]) {
                arg0->unknown_34_ = 0;
                arg0->unknown_38_ = 0;
                arg0->unknown_3c_ = 0;
            } else {
                Struct_02058750_2* var2 = (Struct_02058750_2*)arg0->unknown_28_->unknown_b0_[0].GetNthElement(arg0->unknown_64_[0]);
                if (var2) {
                    unsigned int var3;
                    unsigned int var4;
                    unsigned int var5;
                    unsigned int var6;
                    unsigned int var7;
                    unsigned int var8;
                    Struct_02058750* var9;
                    Struct_02058750* var10;
                    var9 = var1->unknown_0_;
                    var10 = var2->unknown_0_;
                    var3 = var9->unknown_4_ & 0x1f;
                    var4 = (var9->unknown_4_ & 0x3e0) >> 5;
                    var5 = (var9->unknown_4_ & 0x7c00) >> 10;
                    var6 = var10->unknown_4_ & 0x1f;
                    var7 = (var10->unknown_4_ & 0x3e0) >> 5;
                    var8 = (var10->unknown_4_ & 0x7c00) >> 10;
                    arg0->unknown_34_ = (float)(var6 - var3) / (float)(int)(var10->unknown_0_ - var9->unknown_0_);
                    arg0->unknown_38_ = (float)(var7 - var4) / (float)(int)(var2->unknown_0_->unknown_0_ - var1->unknown_0_->unknown_0_);
                    arg0->unknown_3c_ = (float)(var8 - var5) / (float)(int)(var2->unknown_0_->unknown_0_ - var1->unknown_0_->unknown_0_);
                }
            }
        }
    }
    if (var0->unknown_8_[1] > 1 && var0->unknown_8_[1] > arg0->unknown_64_[1]) {
        Struct_02058750_2* var11 = (Struct_02058750_2*)arg0->unknown_28_->unknown_b0_[1].GetNthElement(arg0->unknown_64_[1]);
        if (var11 && (float)var11->unknown_0_->unknown_0_ * arg0->unknown_30_ < (float)arg0->unknown_4_) {
            arg0->unknown_64_[1]++;
            if (arg0->unknown_64_[1] >= var0->unknown_8_[1]) {
                arg0->unknown_40_ = 0;
            } else {
                Struct_02058750_2* var12 = (Struct_02058750_2*)arg0->unknown_28_->unknown_b0_[1].GetNthElement(arg0->unknown_64_[1]);
                if (var12) {
                    Struct_02058750* var13 = var11->unknown_0_;
                    float var14 = (float)var13->unknown_0_ * arg0->unknown_30_;
                    Struct_02058750* var15 = var12->unknown_0_;
                    float var16 = (float)var15->unknown_0_ * arg0->unknown_30_;
                    float var17 = (float)(int)(var15->unknown_4_ - var13->unknown_4_);
                    arg0->unknown_40_ = var17 / (var16 - var14);
                }
            }
        }
    }
}
