#include <globaldefs.h>
#include <NitroSDK/Mutex.h>

struct Struct_ov031_02206150_2 {
    unsigned char unknown_0_[0xe0];
    Mutex unknown_e0_;
};
struct Struct_ov031_02206150 {
    unsigned char unknown_0_[0x68];
    Struct_ov031_02206150_2* unknown_68_;
    unsigned char unknown_6c_[4];
    volatile short unknown_70_;
    signed char unknown_72_;
    signed char unknown_73_;
};
extern "C" int func_ov031_02207180(void* arg0);
extern "C" int func_ov031_02206264(Struct_ov031_02206150* arg0, const unsigned char* arg1, int arg2, unsigned short arg3, unsigned long arg4, long arg5);

// USA: func_ov031_02206150
extern "C" ARM int func_ov031_02206150(Struct_ov031_02206150* arg0, const unsigned char* arg1, int arg2, unsigned short arg3, unsigned long arg4, long arg5) {
    Struct_ov031_02206150_2* var0;
    int var1;
    int var2;

    if (func_ov031_02207180(arg0)) return -28;
    {
        int var3 = 0;
        if (arg0 != NULL) var3 = (arg0->unknown_70_ & 1) != 0;
        if (!var3) return -39;
    }
    {
        int var4 = 1;
        signed char var5 = arg0->unknown_73_;
        if (var5 != 0 && var5 != 4) var4 = 0;
        if (var4) {
            if (!(arg0->unknown_70_ & 4) || (arg0->unknown_70_ & 8)) return -56;
        }
    }
    var0 = arg0->unknown_68_;
    if ((arg5 & 4) || arg0->unknown_72_ == 0) {
        if (!TryLockMutex(&var0->unknown_e0_)) return -6;
        var2 = 0;
    } else {
        LockMutex(&var0->unknown_e0_);
        var2 = 1;
    }
    var1 = func_ov031_02206264(arg0, arg1, arg2, arg3, arg4, var2);
    UnlockMutex(&var0->unknown_e0_);
    return var1;
}
