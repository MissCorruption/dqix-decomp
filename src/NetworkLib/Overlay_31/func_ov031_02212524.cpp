#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov031_0221a434(void*, void*);
extern "C" int func_ov031_0221a518(void*, void*);
extern "C" void func_ov031_0221a4cc(void);
extern "C" void* func_ov031_02211b54(void*, void*);
extern "C" void* func_ov031_02211b98(void*, void*, int);
extern char data_ov031_02249a80;

// USA: func_ov031_02212524
extern "C" ARM int func_ov031_02212524(char* arg0, void* arg1) {
	if (!func_ov031_0221a434((void*)func_ov031_02211b54, (void*)func_ov031_02211b98)) return 0;
	int var0;
	if (strlen(arg0) == 0) {
		var0 = func_ov031_0221a518(&data_ov031_02249a80, arg1);
	} else {
		var0 = func_ov031_0221a518(arg0, arg1);
	}
	if (var0 != 0) return 1;
	func_ov031_0221a4cc();
	return 0;
}
