#include <globaldefs.h>

// USA: func_ov031_0220db64
extern "C" ARM unsigned int func_ov031_0220db64(unsigned int arg0) {
	asm {
		clz arg0, arg0
	}
	return arg0;
}
