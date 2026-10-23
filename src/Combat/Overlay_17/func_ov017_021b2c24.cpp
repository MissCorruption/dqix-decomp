#include <globaldefs.h>

struct Struct_0201bdac;
struct Struct_0201bdac_2;
extern "C" void func_ov017_021b2c4c(void* arg0);
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

#if defined(jpn)
#define NODE_OFFSET 0x3528
#define NODE_TAIL 0x528
#define LIST_TAIL 0x4ec
#else
#define NODE_OFFSET 0x3738
#define NODE_TAIL 0x738
#define LIST_TAIL 0x6fc
#endif

// USA: func_ov017_021b2c24
extern "C" ARM void func_ov017_021b2c24(char* arg0) {
	func_ov017_021b2c4c(*(void**)(arg0 + NODE_OFFSET));
	char* var0 = arg0 + 0x3000;
	void* var1 = *(void**)(var0 + LIST_TAIL);
	void* var2 = *(void**)(var0 + NODE_TAIL);
	func_020469b4((struct Struct_0201bdac_2*)var1, (struct Struct_0201bdac*)var2);
}
