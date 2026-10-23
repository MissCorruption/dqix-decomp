#include <globaldefs.h>

struct Struct_ov031_02211f24
{
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    unsigned int unknown_10_;
    unsigned char unknown_14_[0x50];
};
struct Struct_ov031_0224e5b4_6
{
    int unknown_0_;
    Struct_ov031_02211f24* unknown_4_;
};
extern Struct_ov031_0224e5b4_6 data_ov031_0224e5b4;
enum Enum_ov031_02211f24 { Enum_ov031_02211f24_2 = 2 };
extern "C" void func_ov031_02211e08();
extern "C" void func_ov031_02211b08(int, int);
extern "C" int func_ov031_02212fb8();
extern "C" int func_ov031_02207cd0();
extern "C" void func_ov031_022120f8();
extern "C" void func_ov031_02211bd4(Struct_ov031_02211f24*, unsigned short, int, int);
extern "C" int func_ov031_022162f0(void*, void*);

// USA: func_ov031_02211f24
extern "C" ARM int func_ov031_02211f24()
{
    int var0;
    int var1;
    unsigned short var2;
    Struct_ov031_02211f24* var3;
    Struct_ov031_02211f24* var4 = data_ov031_0224e5b4.unknown_4_;
    if (var4 == NULL) return 0;
    switch (var4->unknown_10_)
    {
    case 1: return 2;
    case 2: return 2;
    case 3:
        func_ov031_02211e08();
        func_ov031_02211b08(5, data_ov031_0224e5b4.unknown_0_);
        data_ov031_0224e5b4.unknown_4_->unknown_4_ = 7;
        data_ov031_0224e5b4.unknown_4_->unknown_10_ = 4;
        return 7;
    case 4: return 7;
    case 5: return 5;
    }
    if (var4->unknown_4_ == 1) return var4->unknown_4_;
    var1 = func_ov031_02212fb8();
    if (var1 == 5)
    {
        data_ov031_0224e5b4.unknown_4_->unknown_4_ = 4;
        data_ov031_0224e5b4.unknown_4_->unknown_6_ = 1;
        data_ov031_0224e5b4.unknown_4_->unknown_c_ = 1;
        return 4;
    }
    if (var1 < 0)
    {
        if (var1 >= -10)
        {
            data_ov031_0224e5b4.unknown_4_->unknown_c_ = 1;
            func_ov031_02211b08(9, -50199);
            data_ov031_0224e5b4.unknown_4_->unknown_4_ = 8;
            return 8;
        }
        var3 = data_ov031_0224e5b4.unknown_4_;
        if (!var3->unknown_c_)
        {
            var2 = var3->unknown_8_;
            var0 = func_ov031_02207cd0();
            data_ov031_0224e5b4.unknown_0_ = var1;
            func_ov031_022120f8();
            func_ov031_02211bd4(var3, var2, 1, (unsigned short)var0);
            func_ov031_022162f0(&data_ov031_0224e5b4.unknown_4_->unknown_14_, (void*)1);
            Enum_ov031_02211f24 var5 = Enum_ov031_02211f24_2;
            data_ov031_0224e5b4.unknown_4_->unknown_10_ = 1;
            data_ov031_0224e5b4.unknown_4_->unknown_0_ = 0;
            return var5;
        }
        if (data_ov031_0224e5b4.unknown_0_ < var1)
            var1 = data_ov031_0224e5b4.unknown_0_;
        func_ov031_02211b08(5, var1);
        data_ov031_0224e5b4.unknown_4_->unknown_4_ = 7;
        return 7;
    }
    return 2;
}
