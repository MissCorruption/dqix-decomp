#include <globaldefs.h>

extern int data_ov017_021d83ac;
#if defined(jpn)
extern "C" int func_ov002_0216c28c(void);
#define func_ov000_0216c28c func_ov002_0216c28c
#else
extern "C" int func_ov000_0216c28c(void);
#endif

// USA: func_ov017_021a5a68
extern "C" ARM void func_ov017_021a5a68(void) {
	if (data_ov017_021d83ac != 0) {
		func_ov000_0216c28c();
	}
}
