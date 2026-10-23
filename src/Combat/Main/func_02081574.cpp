#include <globaldefs.h>

struct Struct_0207f524;
extern "C" void* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);
extern "C" void func_0204fa0c(void* arg0, short arg1, short arg2);

struct Struct_02081574 {
    char unknown_0_[0x6];
    short unknown_6_;
    short unknown_8_;
    char unknown_a_[0x12 - 0xa];
    unsigned char unknown_12_;
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
    char unknown_14_[0x2a - 0x14];
    unsigned char unknown_2a_;
};

#if defined(jpn)
enum { Enum_02081574_42 = 0x2a, Enum_02081574_52 = 0x28 };
#else
enum { Enum_02081574_54 = 0x36, Enum_02081574_52 = 0x34 };
#endif

struct Struct_02081574_2 {
    short* unknown_0_;
    char unknown_4_[0x13 - 4];
    unsigned char unknown_13_;
};

struct Struct_0207f524 {
    Struct_02081574* unknown_0_;
    short unknown_4_;
};

struct Struct_02081574_3 {
    void* unknown_0_;
    Struct_0207f524 unknown_4_;
    char unknown_c_[Enum_02081574_52 - 0xc];
    short unknown_34_;
    short unknown_36_;
};

typedef void (Struct_02081574_3::*Type_0204cd60)(void*, Struct_02081574*);
extern Type_0204cd60 data_020e8a54[];

// USA: func_02081574
extern "C" ARM void func_02081574(void* arg0, void* arg1, void* arg2) {
    Struct_02081574_3* var0 = static_cast<Struct_02081574_3*>(arg0);
    Struct_02081574_2* var1 = static_cast<Struct_02081574_2*>(arg2);
    struct Struct_02081574* var2;
    short var3;
    unsigned char var4;
    if (arg2 == NULL) {
        return;
    }
    for (var4 = 0; var4 < var1->unknown_13_; var4++) {
        var3 = var1->unknown_0_[var4];
        var2 = (struct Struct_02081574*)func_0207f6ac(&var0->unknown_4_, var3);
        if (var2 != NULL) {
            if (var0->unknown_36_ == var3) {
                short var5 = var2->unknown_8_;
                short var6 = (short)(var2->unknown_6_ - var0->unknown_34_);
                switch (var2->unknown_13_0_) {
                case 8:
                    var5 = (short)(var5 - 1);
                    break;
                case 0xc:
                    var5 = (short)(var5 + 1);
                    break;
                }
                func_0204fa0c(arg1, var6, var5);
            }
            if (!(var2->unknown_2a_ & 1)) {
                (var0->*data_020e8a54[var2->unknown_12_])(arg1, var2);
            }
        }
    }
}
