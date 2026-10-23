#include <globaldefs.h>
#include "Input/Input.h"

struct Obj2081;
extern "C" int func_02080d54(struct Obj2081* obj, int key, int px, int py);

// USA: func_ov014_02186ff0
extern "C" ARM int func_ov014_02186ff0(char* obj) {
	int result = 0;

	if (g_keyManager.TestKeysPressed(2)) {
		result = 1;
	}

	if (g_touchInput.pressed_ != 0) {
		int a, b;
		g_touchInput.GetTouchPoint(&a, &b);
		short key = *(short*)(obj + 0x170);
		struct Obj2081* elemObj = *(struct Obj2081**)(obj + 0xc0);
		if (!func_02080d54(elemObj, key, (short)a, (short)b)) {
			result = 1;
		}
	}

	return result;
}
