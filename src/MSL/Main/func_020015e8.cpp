#include <globaldefs.h>

struct Mutex;
int TryLockMutex(Mutex*);
void LockMutex(Mutex*);
void UnlockMutex(Mutex*);
extern "C" void func_02001878(int arg0);
extern "C" void func_0200f368();

struct Struct_020015e8 {
    unsigned char unknown_0_[0x6c];
    int unknown_6c_;
};

struct Struct_02111304_2 {
    int unknown_0_;
    Struct_020015e8* unknown_4_;
};

struct Struct_020f2e60 {
    void (*unknown_0_)();
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

extern void (*data_020f2e70[64])();

extern int data_020f2fb8;
extern Struct_02111304_2 data_02111304;
extern int data_020f2f70;
extern int data_020f2f94;
extern Struct_020f2e60 data_020f2e60;

// USA: func_020015e8
extern "C" ARM void func_020015e8() {
    if (TryLockMutex((Mutex*)&data_020f2fb8) == 0) {
        data_020f2f70 = data_02111304.unknown_4_->unknown_6c_;
        data_020f2f94 = 1;
    } else if (data_020f2f70 == data_02111304.unknown_4_->unknown_6c_) {
        data_020f2f94++;
    } else {
        LockMutex((Mutex*)&data_020f2fb8);
        data_020f2f70 = data_02111304.unknown_4_->unknown_6c_;
        data_020f2f94 = 1;
    }

    Struct_020f2e60* const var0 = &data_020f2e60;
    if (var0->unknown_8_ > 0) {
        void (**const var1)() = data_020f2e70;
        do {
            var1[--var0->unknown_8_]();
        } while (var0->unknown_8_ > 0);
    }

    if (--data_020f2f94 == 0) {
        UnlockMutex((Mutex*)&data_020f2fb8);
    }

    if (data_020f2e60.unknown_0_ != 0) {
        data_020f2e60.unknown_0_();
        data_020f2e60.unknown_0_ = 0;
    }

    func_02001878(0);
    func_0200f368();
}
