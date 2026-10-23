#include <globaldefs.h>

extern "C" void func_0205ebc0(void* arg0, int arg1, int arg2);

extern char data_02108760;

struct Struct_ov025_021e6320 { char unknown_0_[8]; unsigned short unknown_8_; unsigned short unknown_a_; };

// USA: func_ov025_021e6320
extern "C" ARM int func_ov025_021e6320(struct Struct_ov025_021e6320* arg0) {
    func_0205ebc0(&data_02108760, arg0->unknown_8_, arg0->unknown_a_);
    return 1;
}
