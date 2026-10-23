#include <globaldefs.h>

// USA: func_ov027_021dc864
extern "C" ARM int func_ov027_021dc864(unsigned int arg0, unsigned int arg1, int arg2) {
	if (arg0 > 0x1fe || arg0 < 0xe4) return 0;
	if (arg1 > 0x10 || arg1 < 0x8) return 0;
	return ((int)(arg2 * ((arg1 + 0x20) * 4 + 0x70) + ((arg0 + 0x26) * 4 + 0x4a + 0x100)) < 0x15e0) ? 1 : 0;
}
