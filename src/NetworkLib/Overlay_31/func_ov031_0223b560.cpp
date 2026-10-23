#include <globaldefs.h>

struct Struct_ov031_0223b560 { unsigned char unknown_0_[0xe4]; unsigned short unknown_e4_; };
struct Struct_ov031_02290d24_2 { struct Struct_ov031_0223b560* unknown_0_; };
extern struct Struct_ov031_02290d24_2 data_ov031_02290d24;

void NitroVM_Command_AcquireCardReadResources(unsigned short);
void NitroVM_Command_ReleaseCardReadResources(unsigned short);

// USA: func_ov031_0223b560
extern "C" ARM int func_ov031_0223b560(void* arg0, int arg1) {
	switch (arg1) {
	case 9:
		NitroVM_Command_AcquireCardReadResources(data_ov031_02290d24.unknown_0_->unknown_e4_);
		return 0;
	case 0xa:
		NitroVM_Command_ReleaseCardReadResources(data_ov031_02290d24.unknown_0_->unknown_e4_);
		return 0;
	case 1:
		return 4;
	default:
		return 8;
	}
}
