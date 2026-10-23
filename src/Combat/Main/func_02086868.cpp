#include <globaldefs.h>

union Struct_02086868_5 { unsigned char unknown_0_[13]; };
union Struct_02086868_11 { int unknown_0_[13]; };
union Struct_02086868 { int unknown_0_[39]; };
union Struct_02086868_2 { unsigned char unknown_0_[27]; };
union Struct_02086868_3 { unsigned char unknown_0_[9]; };
union Struct_02086868_4 { unsigned char unknown_0_[36]; };
union Struct_02086868_6 { unsigned char unknown_0_[12]; };
union Struct_02086868_7 { int unknown_0_[5]; };
union Struct_02086868_8 { unsigned short unknown_0_[14]; };
union Struct_02086868_9 { unsigned short unknown_0_[96]; };

struct Struct_02086868_10 {
    signed char unknown_0_;
    unsigned char unknown_1_;
    Struct_02086868_5 unknown_2_;
    Struct_02086868_5 unknown_f_;
    Struct_02086868_11 unknown_1c_;
    int unknown_50_;
    unsigned short unknown_54_;
    unsigned char unknown_56_[2];
    Struct_02086868 unknown_58_;
    unsigned short unknown_f4_;
    Struct_02086868_2 unknown_f6_;
    Struct_02086868_3 unknown_111_;
    Struct_02086868_4 unknown_11a_;
    unsigned char unknown_13e_;
    unsigned char unknown_13f_;
    Struct_02086868_6 unknown_140_;
    Struct_02086868_7 unknown_14c_;
    Struct_02086868_8 unknown_160_;
    Struct_02086868_9 unknown_17c_;
};

// USA: func_02086868
extern "C" ARM void* func_02086868(void* arg0, void* arg1) {
    Struct_02086868_10* var0 = (Struct_02086868_10*)arg0;
    Struct_02086868_10* var1 = (Struct_02086868_10*)arg1;
    var0->unknown_0_ = var1->unknown_0_;
    var0->unknown_1_ = var1->unknown_1_;
    var0->unknown_2_ = var1->unknown_2_;
    var0->unknown_f_ = var1->unknown_f_;
    var0->unknown_1c_ = var1->unknown_1c_;
    var0->unknown_50_ = var1->unknown_50_;
    var0->unknown_54_ = var1->unknown_54_;
    var0->unknown_58_ = var1->unknown_58_;
    var0->unknown_f4_ = var1->unknown_f4_;
    var0->unknown_f6_ = var1->unknown_f6_;
    var0->unknown_111_ = var1->unknown_111_;
    var0->unknown_11a_ = var1->unknown_11a_;
    var0->unknown_13e_ = var1->unknown_13e_;
    var0->unknown_13f_ = var1->unknown_13f_;
    var0->unknown_140_ = var1->unknown_140_;
    var0->unknown_14c_ = var1->unknown_14c_;
    var0->unknown_160_ = var1->unknown_160_;
    var0->unknown_17c_ = var1->unknown_17c_;
    return arg0;
}
