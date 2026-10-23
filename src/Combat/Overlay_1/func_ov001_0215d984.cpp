#include <globaldefs.h>
#include "Combat/Overlay_1/EventArgs.h"

extern "C" float func_ov017_021d6110(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov001_02159210(void* arg0, Struct_ov001_02158efc arg1, int arg2);

struct Struct_ov001_02165880_32 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_32 data_ov001_02165880;

// USA: func_ov001_0215d984
extern "C" ARM int func_ov001_0215d984(void* arg0) {
	Struct_ov001_02158efc var0;
	var0.unknown_0_ = (int)(4096.0f * func_ov017_021d6110(arg0));
	var0.unknown_4_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
	var0.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
	int var1 = func_ov017_021d60f4((char*)arg0 + 0x18);
	func_ov001_02159210(data_ov001_02165880.unknown_24_, var0, var1);
	return 1;
}
