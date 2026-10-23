#include <globaldefs.h>

struct Struct_020c92d0 {
    char unknown_0_[0xc];
    unsigned int unknown_c_;
    short unknown_10_;
    short unknown_12_;
    struct Struct_020c92d0* unknown_14_;
    struct Struct_020c92d0* unknown_18_;
};

struct Struct_02111654_2 {
    char unknown_0_[0xc];
    struct Struct_020c92d0* unknown_c_;
    struct Struct_020c92d0* unknown_10_;
};

extern struct Struct_02111654_2 data_02111654;

struct Struct_020c92d0_2;
extern "C" ARM void func_020c934c(struct Struct_020c92d0_2* arg0);
extern "C" void func_020c945c(void);

// USA: func_020c92d0
extern "C" ARM void func_020c92d0(struct Struct_020c92d0* arg0) {
    struct Struct_020c92d0* var0 = data_02111654.unknown_c_;
    unsigned int var1;
    struct Struct_020c92d0* var2;
    if (var0 == NULL) goto append;
    var1 = arg0->unknown_c_;
loop:
    if (var0->unknown_c_ < var1) goto advance;
    if (var0->unknown_c_ != var1) goto insert;
    if (var0->unknown_10_ <= arg0->unknown_10_) goto advance;
insert:
    var2 = var0->unknown_14_;
    arg0->unknown_14_ = var2;
    arg0->unknown_18_ = var0;
    var0->unknown_14_ = arg0;
    if (var2 != NULL) {
        var2->unknown_18_ = arg0;
        return;
    }
    data_02111654.unknown_c_ = arg0;
    func_020c945c();
    return;
advance:
    var0 = var0->unknown_18_;
    if (var0 != NULL) goto loop;
append:
    func_020c934c((struct Struct_020c92d0_2*)arg0);
}
