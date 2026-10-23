#include <globaldefs.h>

extern "C" unsigned short* func_02012fe4(void);

struct Entry_02028bd0;
extern struct Entry_02028bd0 data_020fdd44;
extern "C" struct Entry_02028bd0* func_02028bd0(struct Entry_02028bd0* base, int key);

// USA: func_02027cb0
extern "C" ARM struct Entry_02028bd0* func_02027cb0(void) {
    return func_02028bd0(&data_020fdd44, *func_02012fe4());
}
