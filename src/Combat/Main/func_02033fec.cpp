#include <globaldefs.h>
#include "World/Object3D.h"
#include "Combat/ObjectStateInitialization.h"
struct ObjectStatePrefix;

// USA: func_02033fec
extern "C" ARM void func_02033fec(ObjectStatePrefix* arg0) {
    unsigned char* obj = (unsigned char*)arg0;
    arg0->object.EnableFlag(0x40000);
    obj[0xe0] |= 0x2;
}
