#include <globaldefs.h>

struct Struct_ov031_02227570 {
    unsigned int unknown_0_0_ : 4;
    unsigned int unknown_0_4_ : 28;
};
extern int data_ov031_02250c0c;

// USA: func_ov031_02227570
extern "C" ARM int func_ov031_02227570(unsigned int arg0) {
    struct Struct_ov031_02227570* var0 = (struct Struct_ov031_02227570*)((char*)&data_ov031_02250c0c + 0x8);
    return (arg0 & var0->unknown_0_4_) != 0;
}
