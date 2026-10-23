#include <globaldefs.h>

struct Struct_ov031_0220520c;
extern "C" int func_ov031_0220520c(void*, Struct_ov031_0220520c*);

struct Struct_ov031_0220527c {
	char unknown_0_[0x64];
	int unknown_64_;
};

// USA: func_ov031_0220527c
extern "C" ARM int func_ov031_0220527c(Struct_ov031_0220527c* arg0, void* arg1) {
	return func_ov031_0220520c((void*)arg0->unknown_64_, (Struct_ov031_0220520c*)arg1);
}
