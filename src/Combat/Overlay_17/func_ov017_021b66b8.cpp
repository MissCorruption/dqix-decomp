#include <globaldefs.h>

struct Struct_0201bdac_2;
struct Struct_0201bdac;

extern "C" void func_ov017_021b6790(void* arg0);
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

#if defined(jpn)
static const int kListOffset=0x4ec, kNodeOffset=0x8e0;
#else
static const int kListOffset=0x6fc, kNodeOffset=0xb00;
#endif

// USA: func_ov017_021b66b8
extern "C" ARM void func_ov017_021b66b8(char* arg0) {
	func_ov017_021b6790(*(void**)(arg0 + 0x3000 + kNodeOffset));
	func_020469b4((struct Struct_0201bdac_2*)*(void**)(arg0 + 0x3000 + kListOffset),
	                 (struct Struct_0201bdac*)*(void**)(arg0 + 0x3000 + kNodeOffset));
	((unsigned char*)(*(void**)(arg0 + 0x3000 + kNodeOffset)))[0x1f] = 1;
}
