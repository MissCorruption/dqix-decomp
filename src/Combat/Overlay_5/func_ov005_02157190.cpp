#include <globaldefs.h>
#include "Input/Input.h"

// USA: func_ov005_02157190
extern "C" ARM int func_ov005_02157190(void*) {
	int var0 = 0;
	if (!g_keyManager.TestKeysPressed(0x30)) {
		if (g_keyManager.TestKeysPressed(0x401)) var0 = 1;
	}
	return var0;
}
