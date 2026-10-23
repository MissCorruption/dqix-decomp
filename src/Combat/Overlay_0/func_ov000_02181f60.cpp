#include <globaldefs.h>

extern "C" int func_ov000_02181990(int, void*);

// USA: func_ov000_02181f60
extern "C" ARM int func_ov000_02181f60(int arg0, int arg1, void* arg2) {
	return func_ov000_02181990(1, arg2);
}
