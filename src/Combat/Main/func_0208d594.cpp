#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"
#include "Combat/ScriptElementList.h"

struct Struct_0208d51c;
extern "C" void func_0208d51c(struct Struct_0208d51c* arg0);

struct Struct_0208d594 {
    short unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    char** unknown_c_;
    char* unknown_10_;
    char* unknown_14_;
};

struct Struct_0208d594_2;
extern "C" void func_0208d928(struct Struct_0208d594_2* arg0, struct Struct_0208d594* arg1);

extern const char data_020f1244[];

extern "C" int func_020d2ff0(const char* arg0);

// USA: func_0208d594
extern "C" ARM int func_0208d594(Script::Parameter* arg0) {
    struct Struct_0208d594 var0;
    unsigned short var1 = data_02108fc0.unknown_4_->unknown_e_;
    unsigned int var2;
    unsigned char var3;
    unsigned char var4;
    int var5;
    const char* var6;
    unsigned int var7;
    Script::Parameter* var8;
    char* var9;

    func_0208d51c((struct Struct_0208d51c*)&var0);
    var0.unknown_0_ = (short)arg0->ToInt();
    if (data_02108fc0.unknown_4_->unknown_c_ != 0) {
        const short* var10 = data_02108fc0.unknown_4_->unknown_8_;
        short var11 = data_02108fc0.unknown_4_->unknown_c_;
        var5 = 0;
        for (short var12 = 0; var12 < var11; var12++) {
            if (var0.unknown_0_ == *var10) {
                var5 = 1;
            }
            var10++;
        }
        if (!var5) {
            return 1;
        }
    }

    var6 = (arg0 + 1)->ToString();
    if (var1 & 1) {
        var7 = func_020d2ff0(var6);
        if (var7 != 0) {
            var0.unknown_4_ = (char*)data_02108fc0.unknown_0_->Allocate(var7 + 1);
            var0.unknown_4_[var7] = 0;
            sprintf(var0.unknown_4_, data_020f1244, var6);
        }
    }

    var8 = arg0 + 2;
    arg0 += 3;
    var6 = var8->ToString();
    if (var1 & 2) {
        var7 = func_020d2ff0(var6);
        if (var7 != 0) {
            var0.unknown_8_ = (char*)data_02108fc0.unknown_0_->Allocate(var7 + 1);
            var0.unknown_8_[var7] = 0;
            sprintf(var0.unknown_8_, data_020f1244, var6);
        }
    }

    if (var1 & 0x3fc) {
        var0.unknown_c_ = (char**)data_02108fc0.unknown_0_->Allocate(0x20);
        for (var4 = 0; var4 < 8; var4++) {
            var0.unknown_c_[var4] = 0;
        }
    }

    var2 = 4;
    for (var3 = 0; var3 < 8; var3++) {
        var6 = arg0->ToString();
        arg0++;
        if (var1 & var2) {
            var7 = func_020d2ff0(var6);
            if (var7 != 0) {
                var0.unknown_c_[var3] = (char*)data_02108fc0.unknown_0_->Allocate(var7 + 1);
                var9 = var0.unknown_c_[var3];
                var9[var7] = 0;
                sprintf(var9, data_020f1244, var6);
            }
        }
        var2 <<= 1;
    }

    var6 = arg0->ToString();
    if (var1 & 0x400) {
        var7 = func_020d2ff0(var6);
        if (var7 != 0) {
            var0.unknown_10_ = (char*)data_02108fc0.unknown_0_->Allocate(var7 + 1);
            var0.unknown_10_[var7] = 0;
            sprintf(var0.unknown_10_, data_020f1244, var6);
        }
    }

    var6 = (arg0 + 1)->ToString();
    if (var1 & 0x800) {
        var7 = func_020d2ff0(var6);
        if (var7 != 0) {
            var0.unknown_14_ = (char*)data_02108fc0.unknown_0_->Allocate(var7 + 1);
            var0.unknown_14_[var7] = 0;
            sprintf(var0.unknown_14_, data_020f1244, var6);
        }
    }

    func_0208d928((struct Struct_0208d594_2*)data_02108fc0.unknown_4_, &var0);
    return 1;
}
