#include <globaldefs.h>

extern int data_ov017_021d83ac;
#if defined(jpn)
extern "C" int func_ov002_0216c28c(void);
#define EnqueueEvent0x5e_ov000_0216c28c func_ov002_0216c28c
#else
int EnqueueEvent0x5e_ov000_0216c28c(void);
#endif

// USA: func_ov017_021a5a68
ARM void CallEnqueueEvent94IfFlag_021a5a68(void) {
	if (data_ov017_021d83ac != 0) {
		EnqueueEvent0x5e_ov000_0216c28c();
	}
}
