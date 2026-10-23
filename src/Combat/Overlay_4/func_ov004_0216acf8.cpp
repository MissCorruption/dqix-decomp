#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_020dc2d0(int arg0);
extern "C" void func_02027bbc(unsigned char* arg0, int arg1);

// USA: func_ov004_0216acf8
extern "C" ARM int func_ov004_0216acf8(void) {
	func_020dc2d0(0);
	unsigned char* var0 = (unsigned char*)GetGameResources()->unknown_ptr_36d0;
	func_02027bbc(var0, 1);
	return 0;
}
