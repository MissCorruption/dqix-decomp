#include <globaldefs.h>

extern "C" void func_ov017_021c6378(void*);
extern "C" void func_ov017_021c66e8(void*);
extern "C" void func_ov017_021ca3c4(void*);
extern "C" void func_ov017_021ca534(void*);

// USA: func_ov000_0215e8e8
extern "C" ARM void func_ov000_0215e8e8(void* arg0) {
	func_ov017_021c6378(arg0);
	func_ov017_021c66e8(arg0);
	func_ov017_021ca3c4((char*)arg0 + 0x1b0 + 0x8000);
	func_ov017_021ca534((void*)((int)arg0 + 0x81b0));
}
