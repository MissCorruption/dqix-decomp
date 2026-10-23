#include <globaldefs.h>

struct Mutex;
int TryLockMutex(Mutex*);
void LockMutex(Mutex*);
void UnlockMutex(Mutex*);
extern "C" void func_0200159c(int arg0);

struct Struct_02003ddc {
    unsigned char unknown_0_[0x6c];
    int unknown_6c_;
};

struct Struct_02111304_3 {
    int unknown_0_;
    Struct_02003ddc* unknown_4_;
};

typedef void (*Type_02003ddc)(int slot);

extern int data_020f3060;
extern Struct_02111304_3 data_02111304;
extern int data_020f2f70[];
extern int data_020f2f94[];
extern Type_02003ddc data_020f3394[];

// USA: func_02003ddc
extern "C" ARM int func_02003ddc(int arg0) {
    Type_02003ddc var0;

    if (arg0 < 1 || arg0 > 7) {
        return -1;
    }

    do {
        if (TryLockMutex((Mutex*)&data_020f3060) == 0) {
            data_020f2f70[7] = data_02111304.unknown_4_->unknown_6c_;
            data_020f2f94[7] = 1;
            break;
        }
        if (data_020f2f70[7] == data_02111304.unknown_4_->unknown_6c_) {
            data_020f2f94[7] = data_020f2f94[7] + 1;
            break;
        }
        LockMutex((Mutex*)&data_020f3060);
        data_020f2f70[7] = data_02111304.unknown_4_->unknown_6c_;
        data_020f2f94[7] = 1;
    } while (0);

    var0 = data_020f3394[arg0 - 1];
    if (var0 != (Type_02003ddc)1) {
        data_020f3394[arg0 - 1] = 0;
    }

    data_020f2f94[7] = data_020f2f94[7] - 1;
    if (data_020f2f94[7] == 0) {
        UnlockMutex((Mutex*)&data_020f3060);
    }

    if (var0 == (Type_02003ddc)1 || (var0 == 0 && arg0 == 1)) {
        return 0;
    }
    if (var0 == 0) {
        func_0200159c(0);
    }
    var0(arg0);
    return 0;
}
