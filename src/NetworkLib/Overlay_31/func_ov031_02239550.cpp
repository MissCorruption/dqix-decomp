#include <globaldefs.h>

struct Inner_02239550 { unsigned char pad[0x40]; int field40; unsigned char pad2[0xc]; short field50; short field52; };
struct Outer_02239550 { unsigned char pad[4]; struct Inner_02239550* inner; };
extern struct Outer_02239550 data_ov031_02290d18;

extern "C" void func_ov031_022395b4(void);
extern "C" int func_020d5204(int a);
extern "C" ARM void func_ov031_022393e4(int v);

// USA: func_ov031_02239550
extern "C" ARM int func_ov031_02239550(void) {
	if ((unsigned int)(data_ov031_02290d18.inner->field40 - 4) <= 2) return 1;
	int result = func_020d5204((int)func_ov031_022395b4);
	if (result != 2) {
		func_ov031_022393e4(result);
		return 0;
	}
	data_ov031_02290d18.inner->field50 = 0;
	data_ov031_02290d18.inner->field52 = 1;
	return 1;
}
