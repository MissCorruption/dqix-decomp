#include <globaldefs.h>

extern "C" void func_ov017_021a3b00(int arg0, char* arg1);

// USA: func_ov017_021a3af0
extern "C" ARM void func_ov017_021a3af0(int arg0) {
	func_ov017_021a3b00(arg0, *(char**)arg0);
}
