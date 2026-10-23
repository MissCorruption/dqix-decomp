#include <globaldefs.h>

struct Struct_ov017_0218e674 { unsigned char unknown_0_[2]; unsigned char unknown_2_; unsigned char unknown_3_; unsigned char unknown_4_[
#if defined(jpn)
0x92
#else
0x96
#endif
]; unsigned char unknown_9a_; };

// USA: func_ov017_021bd3a4
extern "C" ARM int func_ov017_021bd3a4(Struct_ov017_0218e674* arg0) {
	if (arg0->unknown_3_ == 0) {
		if (arg0->unknown_2_ == 0 || arg0->unknown_9a_ == 0) {
			goto ret0;
		}
	}
	return 1;
ret0:
	return 0;
}
