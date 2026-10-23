#include <globaldefs.h>

struct Struct_ov031_02290f8c;
struct Mutex;
void UnlockMutex(Mutex*);
extern struct Struct_ov031_02290f8c data_ov031_022918a4;

// USA: func_ov031_02240324
extern "C" ARM void func_ov031_02240324(void) {
	UnlockMutex((Mutex*)&data_ov031_022918a4);
}
