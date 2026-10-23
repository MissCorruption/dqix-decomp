#include <globaldefs.h>

struct Struct_020e28dc;
struct Struct_020e2794_2;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
extern "C" void func_020e2794(struct Struct_020e2794_2* arg0, void* arg1);

struct Struct_ov003_0217480c {
	void* unknown_0_;
};

// USA: func_ov003_02176098
extern "C" ARM void func_ov003_02176098(struct Struct_ov003_0217480c* arg0) {
	if (arg0->unknown_0_ == NULL) return;
	if (!func_020e28dc((struct Struct_020e28dc*)arg0->unknown_0_)) return;
#if defined(jpn)
    enum { Enum_ov003_02176098_2008 = 0x754 };
#else
    enum { Enum_ov003_02176098_2008 = 0x7d8 };
#endif
	void* var0 = (char*)arg0 + Enum_ov003_02176098_2008;
	func_020e2794((struct Struct_020e2794_2*)arg0->unknown_0_, var0);
}
