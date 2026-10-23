#include <globaldefs.h>

extern int data_02108760;
extern "C" void func_0205ebec(void* obj);

struct Obj_021be3ec { unsigned char field0; unsigned char field1; };

// USA: func_ov017_021be3ec
extern "C" ARM void func_ov017_021be3ec(Obj_021be3ec* obj) {
	func_0205ebec(&data_02108760);
	obj->field1 = 1;
}
