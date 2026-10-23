#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_02108760;
extern struct Struct_02108760 data_02108760;

extern "C" int func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

// USA: func_ov023_021ed014
extern "C" ARM int func_ov023_021ed014(struct Struct_ov023_021ec480* arg0) {
	if (g_keyManager.TestKeysPressed(0xf03) == 0 && g_touchInput.pressed_ == 0) {
		return 0;
	}
	func_0205eaa0(&data_02108760, 1, 0);
	return 1;
}
