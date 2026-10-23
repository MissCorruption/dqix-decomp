#include <globaldefs.h>

extern "C" void func_ov017_021a3ddc(int arg0, void* arg1);

// USA: func_ov017_021a3dcc
extern "C" ARM void func_ov017_021a3dcc(int arg0) {
	func_ov017_021a3ddc(arg0, *(void**)arg0);
}
