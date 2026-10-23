#include <globaldefs.h>

extern "C" int func_ov031_02239368(int);

// USA: func_ov031_02239b98
extern "C" ARM void func_ov031_02239b98(short* arg0) {
	if (*(unsigned short*)((char*)arg0 + 2) != 0) {
		func_ov031_02239368(10);
	} else {
		func_ov031_02239368(0);
	}
}
