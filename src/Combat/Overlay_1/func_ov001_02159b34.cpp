#include <globaldefs.h>

extern int data_ov001_02165884;
extern "C" int func_ov001_021646b8(int arg0, int arg1);

// USA: func_ov001_02159b34
extern "C" ARM int func_ov001_02159b34(void* arg0, void* arg1) {
	func_ov001_021646b8(data_ov001_02165884, *(int*)((char*)arg1 + 0x70));
	return 0;
}
