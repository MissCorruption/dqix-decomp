#include <globaldefs.h>
#include "Graphics/LightingManager.h"

extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_02161ce8
extern "C" ARM int func_ov001_02161ce8(void* arg0) {
	int var0 = *(int*)((char*)LightingManager::GetInstance() + 0x98);
	func_ov017_021d6134(arg0, var0);
	return 1;
}
