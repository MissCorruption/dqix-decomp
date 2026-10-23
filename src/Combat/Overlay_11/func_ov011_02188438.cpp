#include <globaldefs.h>

extern int data_02109bf4;
extern "C" unsigned int func_0209ca2c(void*);
extern "C" unsigned int func_ov011_02184c68(unsigned int, unsigned int);

// USA: func_ov011_02188438
extern "C" ARM unsigned int func_ov011_02188438(unsigned int arg0) {
    func_ov011_02184c68(arg0, func_0209ca2c((void*)((unsigned int)&data_02109bf4)));
    return 1;
}
