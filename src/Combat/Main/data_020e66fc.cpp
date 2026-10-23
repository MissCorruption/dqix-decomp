#include <globaldefs.h>

#pragma define_section initcode ".init" RX

struct Struct_0214e34c;
extern "C" void func_020d806c(struct Struct_0214e34c* arg0);

extern struct Struct_0214e34c data_0214e34c;

// USA: func_020e66fc
extern "C" __declspec(initcode) ARM void __sinit_020e66fc(void) {
    func_020d806c(&data_0214e34c);
}
