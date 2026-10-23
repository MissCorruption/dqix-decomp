#include <globaldefs.h>

extern "C" void func_ov023_021dca88(void* arg0);

struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void* func_020d6c00(void);

// USA: func_ov003_021749c0
extern "C" ARM void func_ov003_021749c0(char* arg0) {
	func_ov023_021dca88(arg0 + 0x3c);
#if defined(jpn)
    enum { Enum_ov003_021749c0_4166 = 0xfc2 };
#else
    enum { Enum_ov003_021749c0_4166 = 0x1046 };
#endif
	*(unsigned short*)(arg0 + Enum_ov003_021749c0_4166) &= ~0x800;
	func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 1);
}
