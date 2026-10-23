#include <globaldefs.h>

struct Struct_01ffd34c;
struct Mutex;
void ZeroInitializeMutex(Mutex*);
extern struct Struct_01ffd34c data_ov031_022918a4;

// USA: func_ov031_022402f4
extern "C" ARM int func_ov031_022402f4(void) {
	ZeroInitializeMutex((Mutex*)&data_ov031_022918a4);
	return 1;
}
