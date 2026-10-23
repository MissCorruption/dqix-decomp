#include <globaldefs.h>

extern "C" void func_ov008_02184878(void* a);
extern "C" void func_0208be8c(void);

typedef void (*BlankFn)(void*);

// USA: func_ov017_021b9904
extern "C" ARM void func_ov017_021b9904(char* p) {
	void* a = *(void**)(p + 0x118);
	if (a != NULL) func_ov008_02184878(a);
	((BlankFn)func_0208be8c)(p + 0x30);
}
