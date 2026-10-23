#include <globaldefs.h>

extern int data_ov017_021d83ac;

// USA: func_ov017_021a5a48
extern "C" ARM int func_ov017_021a5a48(void*) {
	int var0 = data_ov017_021d83ac;
	int var1 = 0xff;
	if (var0 != 0) {
		var1 = *(unsigned char*)(var0 +
#if defined(jpn)
            0x1b3d
#else
            0x1c79
#endif
);
	}
	return var1;
}
