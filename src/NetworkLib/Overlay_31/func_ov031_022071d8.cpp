#include <globaldefs.h>

extern "C" int func_ov031_02205364(void*);
extern int data_ov031_022496c4;
extern int data_ov031_022496ac;

// USA: func_ov031_022071d8
extern "C" ARM int func_ov031_022071d8(int arg0, int arg1) {
	if (arg1 == 1) return func_ov031_02205364(&data_ov031_022496c4);
	return func_ov031_02205364(&data_ov031_022496ac);
}
