#include <globaldefs.h>

extern "C" int func_ov031_022070bc(int x);

struct SizeInputStruct022054fc {
	unsigned short field0;
	unsigned char field2;
	unsigned char field3;
};

// USA: func_ov031_022054fc
extern "C" ARM int func_ov031_022054fc(struct SizeInputStruct022054fc* p) {
	int a = func_ov031_022070bc(p->field3 << 2);
	int b = func_ov031_022070bc(p->field0);
	return a + b;
}
