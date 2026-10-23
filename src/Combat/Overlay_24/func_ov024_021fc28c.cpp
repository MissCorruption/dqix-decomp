#include <globaldefs.h>

extern "C" int func_ov024_021fe698(char* arg0, int arg1);
extern "C" void func_ov024_021fdf04(void* arg0, int arg1);

// USA: func_ov024_021fc28c
extern "C" ARM void func_ov024_021fc28c(char* arg0) {
	if (func_ov024_021fe698(arg0, 1)) {
		func_ov024_021fdf04(arg0, 7);
	}
}
