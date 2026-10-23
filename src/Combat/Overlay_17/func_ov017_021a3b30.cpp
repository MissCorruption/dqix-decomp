#include <globaldefs.h>

extern "C" void func_ov017_021a3b40(int arg0, void* arg1);

// USA: func_ov017_021a3b30
extern "C" ARM void func_ov017_021a3b30(int arg0) {
	func_ov017_021a3b40(arg0, *(void**)arg0);
}
