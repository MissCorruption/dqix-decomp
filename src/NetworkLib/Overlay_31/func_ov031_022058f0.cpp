#include <globaldefs.h>
#include <NitroSDK/Mutex.h>
#include <NitroSDK/Interrupts.h>

struct Struct_ov031_022058f0_2 {
    char unknown_0_[0xe0];
    Mutex unknown_e0_;
};
struct Struct_ov031_022058f0 {
    char unknown_0_[0x64];
    Struct_ov031_022058f0_2* unknown_64_;
    char unknown_68_[8];
    volatile short unknown_70_;
    signed char unknown_72_;
    signed char unknown_73_;
};
extern "C" int func_ov031_02207180(void*);
extern "C" int func_ov031_02205a38(Struct_ov031_022058f0*, int, int, int, int, int, int);

enum { Enum_ov031_022058f0_1 = 1 };

// USA: func_ov031_022058f0
extern "C" ARM int func_ov031_022058f0(Struct_ov031_022058f0* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    Struct_ov031_022058f0_2* var0;
    int var1;
    int var2;
    signed char var3;
    int var4;
    int var5;

    if (func_ov031_02207180(arg0)) return -28;
    if ((arg5 & 4) || arg0->unknown_72_ == 0) {
        if (arg0->unknown_73_ == 4) return -28;
        var1 = 0;
    } else {
        if (GetProcessorMode() == 0x12) return -28;
        var1 = Enum_ov031_022058f0_1;
    }
    var2 = 0;
    if (arg0 != NULL) var2 = (arg0->unknown_70_ & 1) != 0;
    if (!var2) return -39;
    var3 = arg0->unknown_73_;
    var4 = 1;
    if (var3 != 0 && var3 != 4) var4 = 0;
    if (var4) {
        if (!(arg0->unknown_70_ & 4) || (arg0->unknown_70_ & 8)) return -56;
    }
    var0 = arg0->unknown_64_;
    if (!(var1 & Enum_ov031_022058f0_1)) {
        if (!TryLockMutex(&var0->unknown_e0_)) return -6;
    } else {
        LockMutex(&var0->unknown_e0_);
    }
    var5 = func_ov031_02205a38(arg0, arg1, arg2, arg3, arg4, var1, arg5);
    UnlockMutex(&var0->unknown_e0_);
    return var5;
}
