#include <globaldefs.h>

#if defined(jpn)
enum { BUFFER_OFFSET = 0x24 };
#else
enum { BUFFER_OFFSET = 0x28 };
#endif

struct Obj0204b010;
extern "C" void func_0204b010(struct Obj0204b010* obj, void* p);

struct Obj28_021f7864 { char pad[0xc]; unsigned char flags; };

// USA: func_ov023_021f7864
extern "C" ARM void func_ov023_021f7864(struct Obj28_021f7864* obj) {
	if (obj->flags & 1) return;
	func_0204b010((struct Obj0204b010*)((char*)obj + BUFFER_OFFSET), NULL);
}
