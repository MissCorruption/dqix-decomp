#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern char data_ov034_022a2a54[12];

struct Struct_ov034_022a29e4 { void* unknown_0_; };

// USA: func_ov034_022a29e4
extern "C" ARM void* func_ov034_022a29e4(struct Struct_ov034_022a29e4* arg0) {
	arg0->unknown_0_ = &data_ov034_022a2a54;
	((BackgroundLoader*)(arg0))->InitializeOrReset();
	return arg0;
}
