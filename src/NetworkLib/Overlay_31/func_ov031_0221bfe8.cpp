#include <globaldefs.h>

struct Struct_ov031_0221bfe8 {
    unsigned long long unknown_0_;
    unsigned long long unknown_8_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};
struct Struct_020cf294 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; unsigned int unknown_c_; };
struct Struct_020cf294_2 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; };

extern "C" void func_ov031_0221ae00(Struct_ov031_0221bfe8* arg0);
extern "C" void func_020cf020(void);
extern "C" int func_020cf0fc(int arg0);
extern "C" int func_020cf1a8(int arg0);
extern "C" long long func_020cf990(int arg0, unsigned char* arg1);
int Is64BitTimerInitialized();
unsigned long long GetCurrentTimestamp(void);
extern "C" void func_020c99ac(void* arg0);
extern "C" unsigned long long func_ov031_0221be64(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);

struct Struct_ov031_0221bfe8_2 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; };

static inline void inline_ov031_0221bfe8_5(Struct_ov031_0221bfe8_2* arg0, unsigned int arg1) {
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = 1566083941;
    arg0->unknown_8_ = 2531011;
}
static inline unsigned short inline_ov031_0221bfe8(Struct_ov031_0221bfe8_2* arg0, unsigned short arg1) {
    arg0->unknown_0_ = arg0->unknown_4_ * arg0->unknown_0_ + arg0->unknown_8_;
    if (arg1) {
        return (unsigned short)(((arg0->unknown_0_ >> 16) * arg1) >> 16);
    } else {
        return (unsigned short)(arg0->unknown_0_ >> 16);
    }
}

static inline int inline_ov031_0221bfe8_2(Struct_020cf294* arg0) { return func_020cf0fc((int)arg0); }
static inline int inline_ov031_0221bfe8_3(Struct_020cf294_2* arg0) { return func_020cf1a8((int)arg0); }
static inline long long inline_ov031_0221bfe8_4(const Struct_020cf294* arg0, const Struct_020cf294_2* arg1) {
    return func_020cf990((int)arg0, (unsigned char*)arg1);
}

// USA: func_ov031_0221bfe8
extern "C" ARM int func_ov031_0221bfe8(Struct_ov031_0221bfe8* arg0) {
    unsigned char var0[6];
    Struct_020cf294 var1;
    Struct_020cf294_2 var2;
    long long var3;
    Struct_ov031_0221bfe8_2 var4;
    unsigned char var5;
    int var6;

    func_ov031_0221ae00(arg0);
    func_020cf020();
    if (inline_ov031_0221bfe8_2(&var1) != 0) return 0;
    if (inline_ov031_0221bfe8_3(&var2) != 0) return 0;
    var3 = inline_ov031_0221bfe8_4(&var1, &var2);
    if (var3 < 0) return 0;
    if (Is64BitTimerInitialized()) var3 += (unsigned int)GetCurrentTimestamp;
    func_020c99ac(var0);
    var5 = (unsigned int)(var0[0] << 16 | var0[1] << 8 | var0[2]) != 0x9bf ? 1 : 0;
    var6 = var0[3] << 16 | var0[4] << 8 | var0[5];
    inline_ov031_0221bfe8_5(&var4, (unsigned int)var3);
    arg0->unknown_10_ = inline_ov031_0221bfe8(&var4, 1000);
    arg0->unknown_0_ = 0;
    if (arg0->unknown_12_ == 0) {
        arg0->unknown_8_ = 0;
        if (arg0->unknown_8_ == 0) {
            do {
                inline_ov031_0221bfe8(&var4, 0);
                if (var4.unknown_0_ == 0) {
                    do {
                        inline_ov031_0221bfe8(&var4, 0);
                    } while (var4.unknown_0_ == 0);
                }
                arg0->unknown_12_ = (unsigned short)var4.unknown_0_;
                arg0->unknown_8_ = func_ov031_0221be64(arg0->unknown_12_, var6, var5, 0);
            } while (arg0->unknown_8_ == 0);
        }
    } else {
        arg0->unknown_8_ = 0;
        if (arg0->unknown_8_ == 0) {
            do {
                arg0->unknown_12_++;
                arg0->unknown_8_ = func_ov031_0221be64(arg0->unknown_12_, var6, var5, 0);
            } while (arg0->unknown_8_ == 0);
        }
    }
    return 1;
}
