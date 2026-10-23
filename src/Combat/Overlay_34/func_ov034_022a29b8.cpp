#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern char data_ov034_022a2a54[12];
extern char data_ov034_022a2a48[12];

struct Struct_ov034_022a29b8 { void* unknown_0_; };

// USA: func_ov034_022a29b8
extern "C" ARM void* func_ov034_022a29b8(struct Struct_ov034_022a29b8* arg0) {
	arg0->unknown_0_ = &data_ov034_022a2a54;
	((BackgroundLoader*)(arg0))->InitializeOrReset();
	arg0->unknown_0_ = &data_ov034_022a2a48;
	return arg0;
}
