#include <globaldefs.h>

extern "C" void* func_0209fe8c(void);
extern "C" int func_ov017_021d60f4(void*);

struct Struct_0209ffe0 {
	char unknown_0_[0x68];
	short unknown_68_;
	unsigned short unknown_6a_[0x32];
};
extern "C" void func_0209ffe0(Struct_0209ffe0*, short);

// USA: func_ov023_021e915c
extern "C" ARM int func_ov023_021e915c(void* arg0) {
	struct Struct_0209ffe0* var0 = (struct Struct_0209ffe0*)func_0209fe8c();
	if (var0 != NULL) {
		func_0209ffe0(var0, func_ov017_021d60f4(arg0));
	}
	return 1;
}
