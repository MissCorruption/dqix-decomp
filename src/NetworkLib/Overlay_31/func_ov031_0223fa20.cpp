#include <globaldefs.h>

extern int data_ov031_02290fa4;
struct Struct_ov031_02290f8c;
struct Mutex;
void UnlockMutex(Mutex*);

// USA: func_ov031_0223fa20
extern "C" ARM void func_ov031_0223fa20(void) {
    UnlockMutex((Mutex*)&data_ov031_02290fa4);
}
