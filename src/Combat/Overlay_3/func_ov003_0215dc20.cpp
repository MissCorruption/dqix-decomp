#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
enum { kRegionValue3EC_404 = 0x404 };
enum { kRegionValue3ED_405 = 0x405 };
enum { kRegionValue3F0_408 = 0x408 };
#else
enum { kRegionValue3EC_404 = 0x3ec };
enum { kRegionValue3ED_405 = 0x3ed };
enum { kRegionValue3F0_408 = 0x3f0 };
#endif

// USA: func_ov003_0215dc20
extern "C" ARM void func_ov003_0215dc20(void* obj) {
	unsigned char* o = (unsigned char*)obj;
	unsigned char state;
	FontBankLoader* g;
	if (o[kRegionValue3EC_404] == 0) return;
	state = o[kRegionValue3ED_405];
	if (state == 0) {
		g = func_02094a00();
		func_02094b3c(g, 0xa);
		if (o[kRegionValue3F0_408] != 0) {
			func_02094b30(g, 0x1f5, 0);
		} else {
			func_02094b30(g, 0x200, 1);
		}
		o[kRegionValue3ED_405] = o[kRegionValue3ED_405] + 1;
		return;
	}
	if (state != 1) return;
	if (func_02094b4c(func_02094a00()) != 0) {
		o[kRegionValue3EC_404] = 0;
		o[kRegionValue3ED_405] = 0;
	}
}
