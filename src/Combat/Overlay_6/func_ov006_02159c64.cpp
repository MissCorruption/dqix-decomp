#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_02159c64_20 = 0xc, Enum_ov006_02159c64_332 = 0x140 };
#else
enum { Enum_ov006_02159c64_20 = 0x14, Enum_ov006_02159c64_332 = 0x14c };
#endif

struct Struct_ov006_02158cfc {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_:22;
    unsigned int unknown_12_6_:1;
    unsigned int unknown_12_7_:9;
    char unknown_14_[8];
    Struct_ov006_02158cfc* unknown_1c_;
};
struct Struct_02071ffc_4 { Struct_ov006_02158cfc* unknown_0_; };
struct Struct_ov006_02158cfc_2 {
    char unknown_0_[Enum_ov006_02159c64_20];
    void* unknown_14_;
    char unknown_18_[0x14];
    Struct_ov006_02158cfc* unknown_2c_;
    Struct_ov006_02158cfc* unknown_30_;
    char unknown_34_[Enum_ov006_02159c64_332 - Enum_ov006_02159c64_20 - 0x20];
    Struct_02071ffc_4 unknown_14c_;
    char unknown_150_[0x35e - Enum_ov006_02159c64_332 - 4];
    short unknown_35e_;
    char unknown_360_[0xa];
    short unknown_36a_;
    char unknown_36c_[0x18];
    signed char unknown_384_;
    signed char unknown_385_;
    unsigned char unknown_386_;
    char unknown_387_;
    unsigned char unknown_388_;
};
extern "C" Struct_ov006_02158cfc* func_ov006_02158d8c(void*, short);
extern "C" void func_02071ffc(Struct_02071ffc_4*, int, int, int, short, short*);
extern "C" void func_ov006_02158cac(void*);
struct Struct_02108760;
extern Struct_02108760 data_02108760 __attribute__((aligned(4)));
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
extern "C" void func_ov006_02158cfc(Struct_ov006_02158cfc_2*, Struct_ov006_02158cfc*);
extern "C" void func_020804fc(void*, int);
extern "C" void func_ov006_0215f7e8(Struct_ov006_02158cfc_2*);
extern "C" void func_ov006_0215fcf0(Struct_ov006_02158cfc_2*);

// USA: func_ov006_02159c64
extern "C" ARM void func_ov006_02159c64(Struct_ov006_02158cfc_2* arg0) {
    Struct_ov006_02158cfc* var0 = func_ov006_02158d8c(arg0, arg0->unknown_36a_ - 0x29);
    if (!var0) return;
    if (!var0->unknown_12_6_) {
        arg0->unknown_36a_ = -1;
        arg0->unknown_35e_ = -1;
        var0 = 0;
    }
    arg0->unknown_386_ = !arg0->unknown_386_;
    short var1 = 0;
    func_02071ffc(&arg0->unknown_14c_, arg0->unknown_384_, arg0->unknown_385_, arg0->unknown_386_, 16, &var1);
    arg0->unknown_30_ = arg0->unknown_2c_ = arg0->unknown_14c_.unknown_0_;
    if (!var0) var0 = arg0->unknown_30_;
    func_ov006_02158cac(arg0);
    func_0205eaa0(&data_02108760, 1, 0);
    short var2 = 0;
    for (Struct_ov006_02158cfc* var3 = arg0->unknown_30_; var3; var3 = var3->unknown_1c_) {
        if (var3 == var0) break;
        ++var2;
    }
    short var4 = var2 % 16;
    arg0->unknown_388_ = var2 / 16;
    func_ov006_02158cfc(arg0, var0);
    arg0->unknown_36a_ = var4 + 0x29;
    func_020804fc(arg0->unknown_14_, 9);
    func_ov006_0215f7e8(arg0);
    func_ov006_0215fcf0(arg0);
}
