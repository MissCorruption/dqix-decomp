#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8470(void* obj);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* a, void* b, int c);

struct Mid021cbdcc {
	unsigned short field4;
	unsigned char bytes[8];
};

struct LocalEvt021cbdcc {
	unsigned char tag;
	unsigned char pad0[3];
	Mid021cbdcc mid;
	unsigned char pad1[6];
};

// USA: func_ov017_021cbdcc
extern "C" ARM void func_ov017_021cbdcc(void) {
#if defined(jpn)
 enum {regionalOffset0=0x508};
#else
 enum {regionalOffset0=0x718};
#endif
	void* evtBuf = func_0202ae24();
	unsigned char* base = (unsigned char*)GetGameResources() + 0x3000;
	void* h = *(void**)(base + regionalOffset0);
	void* r = func_ov017_021b8470(h);
	if (!r) return;

	LocalEvt021cbdcc buf;
	buf.tag = 0x7e;
	void* ptr2 = *(void**)((char*)r + 0x8000 + 0xe18);
	unsigned short val = *(unsigned short*)((char*)ptr2 + 8);

	Mid021cbdcc* mid = &buf.mid;
	unsigned char* p = mid->bytes;
	int i = 0;
	mid->field4 = val;
	for (; i < 8; p++) {
		*p = *(unsigned int*)((char*)r + 0x8000 + 0xde0 + i * 4);
		i++;
	}
	func_0205e330(evtBuf, &buf, 0);
}
