#include <globaldefs.h>

extern "C" void* func_0203cf4c(void);
struct EntryList_203dce4;
struct Entry_203dce4;
extern "C" struct Entry_203dce4* func_0203dce4(struct EntryList_203dce4* list, int id);

struct Global02161880 { char pad[0x98]; unsigned int field98; };

// USA: func_ov001_02161880
extern "C" ARM int func_ov001_02161880(void) {
	struct Global02161880* g = (struct Global02161880*)func_0203cf4c();
	g->field98 &= ~0x2;
	int i;
	for (i = 0; i < 0x20; i++) {
		struct Entry_203dce4* e = func_0203dce4((struct EntryList_203dce4*)g, i);
		if (e != NULL) {
			*(unsigned int*)e &= ~0x10000;
		}
	}
	return 1;
}
