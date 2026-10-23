#include <globaldefs.h>

struct Struct_ov003_02158e94_2 { char unknown_0_[0x598]; int unknown_598_; };

// USA: func_ov003_0215c300
#pragma optimize_for_size off
extern "C" ARM int func_ov003_0215c300(struct Struct_ov003_02158e94_2* arg0, int arg1) {
    if (arg0->unknown_598_ > arg1) {
        arg0->unknown_598_ -= arg1;
    } else {
        arg0->unknown_598_ = 0;
        return 0;
    }
    return 1;
}
