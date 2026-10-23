#include <globaldefs.h>

#if defined(jpn)
#define REGION_FIELD_0 0x3920
#define REGION_FIELD_1 0x34ec
#else
#define REGION_FIELD_0 0x3b40
#define REGION_FIELD_1 0x36fc
#endif


struct Struct_ov003_0217ef24;
extern "C" void func_ov003_0217ef24(struct Struct_ov003_0217ef24* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

// USA: func_ov017_0218d77c
extern "C" ARM void func_ov017_0218d77c(char* arg0, int arg1) {
	func_ov003_0217ef24(*(struct Struct_ov003_0217ef24**)(arg0 + REGION_FIELD_0));
	*(int*)((char*)(*(void**)(arg0 + REGION_FIELD_0)) + 0x8) = arg1;
	func_020469b4(*(struct Struct_0201bdac_2**)(arg0 + REGION_FIELD_1), *(struct Struct_0201bdac**)(arg0 + REGION_FIELD_0));
}
