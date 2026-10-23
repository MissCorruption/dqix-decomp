#include <globaldefs.h>

struct Struct_ov031_022148e4 {
	unsigned char unknown_0_0_ : 7;
	unsigned char unknown_0_7_ : 1;
};

// USA: func_ov031_022148e4
extern "C" ARM int func_ov031_022148e4(void* arg0) {
	unsigned char var0;
	int var1;
	var1 = 0;
	var0 = 0;
	unsigned int var2 = *(unsigned char*)((char*)arg0 + 0xd12);
	if (var0 < var2) {
		do {
			Struct_ov031_022148e4* var3 = (Struct_ov031_022148e4*)((char*)arg0 + 0x447 + var0 * 4);
			if (!var3->unknown_0_7_) {
				var1 = var0;
				break;
			}
			var0++;
		} while (var0 < var2);
	}
	return var1;
}
