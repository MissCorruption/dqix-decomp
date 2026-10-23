#include <globaldefs.h>

struct Mutex;
void LockMutex(Mutex*);
struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

extern struct Struct_ov031_02290f8c data_ov031_02290f8c;
extern int data_ov031_02290f88;

// USA: func_ov031_0223fa60
extern "C" ARM int func_ov031_0223fa60(void) {
	LockMutex((Mutex*)&data_ov031_02290f8c);
	int var0 = (data_ov031_02290f88 == 0);
	if (var0) {
		data_ov031_02290f88 = 1;
	}
	UnlockMutex((Mutex*)&data_ov031_02290f8c);
	return var0;
}
