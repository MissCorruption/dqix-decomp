#include <globaldefs.h>

extern void* data_ov031_0224e588;

// USA: func_ov031_022103dc
extern "C" ARM void func_ov031_022103dc(void* value) {
	void* volatile* ppTarget = (void* volatile*)data_ov031_0224e588;
	if (ppTarget != NULL) {
		(void)*ppTarget;
		*ppTarget = value;
	}
}
