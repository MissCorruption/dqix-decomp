#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void* func_0202ae18(void);
struct Struct_0202b2f0;
extern "C" void func_0202c600(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e22c(void);

struct Struct_ov017_02195618 { unsigned char unknown_0_[
#if defined(jpn)
0x40c2
#else
0x42e2
#endif
]; unsigned char unknown_42e2_; };

// USA: func_ov017_02195618
extern "C" ARM void func_ov017_02195618(unsigned char* arg0) {
	void* var0 = func_0202ae18();
	SetFlags00((GameResources*)arg0, 2);
	((Struct_ov017_02195618*)arg0)->unknown_42e2_ = 1;
	func_0202c600((struct Struct_0202b2f0*)var0, 0);
	func_0202ae24();
	func_0205e22c();
}
