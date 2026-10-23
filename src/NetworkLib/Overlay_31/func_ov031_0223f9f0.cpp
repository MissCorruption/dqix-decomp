#include <globaldefs.h>

struct Struct_01ffd34c;
struct Mutex;
void ZeroInitializeMutex(Mutex*);
extern struct Struct_01ffd34c data_ov031_02290fa4;

// USA: func_ov031_0223f9f0
extern "C" ARM int func_ov031_0223f9f0(void) {
	ZeroInitializeMutex((Mutex*)&data_ov031_02290fa4);
	return 1;
}
