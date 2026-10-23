#include <globaldefs.h>
struct Struct_020aff0c_3 {
    unsigned char* unknown_0_;
    unsigned int unknown_4_;
};
struct Struct_020aff0c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    Struct_020aff0c_3* unknown_c_;
};
struct Struct_020aff0c_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    void* unknown_4_;
    void** unknown_8_;
};
struct Struct_020aff0c_4 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    Struct_020aff0c_2* unknown_4_;
};
struct Struct_020aff0c_5 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    Struct_020aff0c_4 unknown_8_;
};
struct Struct_020aff0c_6 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    Struct_020aff0c* unknown_4_;
    Struct_020aff0c_3* unknown_8_;
    unsigned char* unknown_c_;
    unsigned int unknown_10_;
    Struct_020aff0c_5* unknown_14_;
};
// USA: func_020aff0c
extern "C" ARM void func_020aff0c(Struct_020aff0c_6* arg0) {
    arg0->unknown_4_ = (Struct_020aff0c*)((unsigned int)arg0->unknown_4_ + (unsigned int)arg0);
    arg0->unknown_8_ = (Struct_020aff0c_3*)((unsigned int)arg0->unknown_8_ + (unsigned int)arg0);
    arg0->unknown_c_ = (unsigned char*)((unsigned int)arg0->unknown_c_ + (unsigned int)arg0);
    unsigned short var0;
    unsigned short var1;
    Struct_020aff0c* var2;
    Struct_020aff0c_3* var3;
    unsigned char* var4;
    var4 = arg0->unknown_c_;
    var0 = 0;
    var2 = arg0->unknown_4_;
    var3 = arg0->unknown_8_;
    if ((unsigned int)arg0->unknown_0_ > var0) do {
        var2[var0].unknown_c_ = (Struct_020aff0c_3*)((unsigned int)var2[var0].unknown_c_ + (unsigned int)var3);
        var1 = 0;
        if ((unsigned int)var2[var0].unknown_0_ > var1) do {
            var2[var0].unknown_c_[var1].unknown_0_ = (unsigned char*)((unsigned int)var2[var0].unknown_c_[var1].unknown_0_ + (unsigned int)var4);
            var1++;
        } while (var2[var0].unknown_0_ > var1);
        var0++;
    } while (arg0->unknown_0_ > var0);
    if (!arg0->unknown_14_) return;
    arg0->unknown_14_ = (Struct_020aff0c_5*)((unsigned int)arg0->unknown_14_ + (unsigned int)arg0);
    Struct_020aff0c_4* var5 = &arg0->unknown_14_->unknown_8_;
    var5->unknown_4_ = (Struct_020aff0c_2*)((unsigned int)var5->unknown_4_ + (unsigned int)var5);
    unsigned int var6 = 0;
    unsigned int var7;
    Struct_020aff0c_2* var8;
    if (var5->unknown_0_ > var6) {
        unsigned int var9 = 0;
        do {
            var8 = (Struct_020aff0c_2*)((unsigned char*)var5->unknown_4_ + var9);
            var8->unknown_4_ = (void*)((unsigned int)var8->unknown_4_ + (unsigned int)var5);
            var8->unknown_8_ = (void**)((unsigned int)var8->unknown_8_ + (unsigned int)var5);
            var7 = 0;
            if (var8->unknown_0_ > var7) {
                unsigned int var10 = 0;
                do {
                    var7++;
                    *(unsigned int*)((unsigned char*)var8->unknown_8_ + var10) += (unsigned int)var5;
                    var10 += 4;
                } while (var7 < var8->unknown_0_);
            }
            var6++;
            var9 += 12;
        } while (var6 < var5->unknown_0_);
    }
}
