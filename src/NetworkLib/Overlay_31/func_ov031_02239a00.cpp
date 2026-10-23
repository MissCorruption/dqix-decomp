#include <globaldefs.h>

extern "C" int func_ov031_02239368(int);
extern "C" int func_ov031_022393e4(int arg0);

// USA: func_ov031_02239a00
extern "C" ARM int func_ov031_02239a00(short* arg0) {
	unsigned short var0 = *(unsigned short*)((char*)arg0 + 2);
	if (var0 != 0) {
		return func_ov031_022393e4(var0);
	}
	return func_ov031_02239368(1);
}
