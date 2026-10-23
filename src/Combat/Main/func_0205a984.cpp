#include <globaldefs.h>
#include <Memory/SafeAllocator.h>

struct Struct_0205a984_5 {
    unsigned short* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_0205a984 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    Struct_0205a984_5* unknown_c_;
};
struct Struct_0205a984_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    Struct_0205a984* unknown_4_;
};
struct Struct_0205a984_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};
struct Struct_0205a984_4 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    Struct_0205a984_3* unknown_c_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned char unknown_14_;
    unsigned char unknown_15_;
};
struct Struct_0205a984_6 {
    Struct_0205a984_4* unknown_0_;
    unsigned short unknown_4_;
};
struct Struct_0205a984_7 {
    char unknown_0_[0x3c];
    Struct_0205a984_6* unknown_3c_;
};

extern "C" int func_020aff00(void*, void**);
extern "C" Struct_0205a984* func_020b005c(Struct_0205a984_2*, unsigned int);

// USA: func_0205a984
extern "C" ARM int func_0205a984(Struct_0205a984_7* arg0, void* arg1, unsigned int arg2, SafeAllocator* arg3) {
    void* var0 = arg1;
    Struct_0205a984_2* var1;
    if (!var0) var0 = 0;
    else if (!arg2) var0 = 0;
    else if (!func_020aff00(var0, (void**)&var1)) var0 = 0;
    if (!var0) return 1;
    Struct_0205a984_4* var2;
    Struct_0205a984* var3;
    unsigned short var4;
    unsigned short var5;
    Struct_0205a984_4* var6;
    Struct_0205a984_6* var7 = arg0->unknown_3c_;
    if (var7 && arg3) {
        var5 = var1->unknown_0_;
        var6 = (Struct_0205a984_4*)arg3->Allocate(var5 * sizeof(Struct_0205a984_4));
        var7->unknown_0_ = var6;
        var7->unknown_4_ = var5;
        for (var4 = 0; var4 < var5; ++var4) {
            var3 = func_020b005c(var1, var4);
            if (var3) {
                var2 = &var6[var4];
                var2->unknown_0_ = 0;
                var2->unknown_6_ = 0;
                var2->unknown_4_ = 0;
                var2->unknown_8_ = 0;
                var2->unknown_a_ = 0;
                var2->unknown_c_ = 0;
                var2->unknown_10_ = 0;
                var2->unknown_12_ = 0;
                var2->unknown_14_ = 0xff;
                var2->unknown_15_ = 1;
                var2->unknown_0_ = var3->unknown_8_;
                var2->unknown_a_ = var3->unknown_0_;
                var2->unknown_8_ = var4;
                Struct_0205a984_3* var8 = (Struct_0205a984_3*)arg3->Allocate(var2->unknown_a_ * sizeof(Struct_0205a984_3));
                var2->unknown_c_ = var8;
                for (unsigned short var9 = 0; var9 < var2->unknown_a_; ++var9) {
                    Struct_0205a984_5* var10 = &var3->unknown_c_[var9];
                    if (var10) {
                        Struct_0205a984_3* var11 = &var8[var9];
                        var11->unknown_0_ = 0;
                        var11->unknown_2_ = 0;
                        var11->unknown_0_ = var10->unknown_4_;
                        var11->unknown_2_ = *var10->unknown_0_;
                    }
                }
            }
        }
    }
    return 0;
}
