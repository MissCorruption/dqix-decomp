#include <globaldefs.h>

extern "C" int func_ov031_0220cf6c();
extern "C" int func_ov031_0220cdf4(int, int);

// USA: func_ov031_0220cdd4
extern "C" ARM int func_ov031_0220cdd4(int arg0, int arg1, int) {
	if (arg0 == 0 || arg1 == 0) return func_ov031_0220cf6c();
	return func_ov031_0220cdf4(arg0, arg1);
}
