#include <globaldefs.h>

extern char data_021015a0;
extern char data_02101680;
extern char data_0210168a;
extern "C" int func_0202cddc(void);
extern "C" void VectorizedMemset(void*, int, int);

struct Struct_0202cd50 { unsigned short unknown_0_, unknown_2_, unknown_4_; };

// USA: func_0202cd50
extern "C" ARM int func_0202cd50(int (*arg0)(void), Struct_0202cd50* arg1, int arg2) {
    *(int*)(&data_021015a0 + 0x10) = 2;
    *(void**)(&data_021015a0 + 0x44) = (void*)arg0;
    *(unsigned short*)(&data_021015a0 + 0x8) = (unsigned short)arg2;
    *(unsigned short*)(&data_02101680 + 0x6) = 1;
    *(unsigned short*)(&data_021015a0 + 0x4) = 0;
    if (arg1 != 0) {
        *(unsigned short*)(&data_02101680 + 0xe) = arg1->unknown_4_;
        *(unsigned short*)(&data_02101680 + 0xc) = arg1->unknown_2_;
        *(unsigned short*)(&data_02101680 + 0xa) = arg1->unknown_0_;
    } else {
        VectorizedMemset(&data_0210168a, 0xff, 6);
    }
    if (func_0202cddc() == 0) {
        *(int*)(&data_021015a0 + 0x10) = 9;
        return 0;
    }
    return 1;
}
