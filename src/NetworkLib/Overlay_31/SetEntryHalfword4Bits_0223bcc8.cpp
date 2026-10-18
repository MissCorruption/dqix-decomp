#include <globaldefs.h>

struct Entry0223bcc8 { unsigned int pad0; unsigned short h4; unsigned short pad6; };
struct Obj0223bcc8 { unsigned char pad0[8]; Entry0223bcc8* list; unsigned char count; };

// USA: func_ov031_0223bcc8
ARM void SetEntryHalfword4Bits_0223bcc8(Obj0223bcc8* obj, int idx, int val) {
	Entry0223bcc8* list = obj->list;
	if (idx >= 0) {
		list[idx].h4 = (list[idx].h4 & ~0xc00) | (val << 10);
		return;
	}
	for (int i = 0; i < obj->count; i++) {
		list[i].h4 = (list[i].h4 & ~0xc00) | (val << 10);
	}
}
