#include <globaldefs.h>

struct Mutex;
void LockMutex(Mutex*);
void UnlockMutex(Mutex*);

extern int data_ov031_0224f704;
extern int data_ov031_0224f670;

typedef void (*Type_ov031_0221f9d0)(void*);

// USA: func_ov031_0221f9d0
extern "C" THUMB void func_ov031_0221f9d0(void* arg0, void* arg1, int arg2) {
    if (arg1 != 0 && arg2 > 0) {
        LockMutex((Mutex*)&data_ov031_0224f704);
        Type_ov031_0221f9d0 var0 = *(Type_ov031_0221f9d0*)((char*)&data_ov031_0224f670 + 0xc);
        var0(arg1);
        UnlockMutex((Mutex*)&data_ov031_0224f704);
    }
}
