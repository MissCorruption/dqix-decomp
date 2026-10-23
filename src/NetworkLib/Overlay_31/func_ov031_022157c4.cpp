#include <globaldefs.h>

extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern char data_ov031_02249b48;

// USA: func_ov031_022157c4
extern "C" ARM int func_ov031_022157c4(void *arg0) {
	return func_02001aec(arg0, &data_ov031_02249b48, 8) == 0;
}
