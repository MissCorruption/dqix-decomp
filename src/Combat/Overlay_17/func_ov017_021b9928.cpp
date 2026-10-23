#include <globaldefs.h>

extern "C" void func_ov008_02184968(void* arg0);
extern "C" void func_0208be90(void*);

struct Struct_ov017_021b9928 {
    unsigned char unknown_0_[0x30];
    unsigned char unknown_30_[0xe8];
    void* unknown_118_;
};

// USA: func_ov017_021b9928
extern "C" ARM void func_ov017_021b9928(char* arg0) {
    Struct_ov017_021b9928* var0 = (Struct_ov017_021b9928*)arg0;
	if (var0->unknown_118_ != NULL) func_ov008_02184968(var0->unknown_118_);
	func_0208be90(var0->unknown_30_);
}
