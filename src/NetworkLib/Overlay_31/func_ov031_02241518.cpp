#include <globaldefs.h>

extern "C" int func_ov031_02207428(int, int);

// USA: func_ov031_02241518
extern "C" ARM int func_ov031_02241518(int arg0, int arg1) {
	if (arg1 < 0) return arg0;
	return func_ov031_02207428(arg1, 2);
}
