#include <globaldefs.h>
struct Struct_ov031_02202e44 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};
struct Struct_ov031_0224c980_4 { char unknown_0_[0x40]; void (*unknown_40_)(void*); char unknown_44_[0xc]; unsigned int unknown_50_; };
extern Struct_ov031_0224c980_4 data_ov031_0224c980;
extern "C" int func_ov031_022007a4(unsigned int);
extern "C" unsigned int func_ov031_02200684(void*, unsigned int);
extern "C" void func_ov031_02200e38(void*, unsigned int, int);
extern "C" Struct_ov031_02202e44* func_ov031_02202b78(Struct_ov031_02202e44*, int*);
extern "C" void func_ov031_0220296c(Struct_ov031_02202e44*, void*, unsigned int);
extern "C" void func_ov031_02201bb4(Struct_ov031_02202e44*, void*, unsigned int);
extern "C" void func_ov031_0220284c(Struct_ov031_02202e44*, void*, unsigned int);
static inline unsigned short inline_ov031_02202e44(unsigned short arg0) { return (arg0 >> 8) | (arg0 << 8); }
#define SourceAddress02202e44(packet) (((unsigned short)((packet->unknown_c_ >> 8) | (packet->unknown_c_ << 8)) << 16) | (unsigned short)((packet->unknown_e_ >> 8) | (packet->unknown_e_ << 8)))
#define DestinationAddress02202e44(packet) (((unsigned short)((packet->unknown_10_ >> 8) | (packet->unknown_10_ << 8)) << 16) | (unsigned short)((packet->unknown_12_ >> 8) | (packet->unknown_12_ << 8)))

// USA: func_ov031_02202e44
extern "C" ARM void func_ov031_02202e44(Struct_ov031_02202e44* arg0, unsigned int arg1) {
    unsigned int var0 = (inline_ov031_02202e44(arg0->unknown_c_) << 16) | inline_ov031_02202e44(arg0->unknown_e_);
    unsigned int var1 = (inline_ov031_02202e44(arg0->unknown_10_) << 16) | inline_ov031_02202e44(arg0->unknown_12_);
    if (var1 != var0) {
        if (!func_ov031_022007a4(var1)) return;
        if (arg1 < inline_ov031_02202e44(arg0->unknown_2_)) return;
        if (func_ov031_02200684(arg0, (arg0->unknown_0_ & 15) << 2) != 0xffff) return;
        if (data_ov031_0224c980.unknown_50_ == DestinationAddress02202e44(arg0))
            func_ov031_02200e38((char*)arg0 - 8, SourceAddress02202e44(arg0), 1);
    }
    int var2;
    arg0 = func_ov031_02202b78(arg0, &var2);
    if (!arg0) return;
    void* var3 = (char*)arg0 + ((arg0->unknown_0_ & 15) << 2);
    unsigned int var4 = inline_ov031_02202e44(arg0->unknown_2_) - ((arg0->unknown_0_ & 15) << 2);
    if (arg0->unknown_9_ == 17) func_ov031_0220296c(arg0, var3, var4);
    else if (data_ov031_0224c980.unknown_50_) {
        if (arg0->unknown_9_ == 1) func_ov031_02201bb4(arg0, var3, var4);
        else if (arg0->unknown_9_ == 6) func_ov031_0220284c(arg0, var3, var4);
    }
    if (var2) data_ov031_0224c980.unknown_40_((char*)arg0 - 14);
}
