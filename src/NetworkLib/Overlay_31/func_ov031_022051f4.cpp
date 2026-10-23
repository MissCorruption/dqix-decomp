#include <globaldefs.h>

struct Struct_ov031_02205194;
extern "C" int func_ov031_02205194(Struct_ov031_02205194* arg0);
extern "C" int func_ov031_022051a8(int arg0, void* arg1);

// USA: func_ov031_022051f4
extern "C" ARM int func_ov031_022051f4(Struct_ov031_02205194* arg0, void* arg1) {
	int var0 = func_ov031_02205194(arg0);
	return func_ov031_022051a8(var0, arg1);
}
