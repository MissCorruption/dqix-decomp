#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void* func_0202ae18(void);
struct SearchStruct;
extern "C" void func_0202c600(struct SearchStruct* obj, int value);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e22c(void);

struct S02195618 { unsigned char pad[
#if defined(jpn)
0x40c2
#else
0x42e2
#endif
]; unsigned char flag; };

// USA: func_ov017_02195618
extern "C" ARM void func_ov017_02195618(unsigned char* obj) {
	void* p = func_0202ae18();
	SetFlags00((GameResources*)obj, 2);
	((S02195618*)obj)->flag = 1;
	func_0202c600((struct SearchStruct*)p, 0);
	func_0202ae24();
	func_0205e22c();
}
