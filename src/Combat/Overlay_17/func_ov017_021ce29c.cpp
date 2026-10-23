#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* a, void* b, int c);

struct LocalEvt021ce29c {
	unsigned char tag;
	char pad1[3];
	signed char data[4];
	char pad2[12];
};

// USA: func_ov017_021ce29c
extern "C" ARM void func_ov017_021ce29c(void) {
#if defined(jpn)
 enum {regionalOffset0=0x910};
#else
 enum {regionalOffset0=0xb30};
#endif
	void* p = func_0202ae24();
	int raw = (int)GetGameResources();
	unsigned char* src = *(unsigned char**)((char*)raw + 0x3000 + regionalOffset0);

	struct LocalEvt021ce29c buf;
	buf.tag = 0x2e;
	signed char* dst = buf.data;
	for (int i = 0; i < 4; i++) {
		dst[i] = *(unsigned char*)(src + i + 0x1b);
	}
	func_0205e330(p, &buf, 0);
}
