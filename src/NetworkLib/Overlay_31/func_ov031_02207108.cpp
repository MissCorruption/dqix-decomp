#include <globaldefs.h>

struct Struct_ov031_0224e22c {
	char unknown_0_[0x7c];
	int unknown_7c_;
};

extern "C" void* func_ov031_02207120(void* arg0, Struct_ov031_0224e22c* arg1);
extern Struct_ov031_0224e22c data_ov031_0224e22c;

// USA: func_ov031_02207108
extern "C" ARM void* func_ov031_02207108(Struct_ov031_0224e22c* arg0) {
	return func_ov031_02207120(&data_ov031_0224e22c, arg0);
}
