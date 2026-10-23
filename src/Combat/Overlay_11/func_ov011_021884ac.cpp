#include <globaldefs.h>

extern "C" unsigned int func_020421a0();
extern "C" unsigned int func_020457e0(unsigned int);
extern "C" unsigned int func_ov011_02184c68(unsigned int, unsigned int);

// USA: func_ov011_021884ac
extern "C" ARM unsigned int func_ov011_021884ac(unsigned int arg0) {
    func_ov011_02184c68(arg0, func_020457e0(func_020421a0()));
    return 1;
}
