#include <globaldefs.h>

struct Struct_ov031_0224e230 {
	char unknown_0_[0x7c];
	int unknown_7c_;
};

extern "C" void* func_ov031_02207120(void* arg0, Struct_ov031_0224e230* arg1);
extern Struct_ov031_0224e230 data_ov031_0224e230;

// USA: func_ov031_02207168
extern "C" ARM void* func_ov031_02207168(Struct_ov031_0224e230* arg0) {
	return func_ov031_02207120(&data_ov031_0224e230, arg0);
}
