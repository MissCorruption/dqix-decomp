#include <globaldefs.h>

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

extern "C" void func_020ca408(void* dst, void* src, int size);
extern void* data_02110370;

struct Struct_020bd368 {
    int unknown_0_;    // +0x0
    char unknown_4_[4];
    void* unknown_8_;   // +0x8
    char unknown_c_[4];
};

struct Struct_020bd368_2 {
    char unknown_0_[8];
    unsigned int unknown_8_;        // +0x8
    struct Struct_020bd368 unknown_c_[1]; // +0xc
};

struct Struct_020bd368_3 {
    char unknown_0_[0x10];
    int unknown_10_;               // +0x10
    char unknown_14_[4];
    int unknown_18_;                // +0x18
    char unknown_1c_[4];
    int unknown_20_;                 // +0x20
    char unknown_24_[0xc];
    int unknown_30_;                  // +0x30
    char unknown_34_[0x50];
    struct Struct_020bd368_2* unknown_84_; // +0x84
    void* unknown_88_;                      // +0x88
    void* unknown_8c_;                       // +0x8c
    int unknown_90_;                          // +0x90
};

// USA: func_020bd368
extern "C" ARM void func_020bd368(struct Struct_020bd368_3* arg0, char* arg1) {
    func_020ca408(arg1, arg0, 0x30);
    arg0->unknown_8c_ = arg0->unknown_18_ == 0 ? 0 : arg1 + arg0->unknown_18_;
    arg0->unknown_84_ = (struct Struct_020bd368_2*)(arg0->unknown_20_ == 0 ? 0 : arg1 + arg0->unknown_20_);
    arg0->unknown_88_ = arg0->unknown_10_ == 0 ? 0 : arg1 + arg0->unknown_10_;
    arg0->unknown_90_ = 0;
    unsigned int var0 = 0;
    if (var0 < arg0->unknown_84_->unknown_8_) {
        int var1 = 0;
        do {
            struct Struct_020bd368* var2 = (struct Struct_020bd368*)((char*)arg0->unknown_84_ + 0xc + var1);
            int var3 = var2->unknown_0_;
            var2->unknown_8_ = var3 == 0 ? 0 : arg1 + var3;
            var1 += 0x10;
            var0++;
        } while (var0 < arg0->unknown_84_->unknown_8_);
    }
    arg0->unknown_30_ = 0;
    data_02110370 = arg0;
}
