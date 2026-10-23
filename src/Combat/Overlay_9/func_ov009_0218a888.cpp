#include <globaldefs.h>
struct Struct_ov009_0218a518;

// USA: func_ov009_0218a888
extern "C" ARM int func_ov009_0218a888(Struct_ov009_0218a518* arg0, unsigned char* arg1, int arg2, int arg3) {
	int var0;
	for (var0 = 0; var0 < arg2; var0++, arg1++) {
		if (*arg1 == arg3) {
			return 1;
		}
	}
	return 0;
}
