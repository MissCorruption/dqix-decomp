#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" int func_ov017_021d60f4(void*);

// USA: func_ov001_0215ee2c
extern "C" ARM int func_ov001_0215ee2c(void* arg0) {
	int var0 = (int)GetGameResources();
	if (var0 == 0) {
		return 0;
	}
	int var1 = func_ov017_021d60f4(arg0);
	int var2 = func_ov017_021d60f4((char*)arg0 + 0x8);
	switch (var1) {
	case 0:
		if (var2 != 0) {
			ClearFlags04((GameResources*)var0, 8);
		} else {
			SetFlags04((GameResources*)var0, 8);
		}
		break;
	case 1:
		if (var2 != 0) {
			ClearFlags04((GameResources*)var0, 0x400);
		} else {
			SetFlags04((GameResources*)var0, 0x400);
		}
		break;
	}
	return 1;
}
