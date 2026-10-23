#include <globaldefs.h>
#include "Combat/MenuNodeChain.h"

struct Struct_0207f510;
struct Struct_0207ef60;
extern "C" void func_0207f510(Struct_0207f510*);
extern "C" void func_0207ef60(Struct_0207ef60*);

// USA: func_0207f84c
extern "C" ARM void func_0207f84c(Struct_0207f7f0* arg0) {
    arg0->unknown_0_ = 0;
    func_0207f510((Struct_0207f510*)arg0->unknown_4_);
    func_0207ef60((Struct_0207ef60*)arg0->unknown_c_);
    arg0->unknown_14_ = 0;
    arg0->unknown_18_ = 0;
#if defined(jpn)
    arg0->unknown_1c_ = -1;
#else
    arg0->unknown_20_[0] = arg0->unknown_20_[1] = arg0->unknown_20_[2] = arg0->unknown_1c_ = -1;
#endif
    arg0->unknown_2c_ = 0;
    arg0->unknown_30_ = 0;
    arg0->unknown_34_ = 8;
    arg0->unknown_36_ = -1;
    arg0->unknown_38_ = 0;
    arg0->unknown_39_ = 0;
    arg0->unknown_3a_ = 0;
    arg0->unknown_3b_ = 0x10;
    arg0->unknown_3c_ = 0x10;
}
