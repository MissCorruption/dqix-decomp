#include <globaldefs.h>

extern "C" ARM int func_ov031_02222e0c(void);
extern "C" ARM void func_ov031_02222e80(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" ARM void func_ov031_0223169c(void);

// USA: func_ov031_02231674
extern "C" ARM void func_ov031_02231674(void) {
	if (func_ov031_02222e0c() == -2) {
		return;
	}
	func_ov031_02222e80();
	func_ov031_022274c0((int)func_ov031_0223169c);
}
