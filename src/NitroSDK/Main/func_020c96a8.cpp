#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

struct Struct_02111654_6 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern Struct_02111654_6 data_02111654;

// USA: func_020c96a8
extern "C" ARM int func_020c96a8(int arg0) {
    unsigned int var0;
    var0 = DisableIRQInterrupts();
    if (arg0 < data_02111654.unknown_4_) {
        data_02111654.unknown_8_++;
    }
    data_02111654.unknown_4_ = arg0;
    SetIRQInterruptState(var0);
    return data_02111654.unknown_8_;
}
