#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" char* func_ov031_02218e2c(void* arg0, void* arg1);

// USA: func_ov031_02218ed8
extern "C" ARM int func_ov031_02218ed8(void* arg0, void* arg1, char* arg2, int arg3) {
	char* var0 = func_ov031_02218e2c(arg0, arg1);
	if (var0 == NULL) {
		return 0;
	}
	if ((int)strlen(var0) >= arg3) {
		return 0;
	}
	strcpy(arg2, var0);
	return 1;
}
