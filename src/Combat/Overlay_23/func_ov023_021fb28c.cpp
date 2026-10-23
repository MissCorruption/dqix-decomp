#include <globaldefs.h>

struct Struct_ov023_021fb28c {
	char unknown_0_[0xc];
	unsigned char unknown_c_;
};

// USA: func_ov023_021fb28c
extern "C" ARM int func_ov023_021fb28c(struct Struct_ov023_021fb28c *arg0) {
	return (arg0->unknown_c_ & 0x20) != 0;
}
