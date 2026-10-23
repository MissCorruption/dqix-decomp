#include <globaldefs.h>

struct Struct_ov031_0224e5ac {
	void* unknown_0_;
	void* unknown_4_;
};

extern Struct_ov031_0224e5ac data_ov031_0224e5ac;

// USA: func_ov031_02211b40
extern "C" ARM void func_ov031_02211b40(void* arg0, void* arg1) {
	data_ov031_0224e5ac.unknown_4_ = arg0;
	data_ov031_0224e5ac.unknown_0_ = arg1;
}
