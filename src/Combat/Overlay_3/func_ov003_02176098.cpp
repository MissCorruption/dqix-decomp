#include <globaldefs.h>

struct Outer020e28dc;
struct Struct020e2794;
extern "C" int func_020e28dc(struct Outer020e28dc* o);
extern "C" void func_020e2794(struct Struct020e2794* self, void* b);

struct Wrapper02176098 {
	void* field0;
};

// USA: func_ov003_02176098
extern "C" ARM void func_ov003_02176098(struct Wrapper02176098* p) {
	if (p->field0 == NULL) return;
	if (!func_020e28dc((struct Outer020e28dc*)p->field0)) return;
#if defined(jpn)
    enum { entryOffset = 0x754 };
#else
    enum { entryOffset = 0x7d8 };
#endif
	void* b = (char*)p + entryOffset;
	func_020e2794((struct Struct020e2794*)p->field0, b);
}
