#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0207fdcc_2;
extern "C" int func_02080d54(struct Struct_0207fdcc_2* arg0, int arg1, int arg2, int arg3);

// USA: func_ov014_02186ff0
extern "C" ARM int func_ov014_02186ff0(char* arg0) {
	int var0 = 0;

	if (g_keyManager.TestKeysPressed(2)) {
		var0 = 1;
	}

	if (g_touchInput.pressed_ != 0) {
		int var1, var2;
		g_touchInput.GetTouchPoint(&var1, &var2);
		short var3 = *(short*)(arg0 + 0x170);
		struct Struct_0207fdcc_2* var4 = *(struct Struct_0207fdcc_2**)(arg0 + 0xc0);
		if (!func_02080d54(var4, var3, (short)var1, (short)var2)) {
			var0 = 1;
		}
	}

	return var0;
}
