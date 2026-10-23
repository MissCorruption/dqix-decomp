#include <globaldefs.h>

struct Struct_ov031_0222f9ec { char unknown_0_[8]; unsigned short* unknown_8_; char unknown_c_[8]; void* unknown_14_; };
struct Struct_ov031_02290ca0_9 { char unknown_0_[4]; unsigned short unknown_4_; char unknown_6_[2]; Struct_ov031_0222f9ec* unknown_8_; };
extern Struct_ov031_02290ca0_9 data_ov031_02290ca0;
extern unsigned short data_ov031_02248f96[];
extern "C" int FastIntDivide(int, int);
extern "C" void func_ov031_0223ca40(void*, int);
extern "C" void func_ov031_0222faac(int, int);
extern "C" void func_ov031_02234f4c(unsigned short*, int, int, int);
extern "C" void func_ov031_0222fc48(int, int);
extern "C" void func_ov031_02234f34();
extern "C" void func_ov031_0223caec(void*);
extern "C" void func_ov031_02230120();

// USA: func_ov031_0222f9ec
extern "C" ARM void func_ov031_0222f9ec() {
    int var0 = FastIntDivide(data_ov031_02290ca0.unknown_4_, 0x1d);
    func_ov031_0223ca40(data_ov031_02290ca0.unknown_8_->unknown_14_, 0);
    int var1 = var0;
    int var2 = 0;
    do {
        func_ov031_0222faac(var1, var2);
        ++var2;
        ++var1;
    } while (var2 < 5);
    func_ov031_02234f4c(data_ov031_02290ca0.unknown_8_->unknown_8_ + data_ov031_02248f96[var0], 0, 0x1e, 0x13);
    int var3 = 0;
    do {
        func_ov031_0222fc48(var0, var3);
        ++var3;
        ++var0;
    } while (var3 < 5);
    func_ov031_02234f34();
    func_ov031_0223caec(data_ov031_02290ca0.unknown_8_->unknown_14_);
    func_ov031_02230120();
}
