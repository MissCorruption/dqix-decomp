#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

struct Struct_020d217c_2 {
    Struct_020d217c_2* unknown_0_;   /* 0x0 */
};
struct Struct_02112780_3 {
    int unknown_0_[2];             /* 0x0,0x4 */
    Struct_020d217c_2* unknown_8_;   /* 0x8 */
    Struct_020d217c_2* unknown_c_;   /* 0xc */
};
extern Struct_02112780_3 data_02112780;

// USA: func_020d248c
extern "C" ARM void func_020d248c(Struct_020d217c_2* arg0) {
    unsigned int var0 = DisableIRQInterrupts();
    Struct_020d217c_2* var1 = data_02112780.unknown_c_;
    if (var1 == 0) {
        data_02112780.unknown_8_ = arg0;
        data_02112780.unknown_c_ = arg0;
    } else {
        var1->unknown_0_ = arg0;
        data_02112780.unknown_c_ = arg0;
    }
    arg0->unknown_0_ = 0;
    SetIRQInterruptState(var0);
}
