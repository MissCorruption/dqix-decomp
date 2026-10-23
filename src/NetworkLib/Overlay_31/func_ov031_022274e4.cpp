#include <globaldefs.h>
extern int data_ov031_02250c0c;
// USA: func_ov031_022274e4
extern "C" ARM void func_ov031_022274e4(int* arg0, int* arg1) {
	if (arg0) *arg0 = *(int*)((char*)&data_ov031_02250c0c + 0x10);
	if (arg1) *arg1 = *(int*)((char*)&data_ov031_02250c0c + 0x14);
}
