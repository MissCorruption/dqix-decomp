#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0201b600_1052 = 0x43c };
#else
enum { Enum_0201b600_1052 = 0x41c };
#endif

struct Struct_0201b600 { unsigned short unknown_0_; unsigned char unknown_2_[0x6e]; };
struct Struct_0201b600_2 {
    int unknown_0_;
    unsigned char unknown_4_[0x10];
    int unknown_14_;
    unsigned char unknown_18_[0x2c];
    struct Struct_0201b600* unknown_44_;
    unsigned char unknown_48_[0xc];
    struct Struct_0201b600_2* unknown_54_;
};
struct Struct_02017a94 {
    unsigned char unknown_0_[Enum_0201b600_1052];
    struct Struct_0201b600_2* unknown_41c_;
    unsigned char unknown_420_[4];
    int unknown_424_;
};

// USA: func_0201b600
extern "C" ARM struct Struct_0201b600* func_0201b600(Struct_02017a94* arg0, int arg1, unsigned short arg2) {
    struct Struct_0201b600_2* var0;
    int var1;
    int var2;
    if (arg0->unknown_424_ != 0) return NULL;
    var0 = arg0->unknown_41c_;
    while (var0 != NULL) {
        if (var0->unknown_0_ == arg1) break;
        var0 = var0->unknown_54_;
    }
    if (var0 != NULL) {
        struct Struct_0201b600* var3 = NULL;
        var1 = var0->unknown_14_;
        for (var2 = 0; var2 < var1; var2++) {
            if (arg2 == var0->unknown_44_[var2].unknown_0_) { var3 = &var0->unknown_44_[var2]; break; }
        }
        return var3;
    }
    return NULL;
}
