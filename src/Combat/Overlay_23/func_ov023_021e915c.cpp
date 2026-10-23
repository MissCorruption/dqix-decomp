#include <globaldefs.h>

extern "C" void* func_0209fe8c(void);
extern "C" int func_ov017_021d60f4(void*);

struct S_9ffe0 {
	char pad[0x68];
	short count;
	unsigned short items[0x32];
};
extern "C" void func_0209ffe0(S_9ffe0*, short);

// USA: func_ov023_021e915c
extern "C" ARM int func_ov023_021e915c(void* arg) {
	struct S_9ffe0* s = (struct S_9ffe0*)func_0209fe8c();
	if (s != NULL) {
		func_0209ffe0(s, func_ov017_021d60f4(arg));
	}
	return 1;
}
