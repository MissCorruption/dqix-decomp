#include <globaldefs.h>
struct PatternSyntax0218a518;

// USA: func_ov009_0218a888
ARM int FindByteInBuffer0218a888(PatternSyntax0218a518* unused, unsigned char* buf, int count, int target) {
	int i;
	for (i = 0; i < count; i++, buf++) {
		if (*buf == target) {
			return 1;
		}
	}
	return 0;
}
