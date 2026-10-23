#include <globaldefs.h>

struct Obj02205194;
extern "C" int func_ov031_02205194(Obj02205194* obj);
extern "C" int func_ov031_0220520c(int v, void* extra);

// USA: func_ov031_0220529c
extern "C" ARM int func_ov031_0220529c(Obj02205194* obj, void* extra) {
	int v = func_ov031_02205194(obj);
	return func_ov031_0220520c(v, extra);
}
