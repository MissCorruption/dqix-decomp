#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x4ec
#define REGION_FIELD_1 0x8ec
#else
#define REGION_FIELD_0 0x6fc
#define REGION_FIELD_1 0xb0c
#endif


struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_ov017_021aa4cc;

extern "C" void func_ov017_021aa50c(Struct_ov017_021aa4cc* arg0);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);

// USA: func_ov017_021aa4cc
extern "C" ARM void func_ov017_021aa4cc(char* arg0, unsigned char arg1) {
	arg0 += 0x3000;
	Struct_ov017_021aa4cc* var0 = *(Struct_ov017_021aa4cc**)(arg0 + REGION_FIELD_1);
	if (*((unsigned char*)var0 + 2) != 0) {
		return;
	}
	func_ov017_021aa50c(var0);
	*((unsigned char*)*(Struct_ov017_021aa4cc**)(arg0 + REGION_FIELD_1) + 0x5c) = arg1;
	func_020469b4(*(Struct_0201bdac_2**)(arg0 + REGION_FIELD_0), (Struct_0201bdac*)*(Struct_ov017_021aa4cc**)(arg0 + REGION_FIELD_1));
}
