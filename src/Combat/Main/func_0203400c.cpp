#include <globaldefs.h>
#include "World/Object3D.h"
#include "Combat/ObjectStateInitialization.h"
struct Struct_02032e58;

// USA: func_0203400c
extern "C" ARM void func_0203400c(Struct_02032e58* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    arg0->unknown_0_.DisableFlag(0x40000);
    var0[0xe0] &= ~0x2;
}
