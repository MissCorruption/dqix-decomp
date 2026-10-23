#include <globaldefs.h>

struct Struct_ov005_0215690c {
#if defined(jpn)
	char unknown_0_[0x124];
#else
	char unknown1_0_[0x128];
#endif
	void *unknown_128_;
};

extern "C" int func_ov023_021e6194(void *arg0);

// USA: func_ov023_021e4e20
extern "C" ARM int func_ov023_021e4e20(struct Struct_ov005_0215690c *arg0) {
	void *var0 = arg0->unknown_128_;
	if (var0 == NULL) {
		return 0;
	}
	return func_ov023_021e6194(var0);
}
