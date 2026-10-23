#include <globaldefs.h>

extern "C" void func_ov017_021d4e38(void* arg0);

// USA: func_ov017_021d4ccc
extern "C" ARM void func_ov017_021d4ccc(void* arg0) {
	if (*(int*)((char*)arg0 + 0x38))
		func_ov017_021d4e38(arg0);
}
