#include <globaldefs.h>

struct Struct_ov031_02233178_2 { unsigned char unknown_0_[4]; };
struct Struct_ov031_02249064 { Struct_ov031_02233178_2 unknown_0_, unknown_4_; };
struct Struct_ov031_02233178 { void* unknown_0_; void* unknown_4_[3]; };
struct Struct_ov031_02290cc0_10 { unsigned char unknown_0_; unsigned char unknown_1_[3]; Struct_ov031_02233178* unknown_4_; };
extern Struct_ov031_02249064 data_ov031_02249064;
extern Struct_ov031_02290cc0_10 data_ov031_02290cc0;
extern "C" void func_ov031_02234ff8(void*, int, int);
extern "C" int func_ov031_0223607c(int);
extern "C" void func_ov031_0223bb58(void*, int, int, int);

// USA: func_ov031_02233178
extern "C" ARM void func_ov031_02233178() {
    Struct_ov031_02233178_2 var0 = {{data_ov031_02249064.unknown_0_.unknown_0_[0], data_ov031_02249064.unknown_0_.unknown_0_[1], data_ov031_02249064.unknown_0_.unknown_0_[2], data_ov031_02249064.unknown_0_.unknown_0_[3]}};
    Struct_ov031_02233178_2 var1 = {{data_ov031_02249064.unknown_4_.unknown_0_[0], data_ov031_02249064.unknown_4_.unknown_0_[1], data_ov031_02249064.unknown_4_.unknown_0_[2], data_ov031_02249064.unknown_4_.unknown_0_[3]}};
    unsigned char* var2 = var0.unknown_0_;
    if (data_ov031_02290cc0.unknown_0_ > 3) return;
    int var3 = var2[data_ov031_02290cc0.unknown_0_];
    func_ov031_02234ff8(data_ov031_02290cc0.unknown_4_->unknown_0_, var3, var3);
    if (data_ov031_02290cc0.unknown_0_ == 3) return;
    int var4 = func_ov031_0223607c(data_ov031_02290cc0.unknown_0_);
    if (var4 > 2) var4 = 3;
    func_ov031_0223bb58(data_ov031_02290cc0.unknown_4_->unknown_4_[data_ov031_02290cc0.unknown_0_], -1, 0, var1.unknown_0_[var4]);
}
