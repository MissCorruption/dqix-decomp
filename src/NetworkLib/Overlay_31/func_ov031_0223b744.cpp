#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_02001aec(void*, void*, int);

// USA: func_ov031_0223b744
extern "C" ARM int func_ov031_0223b744(char* arg0, char* arg1, int arg2) {
	int var0 = strlen(arg0);
	int var1 = strlen(arg1);
	if (var0 < arg2 || var1 < arg2) return 0;
	return func_02001aec(arg0 + (var0 - arg2), arg1 + (var1 - arg2), arg2) == 0;
}
