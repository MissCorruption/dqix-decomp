#include <globaldefs.h>

struct Struct_02108760 { char unknown_0_[0xb4]; short unknown_b4_; };
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

extern struct Struct_02108760 data_02108760;

struct Struct_ov025_021e49e0 { char unknown_0_[8]; unsigned short unknown_8_; };

// USA: func_ov025_021e49e0
extern "C" ARM int func_ov025_021e49e0(struct Struct_ov025_021e49e0* arg0) {
    func_0205eaa0(&data_02108760, arg0->unknown_8_, 0);
    return 1;
}
