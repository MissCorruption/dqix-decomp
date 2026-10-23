#include <globaldefs.h>

struct Struct_ov027_021e33e0_19 {
	unsigned char unknown_0_[8];
	unsigned char* unknown_8_;
};

extern Struct_ov027_021e33e0_19 data_ov027_021e33e0;

// USA: func_ov027_021dd0ac
extern "C" ARM int func_ov027_021dd0ac(void) {
	return data_ov027_021e33e0.unknown_8_[0x50d] == 1;
}
