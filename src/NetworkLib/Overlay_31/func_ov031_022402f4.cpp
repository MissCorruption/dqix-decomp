#include <globaldefs.h>

struct FourWords;
struct Mutex;
void ZeroInitializeMutex(Mutex*);
extern struct FourWords data_ov031_022918a4;

// USA: func_ov031_022402f4
extern "C" ARM int func_ov031_022402f4(void) {
	ZeroInitializeMutex((Mutex*)&data_ov031_022918a4);
	return 1;
}
