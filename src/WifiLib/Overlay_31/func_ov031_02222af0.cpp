#include <globaldefs.h>


typedef void (*Type_ov031_02220af0)(void*);

struct Struct_ov031_0224f670_21 {
    int unknown_0_[31];
    Type_ov031_02220af0 unknown_7c_;
};

struct Struct_ov031_02222af0 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern Struct_ov031_0224f670_21 data_ov031_0224f670;
extern "C" THUMB void func_ov031_02222aa4(Struct_ov031_02222af0* arg0);

// USA: func_ov031_02222af0
extern "C" THUMB void func_ov031_02222af0(void) {
    Struct_ov031_02222af0 var0;
    func_ov031_02222aa4(&var0);
    data_ov031_0224f670.unknown_7c_(&var0);
}
