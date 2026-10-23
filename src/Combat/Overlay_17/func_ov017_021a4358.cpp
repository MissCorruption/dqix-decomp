#include <globaldefs.h>

extern "C" void func_ov017_021a4368(int arg0, void* arg1);

// USA: func_ov017_021a4358
extern "C" ARM void func_ov017_021a4358(int arg0) {
	func_ov017_021a4368(arg0, *(void**)arg0);
}
