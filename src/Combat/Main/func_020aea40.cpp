#include <globaldefs.h>
struct Struct_020aea40 { unsigned short unknown_0_; };
extern "C" Struct_020aea40* func_02012fe4();
extern "C" void func_020ae694(int, int, unsigned short);
extern unsigned char data_020e9148[], data_020e9149[], data_020e914a[];
// USA: func_020aea40
extern "C" ARM void func_020aea40(unsigned int arg0, int arg1) {
    if (arg0 <= 3) {
        if (func_02012fe4()->unknown_0_ != 0x164a) return;
    } else {
        if (arg0 < 4 || arg0 > 7) return;
        if (func_02012fe4()->unknown_0_ != 0x21ff) return;
    }
    if (!arg1) {
        func_020ae694(1, 0, data_020e9148[arg0 * 3]);
        func_020ae694(1, 0, data_020e9149[arg0 * 3]);
        func_020ae694(1, 0, data_020e914a[arg0 * 3]);
    } else {
        func_020ae694(0, 0, data_020e9148[arg0 * 3]);
        func_020ae694(0, 0, data_020e9149[arg0 * 3]);
        func_020ae694(0, 0, data_020e914a[arg0 * 3]);
    }
}
