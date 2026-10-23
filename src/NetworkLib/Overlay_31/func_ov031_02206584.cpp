#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_02206584_3 {
    char unknown_0_[0x102];
    unsigned short unknown_102_;
    BlockedContextList unknown_104_;
};
struct Struct_ov031_02206584 {
    char unknown_0_[0x48];
    int unknown_48_;
    char* unknown_4c_;
    char unknown_50_[0x18];
    Struct_ov031_02206584_3* unknown_68_;
    char unknown_6c_[4];
    short unknown_70_;
    char unknown_72_;
    signed char unknown_73_;
};
struct Struct_ov031_02206584_2 {
    int unknown_0_;
    Struct_ov031_02206584* unknown_4_;
    char unknown_8_[8];
    char* unknown_10_;
    int unknown_14_;
    char* unknown_18_;
    int unknown_1c_;
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    unsigned int unknown_28_;
};
extern "C" void func_ov031_022031bc(int, unsigned short, unsigned int);
extern "C" void func_ov031_02203424();
extern "C" int func_ov031_022066b4(int);
extern "C" int func_ov031_02206758(char*, int, Struct_ov031_02206584_2*);
extern "C" int func_ov031_02203a84(char*, int);

static inline bool inline_ov031_02206584(Struct_ov031_02206584* arg0) {
    return arg0->unknown_73_ == 0 || arg0->unknown_73_ == 4;
}

// USA: func_ov031_02206584
extern "C" ARM int func_ov031_02206584(Struct_ov031_02206584_2* arg0) {
    char* var0;
    Struct_ov031_02206584* var1;
    Struct_ov031_02206584_3* var2;
    int var3;
    var1 = arg0->unknown_4_;
    var3 = 0;
    var2 = var1->unknown_68_;
    if (inline_ov031_02206584(var1)) {
        if (!(var1->unknown_70_ & 4)) goto failed;
    }
    if (arg0->unknown_28_ != 0) {
        func_ov031_022031bc(arg0->unknown_24_, arg0->unknown_26_, arg0->unknown_28_);
    }
    {
        var0 = var1->unknown_4c_;
        int var4 = (var1->unknown_73_ == 0 || var1->unknown_73_ == 4) ? 0x36 : 0x2a;
        int var5;
        if (var1->unknown_73_ == 0 || var1->unknown_73_ == 4) var5 = func_ov031_022066b4(var1->unknown_48_ - var4);
        else var5 = var1->unknown_48_ - var4;
        for (;;) {
            int var6 = func_ov031_02206758(var0 + var4, var5, arg0);
            if (var6 <= 0) break;
            int var7 = func_ov031_02203a84(var0 + var4, var6);
            if (var7 <= 0) {
                if (inline_ov031_02206584(var1)) {
                    var1->unknown_70_ &= ~0xe;
                    var1->unknown_70_ |= 0x80;
                    func_ov031_02203424();
                }
                var3 = -76;
                break;
            }
            var3 += var7;
        }
        goto completed;
    }
failed:
    var3 = -76;
completed:
    var2->unknown_102_ = arg0->unknown_20_;
    UnblockContexts(&var2->unknown_104_);
    return var3;
}
