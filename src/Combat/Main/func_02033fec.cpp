#include <globaldefs.h>
#include "World/Object3D.h"
#include "Combat/ObjectStateInitialization.h"
struct Struct_02032e58;

// USA: func_02033fec
extern "C" ARM void func_02033fec(Struct_02032e58* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    arg0->unknown_0_.EnableFlag(0x40000);
    var0[0xe0] |= 0x2;
}
