#include <globaldefs.h>

struct S_b284 {
	char pad[0x39];
	unsigned char val;
};

// USA: func_ov023_021fb284
extern "C" ARM void func_ov023_021fb284(S_b284* obj, int v) {
	obj->val = v;
}
