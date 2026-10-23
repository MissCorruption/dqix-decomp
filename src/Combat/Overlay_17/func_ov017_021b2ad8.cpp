#include <globaldefs.h>
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov017_021b2ad8_1060 = 0x444 };
#else
enum { Enum_ov017_021b2ad8_1060 = 0x424 };
#endif

extern "C" ARM void* func_02012fe4(void);

struct Struct_ov017_021b2ad8 {
	unsigned char unknown_0_[8];
	int unknown_8_;
	unsigned char unknown_c_[0x38 - 0xc];
	int unknown_38_;
};

// USA: func_ov017_021b2ad8
extern "C" ARM int func_ov017_021b2ad8(Struct_ov017_021b2ad8* arg0) {
	if (*(int*)((char*)func_02012fe4() + Enum_ov017_021b2ad8_1060) != 0) {
		return arg0->unknown_8_;
	}
	int var0 = (int)GetGameResources();
	ClearFlags04((GameResources*)var0, 2);
	arg0->unknown_38_ &= ~1;
	return 3;
}
