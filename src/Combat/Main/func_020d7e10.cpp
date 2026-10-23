#include <globaldefs.h>

#include <std_library_functions.h>

#include "Resource/TextQueue.h"

extern "C" int func_ov017_021959b4(void);

struct Struct_020d7b04_2 {
#if defined(jpn)
    char unknown_0_[0x4f];
#else
    char unknown_0_[0x6f];
#endif
    unsigned char unknown_6f_;
};

struct Struct_020d7e10 {
    Struct_020d7b04_2 unknown_0_[3];
    unsigned char unknown_150_0_ : 6;
    unsigned char unknown_150_6_ : 1;
    unsigned char unknown_150_7_ : 1;
    unsigned char unknown_151_;
    unsigned short unknown_152_;
};

#if defined(jpn)
#define QUEUE_STYLE_MASK 0x7f
#else
#define QUEUE_STYLE_MASK 0x3f
#endif

// USA: func_020d7e10
#if defined(jpn)
extern "C" ARM void func_020d7e10(void *arg0, void *arg1, int arg2, int arg3, unsigned char arg4) {
#else
extern "C" ARM void func_020d7e10(void *arg0, void *arg1, int arg2, int arg3, unsigned char arg4,
                                  unsigned char arg5) {
#endif
    Struct_020d7e10 *var0 = static_cast<Struct_020d7e10 *>(arg0);
    const char *var1       = static_cast<const char *>(arg1);
    if (func_ov017_021959b4()) return;
    unsigned int var2 = var0->unknown_150_0_;
    if (var2 != 0 && arg4 != 0 && strcmp(var0->unknown_0_[0].unknown_0_, var1) == 0) return;
    if (var2 < 3) {
        strcpy(var0->unknown_0_[var2].unknown_0_, var1);
        Struct_020d7b04_2 *var3 = &var0->unknown_0_[var0->unknown_150_0_];
        var3->unknown_6f_           = (var3->unknown_6f_ & ~QUEUE_STYLE_MASK) | (arg2 & QUEUE_STYLE_MASK);
        var3                  = &var0->unknown_0_[var0->unknown_150_0_];
        var3->unknown_6f_           = (var3->unknown_6f_ & ~0x80) | ((arg3 & 1) << 7);
#if !defined(jpn)
        var3                  = &var0->unknown_0_[var0->unknown_150_0_];
        var3->unknown_6f_           = (var3->unknown_6f_ & ~0x40) | ((arg5 & 1) << 6);
#endif
        var0->unknown_150_0_++;
        if (var0->unknown_152_ > 1000) var0->unknown_152_ %= 1000;
        return;
    }
    if (var0->unknown_152_ != 0) {
        var0->unknown_152_ = 0;
        if (var0->unknown_150_0_ != 0) {
            memcpy(&var0->unknown_0_[0], &var0->unknown_0_[1], sizeof(Struct_020d7b04_2));
            memcpy(&var0->unknown_0_[1], &var0->unknown_0_[2], sizeof(Struct_020d7b04_2));
            var0->unknown_150_0_--;
        }
    }
    if (var0->unknown_150_0_ >= 3) return;
    strcpy(var0->unknown_0_[var0->unknown_150_0_].unknown_0_, var1);
    Struct_020d7b04_2 *var4 = &var0->unknown_0_[var0->unknown_150_0_];
    var4->unknown_6f_           = (var4->unknown_6f_ & ~QUEUE_STYLE_MASK) | (arg2 & QUEUE_STYLE_MASK);
    var4                  = &var0->unknown_0_[var0->unknown_150_0_];
    var4->unknown_6f_           = (var4->unknown_6f_ & ~0x80) | ((arg3 & 1) << 7);
#if !defined(jpn)
    var4                  = &var0->unknown_0_[var0->unknown_150_0_];
    var4->unknown_6f_           = (var4->unknown_6f_ & ~0x40) | ((arg5 & 1) << 6);
#endif
    var0->unknown_150_0_++;
}
