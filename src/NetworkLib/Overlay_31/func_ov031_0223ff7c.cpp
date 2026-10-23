#include <globaldefs.h>

// USA: func_ov031_0223ff7c
extern "C" ARM char func_ov031_0223ff7c(char arg0) {
	int var0 = (unsigned char)(arg0 + 1);
	if (var0 == '{') {
		var0 = '0';
	} else if (var0 == '[') {
		var0 = 'a';
	} else if (var0 == ':') {
		var0 = 'A';
	}
	return (char)var0;
}
