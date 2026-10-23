#include <globaldefs.h>

extern void* data_ov031_0224e60c;

struct Mutex;
void* LockMutex(Mutex*);

struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

// USA: func_ov031_022191e0
extern "C" ARM int func_ov031_022191e0(void) {
    void *var0 = data_ov031_0224e60c;
    LockMutex((Mutex*)((char*)var0 + 0x1000 + 0x1dc));
    var0 = data_ov031_0224e60c;
    void *var1 = (char*)var0 + 0x1000 + 0x1dc;
    int var2 = *(int*)((char*)var0 + 0x1000);
    UnlockMutex((Mutex*)var1);
    return var2;
}
