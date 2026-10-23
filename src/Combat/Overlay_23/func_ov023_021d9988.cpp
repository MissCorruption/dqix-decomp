#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov023_021d9988 {
	char unknown_0_[0x124];
	char unknown_124_[4];
	unsigned char unknown_128_;
};

// USA: func_ov023_021d9988
extern "C" ARM void func_ov023_021d9988(struct Struct_ov023_021d9988 *arg0, void *arg1, unsigned int arg2) {
	memcpy(arg0->unknown_124_, arg1, arg2);
	arg0->unknown_128_ = (unsigned char)arg2;
}
