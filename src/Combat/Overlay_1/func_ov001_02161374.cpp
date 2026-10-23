#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void* arg0);

struct Struct_ov001_02161374 {
	#if defined(jpn)
	char unknown_0_[0xf4];
#else
	char unknown1_0_[0xf8];
#endif
	unsigned int unknown_f8_0_ : 27;
	unsigned int unknown_fb_3_ : 5;
};

// USA: func_ov001_02161374
extern "C" ARM int func_ov001_02161374(void* arg0, int arg1) {
	Struct_ov001_02161374* var0 = (Struct_ov001_02161374*)GetGameResources()->unknown_ptr_array_371c[6];
	for (int var1 = 0; var1 < arg1; var1++) {
		var0->unknown_f8_0_ |= func_ov017_021d60f4(arg0);
		arg0 = (char*)arg0 + 8;
	}
	return 1;
}
