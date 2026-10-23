#include <globaldefs.h>

extern "C" void func_020dbebc(void* arg0);
extern "C" void* func_02012fe4(void);
extern "C" int func_020981e4(int arg0, int arg1);
struct Struct_0203d028;
extern "C" void func_0207df50(struct Struct_0203d028* arg0);

#if defined(jpn)
static const int kLogOffset=0x41e8, kIdOffset=0x860, kInternalOffset=0x27c;
#else
static const int kLogOffset=0x4498, kIdOffset=0x840, kInternalOffset=0x2cc;
#endif

// USA: func_ov017_0218d5c8
#pragma optimize_for_size off
extern "C" ARM void func_ov017_0218d5c8(unsigned char* arg0) {
	int* var0 = *(int**)(arg0 + kLogOffset);
	if (var0 != NULL) {
		func_020dbebc(var0);
	}
	unsigned char* var1 = (unsigned char*)func_02012fe4();
	unsigned short var2 = *(unsigned short*)var1;
	int var3 = func_020981e4((int)(var1 + kIdOffset), var2);
	unsigned char* var4 = arg0 + kInternalOffset;
	if (var3 != 0) {
		var4 = var4 + 0x930;
	} else {
		var4 = var4 + 0xc40;
	}
	func_0207df50((struct Struct_0203d028*)var4);
	*(int*)(arg0 + kLogOffset) = 0;
}
