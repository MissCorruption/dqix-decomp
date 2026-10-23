#include <globaldefs.h>

struct Struct_ov008_02185964 { char unknown_0_[0x60]; int unknown_60_; int unknown_64_; };

// USA: func_ov008_02185964
extern "C" ARM int func_ov008_02185964(struct Struct_ov008_02185964* arg0) {
    return ((arg0->unknown_60_ == -1) & (arg0->unknown_64_ == -1)) != 0;
}
