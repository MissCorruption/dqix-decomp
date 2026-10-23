#include <globaldefs.h>

struct Struct_01ffd34c;
struct Mutex;
void ZeroInitializeMutex(Mutex*);
extern struct Struct_01ffd34c data_ov031_02290f8c;
extern int data_ov031_02290f88;

// USA: func_ov031_0223fa34
extern "C" ARM int func_ov031_0223fa34(void) {
	ZeroInitializeMutex((Mutex*)&data_ov031_02290f8c);
	data_ov031_02290f88 = 0;
	return 1;
}
