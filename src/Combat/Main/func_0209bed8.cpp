#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_0209c08c {
    unsigned short unknown_0_[0xc];
    unsigned short unknown_18_;
};
extern "C" void func_0209c08c(struct Struct_0209c08c* arg0, unsigned short arg1);

struct Struct_0209bed8 {
    struct Struct_0209c08c* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    void* unknown_8_;
};

extern struct Struct_0209bed8* data_02109bc8;

// USA: func_0209bed8
extern "C" ARM bool func_0209bed8(struct Struct_0201c1c8* arg0, int arg1) {
    if (data_02109bc8->unknown_8_ == 0) {
        return true;
    }
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    if (var0 != data_02109bc8->unknown_6_) {
        return true;
    }

    struct Struct_0201c1c8* var1 = arg0 + 1;
    arg0 += 2;
    int var2 = ((Script::Parameter*)var1)->ToInt();
    int var3 = (var2 >> 24) & 0xf;
    int var4 = (var2 >> 16) & 0xf;
    int var5 = (var2 >> 8) & 0xf;
    int var6 = var2 & 0xf;
    int var7 = var3 * 100 + var4;
    int var8 = var5 * 100 + var6;

    int var9 = 0;
    if (var7 <= data_02109bc8->unknown_4_ && data_02109bc8->unknown_4_ <= var8) {
        data_02109bc8->unknown_8_ = 0;
        var9 = 1;
    } else if (var3 == 0 && var4 == 0 && var5 == 0 && var6 == 0) {
        var9 = 1;
    }
    if (var9 != 0) {
        for (int var10 = 0; var10 < arg1 - 2; var10++) {
            int var11 = ((Script::Parameter*)arg0)->ToInt();
            arg0++;
            unsigned short var12 = (unsigned short)(var11 >> 16);
            unsigned short var13 = (unsigned short)var11;
            if (var12 != 0) {
                func_0209c08c(data_02109bc8->unknown_0_, var12);
            }
            if (var13 != 0) {
                func_0209c08c(data_02109bc8->unknown_0_, var13);
            }
        }
    }
    return true;
}
