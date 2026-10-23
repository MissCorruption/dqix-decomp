#include <globaldefs.h>

extern "C" void func_ov008_02184878(void* arg0);
extern "C" void func_0208be8c(void);

typedef void (*Type_ov017_021b9904)(void*);

// USA: func_ov017_021b9904
extern "C" ARM void func_ov017_021b9904(char* arg0) {
	void* var0 = *(void**)(arg0 + 0x118);
	if (var0 != NULL) func_ov008_02184878(var0);
	((Type_ov017_021b9904)func_0208be8c)(arg0 + 0x30);
}
