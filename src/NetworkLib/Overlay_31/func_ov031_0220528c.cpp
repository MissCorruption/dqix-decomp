#include <globaldefs.h>

struct Struct_ov031_0220520c;
extern "C" int func_ov031_0220520c(void*, Struct_ov031_0220520c*);

struct Struct_ov031_0220528c {
	char unknown_0_[0x68];
	int unknown_68_;
};

// USA: func_ov031_0220528c
extern "C" ARM int func_ov031_0220528c(Struct_ov031_0220528c* arg0, void* arg1) {
	return func_ov031_0220520c((void*)arg0->unknown_68_, (Struct_ov031_0220520c*)arg1);
}
