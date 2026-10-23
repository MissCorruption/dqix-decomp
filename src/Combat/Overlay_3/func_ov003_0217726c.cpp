#include <globaldefs.h>
#if defined(jpn)
enum { kRegion1004 = 0xf80 };
enum { kRegion103a = 0xfb6 };
enum { kRegion103c = 0xfb8 };
enum { kRegion874 = 0x7f0 };
enum { kRegion89c = 0x818 };
#else
enum { kRegion1004 = 0x1004 };
enum { kRegion103a = 0x103a };
enum { kRegion103c = 0x103c };
enum { kRegion874 = 0x874 };
enum { kRegion89c = 0x89c };
#endif

#include "Combat/Main/BattleList.h"

struct Container020dedd0;
struct Element020de650;
extern "C" struct Element020de650* func_020dedd0(struct Container020dedd0* c, int key);
extern "C" unsigned int func_ov003_02175898(char* obj, void* s);
struct Obj2081;
extern "C" void func_02080c20(struct Obj2081* obj, int key);
extern "C" void func_02080c68(void* obj, int id, int value);
struct Container02080fa8;
extern "C" void func_02080fa8(struct Container02080fa8* obj, int id, int value);
extern "C" void func_020813ec(void* obj, int key);

// USA: func_ov003_0217726c
extern "C" ARM void func_ov003_0217726c(char* obj) {
	int key = *(short*)(obj + kRegion103a);
	struct Container020dedd0* c = (struct Container020dedd0*)(obj + kRegion874);
	struct Obj2081* o = *(struct Obj2081**)(obj + kRegion89c);
	struct Element020de650* elem = func_020dedd0(c, key);
	int mode = *(short*)(obj + kRegion1004);
	int val = 0;
	int product;
	if (mode != 4) {
		if (mode == 5) val = *(unsigned short*)((char*)elem + 0x1a);
	} else {
		val = func_ov003_02175898(obj, elem);
	}
	product = val * (*(unsigned char*)(obj + kRegion103c));
	func_02080c20(o, 10);
	func_02080c68(o, 10, 0);
	func_02080fa8((struct Container02080fa8*)o, 0x5b, product);
	func_020813ec(o, 10);
}
