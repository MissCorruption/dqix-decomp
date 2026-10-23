#include <globaldefs.h>

extern "C" int func_ov031_02207180(void* arg0);
extern "C" int func_ov031_022071b4(void* arg0);

// USA: func_ov031_022068cc
extern "C" ARM int func_ov031_022068cc(void* arg0) {
	if ((int)arg0 >= 0) {
		if (func_ov031_02207180(arg0) != 0) {
			if (func_ov031_022071b4(arg0) == 0) {
				return 1;
			}
		}
	}
	return 0;
}
