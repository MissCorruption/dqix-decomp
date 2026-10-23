#include <globaldefs.h>


struct Struct_ov031_0221e798 {
    int unknown_0_;
    int unknown_4_;
};

extern "C" THUMB void func_ov031_0221e6e8(int arg0, int* arg1);

// USA: func_ov031_0221e798
extern "C" THUMB void func_ov031_0221e798(Struct_ov031_0221e798* arg0, int arg1, int arg2) {
    arg0->unknown_0_ = arg2;
    func_ov031_0221e6e8(arg1, &arg0->unknown_4_);
}
