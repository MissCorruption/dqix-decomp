#include <globaldefs.h>
extern int data_ov031_02250c0c;
// USA: func_ov031_02227520
extern "C" ARM void func_ov031_02227520(int* arg0, int* arg1) {
	if (arg0) *arg0 = *(int*)((char*)&data_ov031_02250c0c + 0x18);
	if (arg1) *arg1 = *(int*)((char*)&data_ov031_02250c0c + 0x1c);
}
