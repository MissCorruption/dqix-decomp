#include <globaldefs.h>

struct Struct_ov031_0223d858;
struct Struct_ov031_0223dabc_2;
struct Struct_ov031_0223dabc_3 {
    void* unknown_0_;
    void* unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_[2];
};
struct Struct_ov031_0223dabc {
    unsigned char unknown_0_[0x180];
    Struct_ov031_0223dabc_3 unknown_180_;
    Struct_ov031_0223dabc_3 unknown_18c_;
    Struct_ov031_0223d858* unknown_198_;
    Struct_ov031_0223dabc_2* unknown_19c_;
};
extern Struct_ov031_0223dabc* data_ov031_02290d64;
extern "C" void* func_ov031_0223cf4c(unsigned int, int);
extern "C" Struct_ov031_0223dabc_2* func_ov031_0223beec(int, int, int);
extern "C" Struct_ov031_0223d858* func_ov031_0223d858();
extern "C" int func_ov031_0223d918(char*);
extern "C" int func_ov031_0223d908(char*);
typedef void (*Type_ov031_0223dabc)(Struct_ov031_0223d858*, Struct_ov031_0223dabc_3*);

static inline Struct_ov031_0223dabc* inline_ov031_0223dabc(int arg0) {
    return (Struct_ov031_0223dabc*)((unsigned char*)data_ov031_02290d64 + arg0);
}

// USA: func_ov031_0223dabc
extern "C" ARM void func_ov031_0223dabc() {
    data_ov031_02290d64 = (Struct_ov031_0223dabc*)func_ov031_0223cf4c(0x340, 4);
    int var0 = 0;
    int var1 = 0;
    do {
        Struct_ov031_0223dabc_2* var2 = func_ov031_0223beec(0x20, (int)inline_ov031_0223dabc(var1)->unknown_0_, 0xc);
        inline_ov031_0223dabc(var1)->unknown_19c_ = var2;
        Struct_ov031_0223d858* var3 = func_ov031_0223d858();
        inline_ov031_0223dabc(var1)->unknown_198_ = var3;
        inline_ov031_0223dabc(var1)->unknown_180_.unknown_8_ = 0x300;
        inline_ov031_0223dabc(var1)->unknown_18c_.unknown_8_ = 0x400;
        ((Type_ov031_0223dabc)func_ov031_0223d918)(inline_ov031_0223dabc(var1)->unknown_198_, &inline_ov031_0223dabc(var1)->unknown_180_);
        ((Type_ov031_0223dabc)func_ov031_0223d908)(inline_ov031_0223dabc(var1)->unknown_198_, &inline_ov031_0223dabc(var1)->unknown_18c_);
        var0++;
        var1 += sizeof(Struct_ov031_0223dabc);
    } while (var0 < 2);
}
