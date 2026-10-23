#include <globaldefs.h>

typedef void (*Type_ov017_021a3544)(void*);

struct Struct_ov017_021d6bd8 {
    Type_ov017_021a3544 unknown_0_[9];
};
extern Struct_ov017_021d6bd8 data_ov017_021d6bd8;

struct Struct_ov017_021a3544 {
    unsigned char unknown_0_[0x10];
    unsigned char unknown_10_;
};

// USA: func_ov017_021b4710
extern "C" ARM void func_ov017_021b4710(Struct_ov017_021a3544* arg0, void* arg1) {
    Struct_ov017_021d6bd8 var0 = data_ov017_021d6bd8;
    var0.unknown_0_[arg0->unknown_10_](arg0);
}
