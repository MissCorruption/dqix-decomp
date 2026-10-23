#include <globaldefs.h>

struct Struct_020886dc_2;
extern "C" void func_02088818(struct Struct_020886dc_2* arg0, unsigned short arg1);

// USA: func_020887fc
extern "C" ARM void func_020887fc(unsigned char* arg0) {
    *(int*)(arg0 + 0x18) |= 0x80;
    func_02088818((struct Struct_020886dc_2*)arg0, 5);
}
