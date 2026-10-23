#include <globaldefs.h>

struct Struct_ov031_022919bc_2 { int unknown_0_; int unknown_4_; };
extern Struct_ov031_022919bc_2 data_ov031_022919bc;

struct Struct_ov031_022919c4_2 { int unknown_0_; void* unknown_4_; };
extern Struct_ov031_022919c4_2 data_ov031_022919c4[8];

extern "C" int func_ov031_022413c8(int arg0, int arg1);
extern "C" void func_ov031_02241720(void* arg0);

// USA: func_ov031_022417fc
extern "C" ARM void func_ov031_022417fc(void) {
    if (data_ov031_022919bc.unknown_0_ == data_ov031_022919bc.unknown_4_) return;
    do {
        func_ov031_022413c8(0, data_ov031_022919c4[data_ov031_022919bc.unknown_4_].unknown_0_);
        Struct_ov031_022919c4_2* var0 = data_ov031_022919c4 + data_ov031_022919bc.unknown_4_;
        func_ov031_02241720(var0->unknown_4_);
        data_ov031_022919bc.unknown_4_ = (data_ov031_022919bc.unknown_4_ + 1) & 7;
    } while (data_ov031_022919bc.unknown_0_ != data_ov031_022919bc.unknown_4_);
}
