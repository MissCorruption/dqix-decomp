#include <globaldefs.h>

extern "C" int func_ov031_022070bc(int arg0);

struct Struct_ov031_02205620 {
	int unknown_0_;
	int unknown_4_;
};

// USA: func_ov031_02205620
extern "C" ARM int func_ov031_02205620(int arg0, struct Struct_ov031_02205620* arg1, int arg2) {
	arg1->unknown_4_ = arg2 ? arg0 : 0;
	arg1->unknown_0_ = arg2;
	return arg0 + func_ov031_022070bc(arg2);
}
