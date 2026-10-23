#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

struct Struct_0203d028;
extern "C" void func_0207df50(struct Struct_0203d028* arg0);
struct Struct_02012fa4;
extern "C" void func_02047230(struct Struct_02012fa4* arg0);

struct Struct_ov005_021556e4_2 {
	char unknown_0_[4];
	struct Struct_0203d028* unknown_4_;
	struct Struct_02012fa4* unknown_8_;
	char unknown_c_[0x18 - 0xc];
	short unknown_18_;
};

// USA: func_ov005_02155d38
extern "C" ARM void func_ov005_02155d38(Struct_ov005_021556e4_2* arg0) {
	if (arg0->unknown_4_) func_0207df50(arg0->unknown_4_);
	if (arg0->unknown_8_) func_02047230(arg0->unknown_8_);
	arg0->unknown_18_ = -1;
}
