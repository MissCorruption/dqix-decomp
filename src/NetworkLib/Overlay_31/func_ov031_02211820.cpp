#include <globaldefs.h>

extern "C" void func_ov031_02211acc(void);

struct GlobalPair0224e598_02211820 {
	int field0;
	int field4;
};
extern GlobalPair0224e598_02211820 data_ov031_0224e598;

// USA: func_ov031_02211820
extern "C" ARM void func_ov031_02211820(void) {
	func_ov031_02211acc();
	if (data_ov031_0224e598.field0 != 9) {
		data_ov031_0224e598.field0 = 0;
		data_ov031_0224e598.field4 = 0;
	}
}
