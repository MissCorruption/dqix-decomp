#include <globaldefs.h>

extern "C" unsigned short* func_02012fe4(void);

struct Struct_020fdd44;
extern struct Struct_020fdd44 data_020fdd44;
extern "C" struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1);

// USA: func_02027cb0
extern "C" ARM struct Struct_020fdd44* func_02027cb0(void) {
    return func_02028bd0(&data_020fdd44, *func_02012fe4());
}
