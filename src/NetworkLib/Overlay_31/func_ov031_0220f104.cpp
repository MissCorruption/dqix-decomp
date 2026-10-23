#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Mutex.h"
#include "NitroSDK/Memory.h"
struct Struct_ov031_0220f104 {
    char unknown_0_[0xf00];
    char unknown_f00_[0x1360];
    int unknown_2260_;
    char unknown_2264_[7];
    unsigned char unknown_226b_;
};
struct Struct_ov031_0224e540_4 { char unknown_0_[0x24]; int unknown_24_; };
extern "C" Struct_ov031_0220f104* func_ov031_0220d60c();
extern "C" int func_020d5bfc(int, void*, void*, unsigned int);
extern Mutex data_ov031_0224e54c;
extern BlockedContextList data_ov031_0224e544;
extern Struct_ov031_0224e540_4 data_ov031_0224e540;
extern "C" void func_ov031_0220f28c();
// USA: func_ov031_0220f104
extern "C" ARM int func_ov031_0220f104(void* arg0, void* arg1, unsigned int arg2, void* arg3, int arg4) {
    int var0 = DisableIRQInterrupts();
    if (!func_ov031_0220d60c()) {
        SetIRQInterruptState(var0);
        return -1;
    }
    int var1;
    LockMutex(&data_ov031_0224e54c);
    Struct_ov031_0220f104* var2 = func_ov031_0220d60c();
    if (!var2) {
        UnlockMutex(&data_ov031_0224e54c);
        SetIRQInterruptState(var0);
        return -1;
    }
    if (var2->unknown_2260_ != 9 || var2->unknown_226b_ == 1) {
        UnlockMutex(&data_ov031_0224e54c);
        SetIRQInterruptState(var0);
        return -4;
    }
    VectorizedInvertedMemcpy(arg1, var2->unknown_f00_, arg2);
    if (arg4 > 0) VectorizedInvertedMemcpy(arg3, var2->unknown_f00_ + arg2, arg4);
    var1 = arg2 + arg4;
    switch (func_020d5bfc((int)func_ov031_0220f28c, arg0, var2->unknown_f00_, (unsigned short)var1)) {
    case 0: case 1: case 3: case 4: case 5: case 6: case 7: case 8: default:
        UnlockMutex(&data_ov031_0224e54c);
        SetIRQInterruptState(var0);
        return -5;
    case 2:
        break;
    }
    BlockCurrentContext(&data_ov031_0224e544);
    switch (data_ov031_0224e540.unknown_24_) {
    case 0:
        break;
    case 1:
    default:
        UnlockMutex(&data_ov031_0224e54c);
        SetIRQInterruptState(var0);
        return -5;
    }
    UnlockMutex(&data_ov031_0224e54c);
    SetIRQInterruptState(var0);
    return var1;
}
