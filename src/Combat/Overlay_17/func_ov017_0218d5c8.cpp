#include <globaldefs.h>

extern "C" void func_020dbebc(void* a);
extern "C" void* func_02012fe4(void);
extern "C" int func_020981e4(int a, int id);
struct Foo0207df50;
extern "C" void func_0207df50(struct Foo0207df50* p);

#if defined(jpn)
static const int kLogOffset=0x41e8, kIdOffset=0x860, kInternalOffset=0x27c;
#else
static const int kLogOffset=0x4498, kIdOffset=0x840, kInternalOffset=0x2cc;
#endif

// USA: func_ov017_0218d5c8
#pragma optimize_for_size off
extern "C" ARM void func_ov017_0218d5c8(unsigned char* obj) {
	int* logPtr = *(int**)(obj + kLogOffset);
	if (logPtr != NULL) {
		func_020dbebc(logPtr);
	}
	unsigned char* base = (unsigned char*)func_02012fe4();
	unsigned short id = *(unsigned short*)base;
	int r = func_020981e4((int)(base + kIdOffset), id);
	unsigned char* base2 = obj + kInternalOffset;
	if (r != 0) {
		base2 = base2 + 0x930;
	} else {
		base2 = base2 + 0xc40;
	}
	func_0207df50((struct Foo0207df50*)base2);
	*(int*)(obj + kLogOffset) = 0;
}
