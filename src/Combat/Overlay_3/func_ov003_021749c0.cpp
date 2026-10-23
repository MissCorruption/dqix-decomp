#include <globaldefs.h>

extern "C" void func_ov023_021dca88(void* obj);

struct FlagWord020466f4;
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);
extern "C" void* func_020d6c00(void);

// USA: func_ov003_021749c0
extern "C" ARM void func_ov003_021749c0(char* obj) {
	func_ov023_021dca88(obj + 0x3c);
#if defined(jpn)
    enum { pendingOffset = 0xfc2 };
#else
    enum { pendingOffset = 0x1046 };
#endif
	*(unsigned short*)(obj + pendingOffset) &= ~0x800;
	func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 1);
}
