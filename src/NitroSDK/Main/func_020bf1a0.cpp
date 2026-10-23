#include <globaldefs.h>

struct Struct_ov031_02290f8c;
struct Mutex;
void LockMutex(Mutex*);
void UnlockMutex(Mutex*);

struct Struct_020bc9d0;
extern "C" void func_020bcbc4(struct Struct_020bc9d0* arg0);

struct Struct_020bf1a0;
extern "C" void func_020bf238(struct Struct_020bf1a0* arg0);

struct Struct_021103b0_2 { int unknown_0_; unsigned char* unknown_4_; };

extern char data_02110a28;
extern struct Struct_021103b0_2 data_021103b0;

// USA: func_020bf1a0
extern "C" ARM void func_020bf1a0(void* arg0) {
    LockMutex((Mutex*)&data_02110a28);
    if (data_021103b0.unknown_4_ != 0) {
        LockMutex((Mutex*)(data_021103b0.unknown_4_ + 0x4c8));
    }

    if ((*(int*)((char*)arg0 + 0x110) << 30) >> 31) {
        func_020bcbc4((struct Struct_020bc9d0*)arg0);
    }
    if ((*(int*)((char*)arg0 + 0x110) << 31) >> 31) {
        void (*var0)(void*) = *(void(**)(void*))((char*)arg0 + 0x170);
        var0(arg0);
    }

    func_020bf238((struct Struct_020bf1a0*)arg0);
    UnlockMutex((Mutex*)&data_02110a28);
    if (data_021103b0.unknown_4_ != 0) {
        UnlockMutex((Mutex*)(data_021103b0.unknown_4_ + 0x4c8));
    }
}
