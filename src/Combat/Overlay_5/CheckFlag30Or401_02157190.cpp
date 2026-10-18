#include <globaldefs.h>
#include "Input/Input.h"

// USA: func_ov005_02157190
ARM int CheckFlag30Or401_02157190(void*) {
	int result = 0;
	if (!g_keyManager.TestKeysPressed(0x30)) {
		if (g_keyManager.TestKeysPressed(0x401)) result = 1;
	}
	return result;
}
