#include <globaldefs.h>
#include "Input/Input.h"

extern unsigned char data_02114e54;
struct Obj0205eaa0;
extern struct Obj0205eaa0 data_02108760;

int DispatchWithShortB4_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

// USA: func_ov023_021ed014
ARM int DispatchIfFlagsOrByteSet_021ed014(struct GuideWindow_021ec480* window) {
	if (g_keyManager.TestKeysPressed(0xf03) == 0 && *((unsigned char*)&data_02114e54 + 0x55) == 0) {
		return 0;
	}
	DispatchWithShortB4_0205eaa0(&data_02108760, 1, 0);
	return 1;
}
