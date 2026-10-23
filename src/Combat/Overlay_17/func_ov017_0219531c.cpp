#include <globaldefs.h>

extern "C" void func_ov017_02195214(void* arg0, void* arg1);

#if defined(jpn)
static const int kCountOffset=0x40d0, kEntriesOffset=0x40d1;
#else
static const int kCountOffset=0x42f0, kEntriesOffset=0x42f1;
#endif

// USA: func_ov017_0219531c
extern "C" ARM int func_ov017_0219531c(void* arg0, void* arg1) {
	unsigned char* var0 = (unsigned char*)arg0;
	if (var0[kCountOffset] == 0) return 0;
	func_ov017_02195214(arg1, var0 + kEntriesOffset);
	var0[kCountOffset] = var0[kCountOffset] - 1;
	int var1 = 0;
	while (var1 < var0[kCountOffset]) {
		func_ov017_02195214(var0 + kEntriesOffset + var1 * 15, var0 + kEntriesOffset + (var1 + 1) * 15);
		var1++;
	}
	return 1;
}
