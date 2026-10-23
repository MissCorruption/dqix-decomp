#include <globaldefs.h>

unsigned int GetIRQInterruptState(void);
void HandleCommandReceivedFromArm7(void);

struct Struct_021117ec_3 { unsigned char unknown_0_[0x1c]; int unknown_1c_; };
extern Struct_021117ec_3 data_021117ec;
extern int data_02111808;

// USA: func_020ce188
extern "C" ARM void func_020ce188(void) {
    int* var0 = &data_02111808;
    if (data_021117ec.unknown_1c_ == 0) return;
    volatile unsigned short* var1 = (volatile unsigned short*)0x4000208;
    do {
        if (GetIRQInterruptState() == 0x80 || *var1 == 0) {
            HandleCommandReceivedFromArm7();
        }
    } while (*var0 != 0);
}
